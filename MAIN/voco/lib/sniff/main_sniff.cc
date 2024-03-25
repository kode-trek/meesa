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
  "looks up for phrase(s) in the voco-book.""\n"
  "voco sniff " + v2
  << endl;
  exit(0);
 }
 if (str(argv[1]) == "--help") {
  cout <<
  v3 + "voco sniff <entry>""\n"
  "looks up for the <entry>-phrase throughout all text-file(s)."
  << endl;
  exit(0);
 }
 proc_sniff(argv[1]);
}
