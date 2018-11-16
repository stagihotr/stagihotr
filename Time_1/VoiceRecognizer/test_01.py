
#https://realpython.com/python-speech-recognition/
import speech_recognition as sr

print(sr.__version__ )

r =sr.Recognizer()

audioFile = sr.AudioFile('jackhammer.wav')
with audioFile as source:
    r.adjust_for_ambient_noise(source, duration=0.5)
    audio1 = r.record(source)
    #audio2 = r.record(source, offset=3, duration=4)
    print(type(audio1))

print(r.recognize_google(audio1, show_all=True)) #permite apresentar todas as alternativas possiveis


#offset => a partir de um ponto especifico do audio (deslocamento)
#duration => duracao em segundos de um audio