//Bổ sung JS
var a=[];
function check(){

    var input1=document.getElementById('txtinput');
    var input2=input1.value.trim();
    var i=0;
    var tam=input2;
    var bool=true;
    var output=document.getElementById('out');
    var output1=document.getElementById('out1');
    if(input2.length!=8)
    {
        alert("Input has incorrect length");
        input1.value="";
        Document.innerHTML=input1;
    }
    else
    {
        while(tam!==0)
        {
            tam=parseInt(tam);
            a[i++]=tam%10;
            tam/=10;
        }
    //    for(var j=0;j<input2.length;j++)
    //    {
    //         console.log(a[j]);
    //    }
        var l=0,r=i-2;
        console.log(i);
        while(l<=r)
        {
            if(a[l]!==a[r])
            {
                bool=false;
            }
            l++;
            r--;
        }
        if(bool)
        {
            output.innerHTML="Symmetric number";
            output.style.color='blue';
        }
        else
        {
            output.innerHTML="Asymmetric number";
            output.style.color='red';
        }
    }
}

