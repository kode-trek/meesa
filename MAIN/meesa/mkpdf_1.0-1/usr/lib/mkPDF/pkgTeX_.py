#https://ctan.org/pkg

from os import system as s
from os import chdir

from random import random

from sys import argv

try:		v1 = argv[1]
except:	v1 = ''

#v2: temp-dir
v2 = str(random())
s('unzip -q -j ' + v1 + ' -d ' + v2 + ' 2>/dev/null')

try:
	chdir(v2)
	flg = s('ls *.ins *.dtx 2>/dev/null')
	if flg == 0:
		s('latex *.ins *.dtx 2>/dev/null')
		s('mv *.sty .. 2>/dev/null')
		# clean area
		chdir('..')
		s('rm -rf ' + v2 + ' 2>/dev/null')
	else:
		s('mv *.sty .. 2>/dev/null')
		# clean area
		chdir('..')
		s('rm -rf ' + v2 + ' 2>/dev/null')
except:	pass
