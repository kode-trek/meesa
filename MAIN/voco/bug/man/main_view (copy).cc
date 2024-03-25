/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/meesa/main/LICENSE
*/

#include "proc_view.hh"

int main(int argc, char* argv[]) {
 string v1 = mark("-- VIEW --", "blue");
 string v2 = mark("--help""\n", "blue");
 string v3 = mark("[PATTERN] ", "blue");
 string v4 = mark("[EXAMPLE] ", "blue");
 // op(s)
 if (str(argv[1]) == "") {
  cout <<
  v1 + "\n"
  "parsing a text file and presenting its contents in an organized and "
  "visually appealing format.""\n"
  "whobook view " + v2
  << endl;
  exit(0);
 }
 if (str(argv[1]) == "--help") {
  cout <<
  v3 + "whobook view <slot-ID>""\n"
  "displays contents of ~/whobook/<slot-ID>/index in pretty-format.""\n" +
  v4 + "whobook display 1710000000""\n"
  "echoes ~/whobook/1710000000/index as:""\n"
  "[ID]\t1710000000""\n"
  "[NAME]\tEmeer Adhamian (امیر ادهمیان)""\n"
  "[LINK]\tHOME +1 (555) 111 2233""\n"
  "\tWORK +1 (555) 444 6677""\n"
  "[DOCX]\tgithub.com/kode-trek""\n"
  "\t/home/kode-trek/whobook/1710000000/profile-photo.jpg""\n"
  "\tCS/MATH department."
  << endl;
  exit(0);
 }
 proc_view(argv[1]);
}
