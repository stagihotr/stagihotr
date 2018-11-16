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


if __name__ == "__main__":
    PROMPT_LIMIT = 5
    recognizer = sr.Recognizer()
    microphone = sr.Microphone()

    for j in range(PROMPT_LIMIT):
        recog = recognize_speech_from_mic(recognizer, microphone)
        if recog["transcription"]:
            break
        if not recog["success"]:
            break
        print("Eu não entendo o que disse {}?\n".format(j))

    if recog["error"]:
        print("ERROR: {}".format(recog["error"]))

    print(recog["transcription"])



#print(r.recognize_google(audio, language='pt-BR', show_all=True))