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
  "whobook edit " + v2
  << endl;
  exit(0);
 }
 if (str(argv[1]) == "--help") {
  cout <<
  v3 + "whobook edit <slot-ID>""\n"
  "pops up <slot-ID>-folder via a GUI-interface.""\n"
  "each line in <docx>-section must commence with 'DOCX='.""\n" +
  v4 + "whobook edit 1710000000""\n"
  "contents of ~/whobook/1710000000/index could be:""\n"
  "NAME=Emeer Adhamian (امیر ادهمیان)""\n"
  "LINK=HOME +1 (555) 111 2233""\n"
  "LINK=WORK +1 (555) 444 6677""\n"
  "DOCX=github.com/kode-trek""\n"
  "DOCX=/home/kode-trek/whobook/1710000000/profile-photo.jpg""\n"
  "DOCX=CS/MATH department."
  << endl;
  exit(0);
 }
 proc_edit(argv[1]);
}
