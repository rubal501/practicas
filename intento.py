import random
import time
i = int(random.uniform(0, 100))
print "pienso en un numero, adivina cual es: "
time.sleep(3)
a = raw_input("intenta :")
if a == i:
    print "adivinaste humano"
elif a != i:
    print "intenta de nuevo humano"
