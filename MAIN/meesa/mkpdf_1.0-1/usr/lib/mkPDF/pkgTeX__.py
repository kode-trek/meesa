#https://ctan.org/pkg
from func import *
try:		v1 = argv[1]
except:	v1 = ''
##v2: temp-dir
#v2 = str(random())
#s('unzip -q -j ' + v1 + ' -d ' + v2 + ' 2>/dev/null')
#try:
#	chdir(v2)
#	flg = s('ls *.ins *.dtx 2>/dev/null')
#	if flg == 0:
#		s('latex *.ins *.dtx 2>/dev/null')
#		s('mv *.sty .. 2>/dev/null')
#		# clean area
#		chdir('..')
#		s('rm -rf ' + v2 + ' 2>/dev/null')
#	else:
#		s('mv *.sty .. 2>/dev/null')
#		# clean area
#		chdir('..')
#		s('rm -rf ' + v2 + ' 2>/dev/null')
#except:	pass
try:
	print '[WARNING] tlmgr repo is out-dated: 2015',
	ans = raw_input('continue [y|n]: ')
	if ans == 'y':
		system('sudo tlmgr install ' + v1 + ' >/dev/null')
		print 'done!'
	else:	print '[OK] cancelled by user.'
except:
	print ''
	exit()
