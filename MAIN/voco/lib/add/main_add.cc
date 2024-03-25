/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/meesa/main/LICENSE
*/

#include "proc_result.hh"
#include "proc_add.hh"

int main(int argc, char* argv[]) {
 string v1 = mark("-- ADD --", "blue");
 string v2 = mark("--help""\n", "blue");
 string v3 = mark("[PATTERN] ", "blue");
 string v4 = mark("[EXAMPLE] ", "blue");
 string v5 = mark("* ", "blue");
 string v6 = mark("[] ", "blue");
 // op(s)
 if (str(argv[1]) == "") {
  cout <<
  v1 + "\n"
  "adds a record with 3 variables (TERM/DEF/EX) into the voco-book.""\n"
  "voco add " + v2
  << endl;
  exit(0);
 }
 if (str(argv[1]) == "--help") {
  cout <<
  v3 + "voco add <term> <def> <ex> [--enforce]""\n"
  "issues a warning if record(s) with similar values found.""\n"
  "if [--enforce] suppresses the warning."
  << endl;
  exit(0);
 }
 proc_add(argv[1], argv[2], argv[3], argv[4]);
}
