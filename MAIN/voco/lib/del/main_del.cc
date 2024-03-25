/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/meesa/main/LICENSE
*/

#include "proc_del.hh"

int main(int argc, char* argv[]) {
 string v1 = mark("-- DELETE --", "blue");
 string v2 = mark("--help""\n", "blue");
 string v3 = mark("[PATTERN] ", "blue");
 string v4 = mark("[EXAMPLE] ", "blue");
 // op(s)
 if (str(argv[1]) == "") {
  cout <<
  v1 + "\n"
  "removes a record.""\n"
  "voco del " + v2
  << endl;
  exit(0);
 }
 if (str(argv[1]) == "--help") {
  cout <<
  v3 + "voco del <slot-ID>""\n"
  "moves <slot-id>-folder to ~/voco/ARCHIVED/ directory."
  << endl;
  exit(0);
 }
 proc_del(argv[1]);
}
