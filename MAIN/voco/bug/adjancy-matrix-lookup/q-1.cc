int main (int argc, char* argv[]) {
 if (argc < 2) {
  cout << "needs 1 argument." << endl;
  exit(0);
 }
 /*  variable(s)
 [v1] text-file
 [v2] database of duplicated term(s) in [v1]
 [v3] output file-name
 */
 string v1 = cat(argv[1]);
 string v2 = "";
 string v3 = "DB_" + ts();
 // op(s)
 for (int i = 0; i < v1.size(); i++) {
  if ((v1[i] == ' ') or (v1[i] == '\n') or (v1[i] == '\t')) v2 += "\n";
  else v2 += v1[i];
 }
 drop(v3, v2);
}
