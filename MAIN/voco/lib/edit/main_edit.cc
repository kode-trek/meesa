/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/meesa/main/LICENSE
*/

#include "proc_edit.hh"

int main(int argc, char* argv[]) {
 string v1 = mark("-- EDIT --", "blue");
 string v2 = mark("--help""\n", "blue");
 string v3 = mark("[PATTERN] ", "blue");
 string v4 = mark("[EXAMPLE] ", "blue");
 // op(s)
 if (str(argv[1]) == "") {
  cout <<
  v1 + "\n"
  "provides a GUI-interface to edit a record.""\n"
  "voco edit " + v2
  << endl;
  exit(0);
 }
 if (str(argv[1]) == "--help") {
  cout <<
  v3 + "voco edit <slot-ID>""\n"
  "pops up <slot-ID>-folder via a GUI-interface."
  << endl;
  exit(0);
 }
 proc_edit(argv[1]);
}
