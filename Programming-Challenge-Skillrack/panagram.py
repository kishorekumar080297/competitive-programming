import string
def checkPan(vals):
	for val in vals:
		if (val<1):
			return False
	return True

chars=string.lowercase
alphabet={}
for char in chars:
	alphabet[char]=0
inpStr=raw_input()
for c in inpStr.lower():
	if c in chars:
		alphabet[c]+=1
vals=alphabet.values()
check=checkPan(vals)
if(check):
	print "YES"
else:
	print "NO"
