#Python 3

import random
import sys

print ("Login ID Key Generator by Raitou")
print ("This is written due to lack of libraries in C++ for Random Generator")

def check_key(key):
	char_sum = 0
	for c in key:
		char_sum += ord(c)
	sys.stdout.write("{0:3} | {1}      \r".format(char_sum, key))
	sys.stdout.flush()
	return char_sum

isAdmin = ""
key1 = ""
key2 = ""
key3 = ""
key4 = ""
key5 = ""
while True:
	key1 += random.choice("ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789")
	key2 += random.choice("ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789")
	key3 += random.choice("ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789")
	key4 += random.choice("ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789")
	#key5 += random.choice("ABCDGHIJKLMNOPQRSTVWXYZ0123456789")
	s1 = check_key(key1)
	s2 = check_key(key2)
	s3 = check_key(key3)
	s4 = check_key(key4)
	#s5 = check_key(key5)
	if s1 > 450 and s2 > 450 and s3 > 450 and s4 > 450:
		key1 = ""
		key2 = ""
		key3 = ""
		key4 = ""
		key5 = ""
	elif s1 == s2 and s3 == s4:
		if s1 > 245 and s2 > 245 and s3 > 245 and s4 > 245:
			if s1 == s3:
				isAdmin = 1
			else:
				isAdmin = 0
			print ("Found valid key: {}-2018-{}-{}-{}-{}".format(isAdmin,key1,key2,key3,key4))
			
			
			
			
			
			
			