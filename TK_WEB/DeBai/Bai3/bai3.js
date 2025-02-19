//Bổ sung JS
function Addzero(number)
{
    if(number<10)
    {
        return "0" + number;
    }
    return number;
}
function ShowDateTime()
{
    var d=new Date;
    var hour=d.getHours();
    var minute=Addzero(d.getMinutes());
    var second=Addzero(d.getSeconds());
    var millisecond=d.getMilliseconds();

    var ampm="AM";
    if (hour>=12)
    {
        appm="PM";
        if (hour>12)
        {
            number-=12;
        }
    }

    var TIME=document.getElementById('lblTime');
    TIME.innerHTML=`${hour} : ${minute} : ${second} : ${millisecond} : ${ampm}`;

    var DayofWeek=["Monday","Tuesday","Wesnesday","Thursday","Friday","Satuday","Sunday"];
    document.getElementById('lblDaysOfWeek').innerHTML=DayofWeek[d.getDay()];

    var day=Addzero(d.getDay());
    var month=Addzero(d.getMonth() + 1);
    var year=d.getFullYear();
    document.getElementById('lblDate').innerHTML=day+"/"+month+"/"+year;
}

window.onload=function(){
    setInterval(ShowDateTime,10);
}