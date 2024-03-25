from func import *
# elicits all line(s) inside <.TEX> document.
fh = open(argv[1])
v1 = fh.readlines()
fh.close()
v2 = []
for i in v1:	v2.append(i[:-1])
l = v2
# enlists all line(s) starts with <\usepackage{...}>
pkgl = []
for i in l:
	# up to <\begin{document}> as later line(s) might be comments.
	if '\\begin{document}' in i:	break
	if '\usepackage' in i:	pkgl.append(i)
# extracts package name(s) within curly brackets of <\usepackage{...}>
pkgn = []
for i in pkgl:
	p3 = i.partition('{')[-1]
	pkgn.append(p3.partition('}')[0])
pkg = []
for i in pkgn:
	if ',' in i:
		v = i.split(',')
		for j in v:	pkg.append(j)
	else:	pkg.append(i)
# pkg: list of ALL package(s) inside <.TEX> document.
system('sudo echo "[WARNING] tlmgr repo is out-dated: 2015"')
for i in pkg:
	system('echo -n "installing ' + i + '"... ')
	system('sudo tlmgr install ' + i + ' 1>/dev/null 2>/dev/null')
	system('echo "done!"')
