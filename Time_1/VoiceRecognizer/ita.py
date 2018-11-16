import speech_recognition as sr 


def recognize_speech_from_mic(recognizer, microphone):
    # check that recognizer and microphone arguments are appropriate type
    if not isinstance(recognizer, sr.Recognizer):
        raise TypeError("`recognizer` must be `Recognizer` instance")

    if not isinstance(microphone, sr.Microphone):
        raise TypeError("`microphone` must be `Microphone` instance")

    with microphone as source:
        #r.adjust_for_ambient_noise(source)
        audio = recognizer.listen(source)

    # set up the response object
    resp = {
        "success": True,
        "error": None,
        "transcription": None
    }


    try:
        resp["transcription"] = recognizer.recognize_google(audio, language='pt-BR')
    except sr.RequestError:
        # API was unreachable or unresponsive
        resp["success"] = False
        resp["error"] = "API unavailable"
    except sr.UnknownValueError:
        # speech was unintelligible
        resp["error"] = "Unable to recognize speech"

    return resp

def speechToText(): 
    PROMPT_LIMIT = 2
    recognizer = sr.Recognizer()
    microphone = sr.Microphone()

    for j in range(PROMPT_LIMIT):
        print("De um comando!\n")
        recog = recognize_speech_from_mic(recognizer, microphone)
        if recog["transcription"]:
            break
        if not recog["success"]:
            break
        print("Eu não entendo o que disse?\n")

    if recog["error"]:
        print("ERROR: {}".format(recog["error"]))

    return recog["transcription"]

def interpretarTexto(text_ref):
    word_collection = text_ref.split(' ') #str(t.lower).split(' ')

    cmd_dict ={"avance":"FW", "avancar":"FW", "ande" : "FW", "andar":"FW", "caminhe" :"FW", "caminhar": "FW",
               "sente":"SI", "sentar":"SI","abaixe":"SI", "abaixar":"SI",
               "levante":"UP","levantar":"UP","levante-se":"UP","levanta-se":"UP"}

    num_dict ={"um":1, "hum":1, "1":1, 
               "dois":2, "duas":2, "2":2,
               "tres":3, "três":3, "3":3,
               "quarto":4, "quatro":4, "4":4,
               "cinco":5, "quinto":5, "5":5,
               "seis":6, "sexto":6, "6":6,
               "setimo":7, "sete":7, "7":7,
               "oito":8, "oitavo":8, "8":8,
               "nono":9, "nove":9, "9":9 ,
               None: 0}

    resp = {
        "command": None,
        "steps": None,
        "velocity": None,
        "collection":word_collection
    }


    resp["command"] = word_collection[0]

    if 'passos' in word_collection:
        resp["steps"] = word_collection[word_collection.index('passos') - 1]

    if 'velocidade' in word_collection:
        resp["velocity"] = word_collection[word_collection.index('velocidade') + 1]   

    if resp["command"] != None:
        resp["command"] = cmd_dict[resp["command"]]

    resp["steps"] = num_dict[resp["steps"]]

    resp["velocity"] = num_dict[resp["velocity"]]

    return resp

'''
Formata o protocolo
'''
def protocol(resp):
    P_HEADER = "STGHTR"
    P_TOPIC ="TOP001"
    P_FROM ="PNL001"
    P_TO ="EXO001"
    P_CMD =resp["command"]
    P_MAGNITUDE = resp["velocity"]
    P_CMD_PLUS = "{0:0=3d}".format(resp["steps"])
    P_RESERVED = "0"
    P_STATUS = "RN"

    '''
    Obtem o tempo em TimeStamp
    '''
    def GetTimeStamp():
        import time
        ts = time.time()
        return int(ts)

    P_TIME = GetTimeStamp()

    prot = "{0}{1}{2}{3}->{4}.{5}.{6}.{7}.{8}<-{9}".format(P_HEADER, P_TOPIC, P_FROM, P_TO, 
                                                    P_CMD, P_MAGNITUDE, P_CMD_PLUS, P_RESERVED, P_STATUS, 
                                                    P_TIME)

    '''
    Formata em MD5
    '''
    def computeMD5hash(my_string):
        import hashlib
        m = hashlib.md5()
        m.update(my_string.encode('utf-8'))
        return m.hexdigest()

    P_MD5 = computeMD5hash(prot)

    return "{0}{1}".format(prot,P_MD5)


if __name__ == "__main__":
    #text_ref = getText()
    text_ref = "avance 5 passos velocidade 2"
    #text_ref = "sentar"
    resp = interpretarTexto(text_ref)
    print (resp)
    prot = protocol(resp)
    print (prot)





#print(r.recognize_google(audio, language='pt-BR', show_all=True))