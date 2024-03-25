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
  "voco view " + v2
  << endl;
  exit(0);
 }
 if (str(argv[1]) == "--help") {
  cout <<
  v3 + "voco view <slot-ID>""\n"
  "displays contents of ~/voco/<slot-ID>/index in pretty-format."
  << endl;
  exit(0);
 }
 proc_view(argv[1]);
}
