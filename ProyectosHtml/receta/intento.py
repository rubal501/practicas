import random

print "i am going to think in a random number."
o = int(raw_input("which range (10,100,1000) should i use?"))

u =int(raw_input("give me yout guess"))
def diferenciador (x,y):
    z = random.randrange(0, x, 1)
    if y != z:
        if y - z >= (.5 *x):
            return "yo losse, your number was too hight "
        elif y - z <= (.5*x):
            return "you losse your number was too low "
    elif y == z:
        return "yo won hurray"
print diferenciador(o,u)
