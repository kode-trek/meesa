/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/meesa/main/LICENSE
*/

void proc_edit(string arg1) {
 /* var(s)
 [v1] slot-ID
 */
 string cmd = mark("[] ", "blue");
 string inp1 = mark("[INP] ", "green");
 string out1 = mark("DONE.", "green");
 string err1 = mark("HALTED.""\n""[FAILED] ", "red");
 //
 string v1 = arg1;
 // msg(s)
 string msg1 = "fetching record...";
 // op(s)
 note(cmd + msg1);
 if (exist("~/whobook/ACTIVE/" + v1)) {
  cout << out1 << endl;
  sys("caja ~/whobook/ACTIVE/" + v1);
 }
 if (not exist("~/whobook/ACTIVE/" + v1))
  cout <<
  err1 + "record not found.""\n" +
  inp1 + "~/whobook/ACTIVE/" + v1
  << endl;
}
