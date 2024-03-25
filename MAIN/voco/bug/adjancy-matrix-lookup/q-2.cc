int main (int argc, char* argv[]) {
 if (argc < 2) {
  cout << "needs 1 argument." << endl;
  exit(0);
 }
 /*  variable(s)
 [v1] = set (not duplicated) of term(s).
 [v2] = set (not duplicated) of all char(s)
 [v3] = adjancy-matrix for each term in [v2]
 */
 vector<string> v1 = unique(split(cat(argv[1]), "\n"));
 // pause-debug
 enlist(v1, false);
}
