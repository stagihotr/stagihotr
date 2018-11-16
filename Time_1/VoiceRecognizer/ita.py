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
    response = {
        "success": True,
        "error": None,
        "transcription": None
    }


    try:
        response["transcription"] = recognizer.recognize_google(audio, language='pt-BR')
    except sr.RequestError:
        # API was unreachable or unresponsive
        response["success"] = False
        response["error"] = "API unavailable"
    except sr.UnknownValueError:
        # speech was unintelligible
        response["error"] = "Unable to recognize speech"

    return response

def getText(): 
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



if __name__ == "__main__":
    #t = getText()
    t = "avance 5 passos velocidade 2"
    word_collection = t.split(' ') #str(t.lower).split(' ')

    response = {
        "command": None,
        "steps": None,
        "velocity": None
    }

    if 'avance' in word_collection:
        response["command"] = "FW"

    if 'passos' in word_collection:
        response["steps"] = word_collection[word_collection.index('passos') - 1]

    if 'velocidade' in word_collection:
        response["velocity"] = word_collection[word_collection.index('velocidade') + 1]   


    #matches = (x for x in word_collection if x == 'passos')

    print(word_collection.index('passos'))

    #for w in word_collection:
        
    #    


    print (response)
    print(word_collection)

    print(t)




#print(r.recognize_google(audio, language='pt-BR', show_all=True))