/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/meesa/main/LICENSE
*/

void proc_view(string arg1) {
 /* var(s)
 [v1] slot-ID
 [v2] text-file contents.
 [v3] 1-line read.
 [v4] NAME-vector
 [v5] LINK-vector
 [v6] DOCX-vector
 */
 string cmd = mark("[] ", "blue");
 string out1 = mark("[OUT] ", "blue");
 string out2 = mark("DONE.", "green");
 string err1 = mark("HALTED.""\n""[FAILED] ", "red");
 //
 string v1 = arg1;
 string v2 = "";
 vector<string> v3 = {};
 vector<string> v4, v5, v6 = {};
 // msg(s)
 string msg1 = cmd + "reading record...";
 // cmd(s)
 int e = 0;
 // op(s)
 note(msg1);
 if (not exist("~/whobook/ACTIVE/" + v1 + "/index")) {
  cout << err1 + "record not found." << endl;
  exit(0);
 }
 v2 = cat("~/whobook/ACTIVE/" + v1 + "/index");
 v3 = split(v2, "\n");
 for (int i = 0; i < v3.size(); i++) {
  if (v3[i].substr(0, 4) == "NAME") v4.push_back(split(v3[i], "=")[1]);
  if (v3[i].substr(0, 4) == "LINK") v5.push_back(split(v3[i], "=")[1]);
  if (v3[i].substr(0, 4) == "DOCX") v6.push_back(split(v3[i], "=")[1]);
 }
 cout << out2 << endl << endl;
 cout << mark("[ID]""\t", "blue") << v1 << endl;
 cout << mark("[NAME]", "blue");
 for (int i = 0; i < v4.size(); i++) cout << "\t" << v4[i] << endl;
 cout << mark("[LINK]", "blue");
 for (int i = 0; i < v5.size(); i++) cout << "\t" << v5[i] << endl;
 cout << mark("[DOCX]", "blue");
 for (int i = 0; i < v6.size(); i++) cout << "\t" << v6[i] << endl;
}
