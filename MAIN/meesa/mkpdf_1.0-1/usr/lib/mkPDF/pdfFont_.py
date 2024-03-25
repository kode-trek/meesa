from func import *
# elicits extension.
try:	arg1 = argv[1]
except:
	print '[FAILED] no argument(s) supplied.'
	print 'mkpdf --font <.zip | .ttf>'
	exit()
# no directory is allowed.
if isdir(arg1) == True:
	print '[FAILED] no directory is allowed.'
	exit()
# checks for file existence.
if not exists(arg1):
	print '[FAIELD] file not found.'
	exit()
# checks with the extension.
ext = uri(arg1)[4]
if	ext == '.zip' or ext == '.ZIP':
	v = 'new_font_' + str(int(time()))
	print '[1] extracting <.zip> file...'
	try:
		with ZipFile(arg1, 'r') as zip_ref:	zip_ref.extractall(v)
	except:
		print '[FAILED]: to unzip.'
		system('sudo rm -rf ' + v + ' 2>/dev/null')
		exit()
	print '[2] moving <' + v + '> to </usr/share/fonts/>...'
	cmd = 'sudo mv ' + v + ' /usr/share/fonts/'
	c = system(cmd)
	print '[3] updating font-table...'
elif	ext != '.zip' or ext != '.ZIP':
	v = 'new_font_' + str(int(time()))
	system('cp "' + arg1 + '" ' + v)
	print '[1] moving <' + v + '> to </usr/share/fonts/>...'
	cmd = 'sudo mv ' + v + ' /usr/share/fonts/'
	c = system(cmd)
	print '[2] updating font-table...'
else:	print "[FAILED]: to install font(s)."
system('fc-cache -f -v 1>/dev/null')
print '[OK]: new font(s) added to </usr/share/fonts/>'
