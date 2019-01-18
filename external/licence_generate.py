# -*- encoding:utf-8 -*-

"""
-> licence_generate.py

Copyright (c) 2019 B.Will.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

// DEVELOPED by wil.tor
"""
#!/usr/bin/python2.7

import os

licence="""

Copyright (c) 2019 B.Will.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/
"""

signature="""
// DEVELOPED by wil.tor

"""
G = '\033[1;32m' # green
R = '\033[1;31m' # red
B = '\033[1;34m' # blue
W = '\033[0m' # white

F = R+"[-] "+W
I = B+"[*] "+W
T = G+"[+] "+W

print("Welcome in this small and beautiful program !\n")
name_file=raw_input("What's the name of the file ?\n -> ")
file_location=str("/home/William_4598/Typhoon/"+name_file)

file_name_licence="""/*
-> '/%s'"""%name_file

if os.path.exists(file_location):
	file=open(file_location, "r")
	res=(file_name_licence+licence+signature)+file.read()
	file.close()
	file=open(file_location, "w")
	file.write(res)
	file.close()

	print("\n"+I+"Generation of the licence...")
	print(T+"Completed.")
else:
	print(F+"'%s' isn't a file."%file_location)
