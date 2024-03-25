/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/meesa/main/LICENSE
*/

void proc_del(string arg1) {
 /* var(s)
 [v1] slot-ID
 */
 string cmd = mark("[] ", "blue");
 string inp1 = mark("[INP] ", "blue");
 string out1 = mark("DONE.", "green");
 string out2 = mark("[OUT] ", "blue");
 string err1 = mark("HALTED.""\n""[FAILED] ", "red");
 //
 string v1 = arg1;
 // msg(s)
 string msg1 = cmd + "removing record...";
 // op(s)
 note(msg1);
 cd("~/whobook/ACTIVE/");
 if (not exist(v1)) {
  cout <<
  err1 + "record not found.""\n" +
  inp1 + "~/whobook/ACTIVE/" + v1
  << endl;
  exit(0);
 }
 rm(v1);
 cout <<
 out1 + "\n" +
 out2 + "~/whobook/ARCHIVED/" + v1
 << endl;
}
