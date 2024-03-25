/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/meesa/main/LICENSE
*/

void proc_sniff(string arg1) {
 /* var(s)
 [v1] entry
 [v2] vector of word(s)
 */
 string cmd = mark("[PATTERN] ", "blue");
 //
 string v1 = arg1;
 vector<string> v2 = {};
 // op(s)
 v2 = split(v1, " ");
 for (int i = 0; i < v2.size(); i++) {
  cout << cmd + "grep -r -E -i '" + v2[i] + "' ~/whobook/ACTIVE/" << endl;
  sys("grep -r -E -i '" + v2[i] +"' ~/whobook/ACTIVE/");
 }
}
