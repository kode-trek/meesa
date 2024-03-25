from func import *
# checks for number of argument(s).
try:	tf = argv[1]
except:
	print '[FAILED] no argument(s) supplied.'
	print 'mkpdf --help'
	exit()
# no directory is allowed.
if isdir(tf):
	print '[FAIELD] no directory is allowed.'
	exit()
# checks for file existence.
if not exists(tf):
	print '[FAIELD] file not found.'
	exit()
# elicits file-name
fn = uri(tf)[3]
# out: <file-name.PDF>
try:
	cl = system('xelatex -halt-on-error "' + tf + '" >/dev/null')
	cb = system('bibtex "' + fn + '" >/dev/null')
	cl = system('xelatex -halt-on-error "' + tf + '" >/dev/null')
	cl = system('xelatex -halt-on-error "' + tf + '" >/dev/null')
except:	pass
# cleans workspace
if cb == 0:	system('rm *.blg 2>/dev/null')
else:
	print "[WARNING] no bibliography written."
	print "stderr available at: " + fn + ".blg"
if cl == 0:
	system('rm *.log 2>/dev/null')
	print '[OK] <' + fn + '.PDF> produced.'
else:
	print "[FAILED] no output PDF file produced."
	print "stderr available at: " + fn + ".log"
system('rm *.out 2>/dev/null')
system('rm *.aux 2>/dev/null')
system('rm *.bbl 2>/dev/null')
