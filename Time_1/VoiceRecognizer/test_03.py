import speech_recognition as sr 

r = sr.Recognizer()

#print(sr.Microphone.list_microphone_names())
mic = sr.Microphone()
mic = sr.Microphone()

#mic = sr.Microphone()

with mic as source:
    #r.adjust_for_ambient_noise(source)
    print("Dê um comando!\n")
    audio = r.listen(source)

print("Comando em processamento.\n ")
print(r.recognize_google(audio, language='pt-BR'))

#print(r.recognize_google(audio, language='pt-BR', show_all=True))