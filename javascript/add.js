
document.getElementById('sum').addEventListener('click' , function(){
    var num1=document.getElementById("num1").value;
    var num2=document.getElementById("num2").value;
    console.log(num1);
    console.log(num2);
    var n1=Number(num1)
    var n2=Number(num2)
    var st1=(typeof n1 );
    var st2=(typeof n2 );
    document.getElementById('total').innerHTML=n1+n2;
    // if(st1==Number && st2==Number){
    //     document.getElementById('total').innerHTML=n1+n2;
        
    // }
    // else{
    //     var str="enter num"
    //     document.getElementById('total').innerHTML=str;
        
    // }
    // console.log('you click')
})

var a=145;
console.log(typeof(a));