/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/meesa/main/LICENSE
*/

int main() {
 string v1 = mark("[PATTERN] ", "blue");
 string v2 = mark("[DEVELOPMENT] ", "blue");
 string v3 = "'Linux Mint 21.2 (victoria)'";
 // op(s)
 cout <<
 "performs operation(s) (search/add/remove/edit/view) on record(s) within a "
 "personal mini-dictionary.""\n""\n" +
 v1 + "voco cmd""\n"
 "presents list of command(s).""\n" +
 v1 + "voco <cmd> --help""\n"
 "brings up the manual for the <cmd>-command.""\n" +
 v2 + "this terminal-app had a test-drive on " + v3 + " platform.""\n"
 "github.com/kode-trek/who"
 << endl;
}
