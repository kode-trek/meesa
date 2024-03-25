/*
 The MIT License (MIT)
 Copyright (c) 2024 Emeer Adhamian (github.com/kode-trek)
 https://raw.githubusercontent.com/kode-trek/meesa/main/LICENSE
*/

int main() {
 /* variable(s)
 [v1] key-value
 */
 string err1 = mark("[FAILED] ", "red");
 //
 map<string, string> v1;
 v1["add"] = "\t""includes a record with 3 variables (TERM/DEF/EX) into the "
 "vocabulary booklet.";
 v1["view"] = "\t""displays the contents of a specific record.";
 v1["edit"] = "\t""modifies the value(s) of variable(s) in a record.";
 v1["del"] = "\t""deletes a record.";
 v1["sniff"] = "\t""looks up for term(s) within record(s).";
 // op(s)
 for (auto item : v1)
  cout << "[" + mark(item.first, "blue") + "]" + item.second << endl;
}
