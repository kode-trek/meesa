from proc import *

# elicit extension
try:		v1 = fname(argv[1])[1]
except:	v1 = ""

if		v1 == 'zip':
	v = 'new_font_' + str(int(time()))
	try:
		with ZipFile(argv[1], 'r') as zip_ref:	zip_ref.extractall(v)
	except:
		print "[FAILED]: unzip font."
		exit()
	cmd = 'sudo mv ' + v + ' /usr/share/fonts/'
	c = s(cmd + ' 2>/dev/null')
	if c != 0:
		print "[FAILED]: " + cmd
		s('sudo rm -rf' + v)
		exit()
	s('fc-cache -f -v 1>/dev/null')
	print '[OK]: font added to </usr/share/fonts/>'
elif	v1 == 'ttf':
	cmd = 'sudo cp "' + argv[1] + '" /usr/share/fonts/truetype/'
	c = s(cmd + ' 2>/dev/null')
	if c != 0:
		print "[FAILED]: " + cmd
		exit()
	s('fc-cache -f -v 1>/dev/null')
	print '[OK]: font added to </usr/share/fonts/truetype/>'
else:	print "[FAILED]: install font."
