from proc import *

# elicit file-name
try:		v1 = fname(argv[1])[0]
except:	v1 = []

# out: <file-name.PDF>
try:
	s('pdflatex "' + argv[1] + '"')
	s('bibtex "' + v1 + '"')
	s('pdflatex "' + argv[1] + '"')
	s('pdflatex "' + argv[1] + '"')
except:	pass

# clean area
s('rm *.aux 2>/dev/null')
s('rm *.log 2>/dev/null')
s('rm *.out 2>/dev/null')
s('rm *.bbl 2>/dev/null')
s('rm *.blg 2>/dev/null')
