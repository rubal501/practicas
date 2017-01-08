import serial
ser=serial.Serial('/dev/ttyACM0', 9600)
print "Dame un caracter ('r' para rojo, 'a' para amarillo, 'v' para verde y 's' para salir):  "
entrada = raw_input()
while entrada != 's':
	ser.write(entrada)
	print "he enviado un", entrada
	print "introduce otro caracter"
	entrada = raw_input()
