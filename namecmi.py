print( "namaste")

import sys
    #checking for index errors 

if len(sys.argv)<2:
#   print("Too few arguments")
    sys.exit("Too few arguments")
    #for all others 
'''
for arg in sys.argv:
    print("hello, my name is, ", arg)
'''

    #this prints out all of the name tags..we just need a slice 
    #SLICES: subset of a big list or data set  etc 

for arg in sys.argv[1:]: #[1:-1] gives from the end
    print("hello, my name is, ", arg)
    #checking for one 

'''
elif len(sys.argv) >2:
#   print("Too many arguments")
    sys.exit("Too many arguments")

    #print the name tag 
print("hello my name is ",sys.argv[1])
'''

'''
else:
    print("hello my name is ",sys.argv[1])'''

'''
try:
    print("hello my name is ",sys.argv[1])
except IndexError:
    print("Too few arguments")

#sys.argv[0] give index error
'''