/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/meesa/main/LICENSE
*/

void proc_add(string arg1, string arg2, string arg3, string arg4) {
 /* var(s)
 [v1] name
 [v2] link (phone-number, address, email, ...)
 [v3] docx (comment, attached-file, ...)
 [v4] switch: warning on/off
 [v5] flag: empty-file true/false
 [v6] slot-ID
 */
 string cmd = mark("[] ", "blue");
 string out1 = mark("[OUT] ", "blue");
 string out2 = mark("DONE.""\n", "green");
 string err1 = mark("HALTED.""\n""[FAILED] ", "red");
 string err2 = mark("[WARNING] ", "yellow");
 //
 string v1 = arg1;
 string v2 = arg2;
 string v3 = arg3;
 string v4 = arg4;
 bool v5 = false;
 string v6 = ts();
 // msg(s)
 string msg1 = cmd + "adding record...";
 // cmd(s)
 int e = 0;
 // op(s)
 result(v1);
 result(v2);
 result(v3);
 if (not empty("~/whobook/TMP_RESULT")) v5 = true; rm("~/whobook/TMP_RESULT");
 if (v5) {
  cout << err2 + "similar record(s) found." << endl;
  cat("~/whobook/TMP_RESULT");
  exit(0);
 }
 if ((v4 == "--enforce") or (v5 == false)) {
  note(msg1);
  cd("~/whobook/ACTIVE/");
  e = md(v6);
  if ((exist(v3)) and (exist(uri(v3, "full-name"))))
   cp(v3, v6 + "/" + uri(v3, "file-name") + "_" + ts() + uri(v3, "extension"));
  if ((exist(v3)) and (not exist(uri(v3, "full-name")))) cp(v3, v6);
  drop("~/whobook/ACTIVE/" + v6 + "/index",
  "NAME=" + v1 + "\n" +
  "LINK=" + v2 + "\n" +
  "DOCX=" + uri(v3, "full-name"));
  cout << out2 + out1 + "~/whobook/ACTIVE/" + v6 << endl;
 }
}
