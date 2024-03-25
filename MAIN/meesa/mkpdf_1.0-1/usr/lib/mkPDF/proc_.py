from os import system as s

from sys import argv
from sys import exit

from random import random

from shutil import copyfile

def fname(arg1):
	if '/' in arg1:	arg1 = arg1.split('/')[-1]
	ext = arg1.split('.')[-1]
	rest = arg1.split('.')[:-1]
	rest2 = ""
	for i in rest:	rest2 += i + '.'
	fname = rest2[:-1]
	return (fname, ext)
