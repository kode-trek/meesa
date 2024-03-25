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
  "adds a record with 3 variables (TERM/DEF/EX) into the dictionary.""\n"
  "voco add " + v2
  << endl;
  exit(0);
 }
 if (str(argv[1]) == "--help") {
  cout <<
  v3 + "voco add <term> <def> <ex> [--enforce]""\n"
  "adds TERM=<term> line to the record.""\n"
  "adds DEF=<def> line to the record.""\n"
  "adds EX=<ex> line to the record.""\n"
  "excluding [--enforce], it will issue a warning if record(s) with similar "
  "values for variables (TERM/DEF/EX) are found.""\n"
  "including [--enforce] suppresses the warning.""\n" +
  v4 + "voco add "
  "\"make it up to someone\" "
  "\"to do something good for someone you have upset, in order to become "
  "friends with them again.\" "
  "I'm sorry we can't take you with us, but I promise I'll make it up to you "
  "somehow.""\n"
  "https://dictionary.cambridge.org/dictionary/english/make-it-up-to""\n" +
  v5 + "multi-line descriptions can be provided as entries exclusively "
  "through the web-app interface.""\n" +
  v5 + "for one-line entries, we can use the CLI-app interface and later add "
  "extra lines via the following command:""\n" +
  v6 + "voco edit <slot-id>""\n" +
  v4 + "voco add \"make something up\" \"to invent something\"""\n"
  "[WARNING] similar record(s) found.""\n"
  "[] voco --sniff \"make up\""
  << endl;
  exit(0);
 }
 proc_add(argv[1], argv[2], argv[3], argv[4]);
}
