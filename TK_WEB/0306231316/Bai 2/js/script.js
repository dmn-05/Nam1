function mouseover()
{
    var p=document.getElementById('pass').value;
    p.type="text";
}
function mouseout()
{
    var p=document.getElementById('pass').value;
    p.type="password";
}
function kiemtra()
{
    var e=document.getElementById('txthoten').value;
    var p=document.getElementById('pass').value;
    if(e=='admin'&&p==123456)
    {
        alert="dang nhap thanh cong";
    }
    else
    {
        alert="dang nhap that bai";
    }
}