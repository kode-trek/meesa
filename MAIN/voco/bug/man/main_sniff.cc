/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/meesa/main/LICENSE
*/

#include "proc_sniff.hh"

int main(int argc, char* argv[]) {
 string v1 = mark("-- SNIFF --", "blue");
 string v2 = mark("--help""\n", "blue");
 string v3 = mark("[PATTERN] ", "blue");
 string v4 = mark("[EXAMPLE] ", "blue");
 // op(s)
 if (str(argv[1]) == "") {
  cout <<
  v1 + "\n"
  "looks up for phrase(s) in the address book.""\n"
  "whobook sniff " + v2
  << endl;
  exit(0);
 }
 if (str(argv[1]) == "--help") {
  cout <<
  v3 + "whobook sniff <entry>""\n"
  "looks up for the <entry>-term throughout all nested 'index' text-file(s) in "
  "~/whobook/ONLINE/ directory and expresses in this format:""\n"
  "<absolute-path>:<key=value>""\n" +
  v4 + "whobook sniff \"git\"""\n"
  "possible result(s):""\n"
  "/home/kode-trek/whobook/1710000000/index:docx=github.com/kode-trek""\n"
  "/home/kode-trek/whobook/1710000004/index:docx=6-digit PIN to access ATM"
  << endl;
  exit(0);
 }
 proc_sniff(argv[1]);
}
