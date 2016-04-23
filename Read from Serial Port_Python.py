import time

def test():
	f = open("/dev/tty.uart-92FF512FD5873D48", "r")
	result=f.read(10)
	f.close()

	print(len(result))
	print(type(result))

	print("'"+ result +"'")
	print(result.split("\r\n"))


test()