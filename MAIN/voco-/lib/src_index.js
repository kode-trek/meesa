function f1() {
	var v = [];
	var v1 = document.getElementById("id1").value;
	var v2 = document.getElementById("id2").value;
	v[0] = v1;
	v[1] = v2;
	localStorage.setItem("p2p", JSON.stringify(v));
}
