from playsound import playsound as ps
import speech_recognition as spr
import pyttsx3 as say

engine = say.init('sapi5')
voices = engine.getProperty('voices')
engine.setProperty('voices',voices[0].id)
engine.say('hello prajas')
