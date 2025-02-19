function Cong(a, b) 
{
    var c = a + b;
    document.write(c);
}
var x;
for (x of monHoc) {
 document.write(x + "<br>");
}
for (x in monHoc) {
document.write(monHoc[x] + "<br>");
}
function dangnhap()
{
    var e = document.getElementById('txthoten').value;
    document.getElementById('chao').innerHTML=" Xin chao " +e;
}