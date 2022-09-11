let n1=34;
console.log(n1,(typeof n1));
let n2=String(n1);
console.log(n2,(typeof n2));

let arr1=[1,2,3,45,65,null]
let arr=String([12,34,4554,23]);
console.log(arr,(typeof arr),"length of string is ",arr.length);
console.log(arr1,(typeof arr1),"length of array is ",arr1.length);
console.table(arr1);
let dtt ={sourav:12,saini:34,kumar:345};
console.table(dtt);

let d=new Date();
console.log(d);

let num = 568;
console.log(num,num.toString());
console.log(typeof num);


let num2=Number('234');
console.log(num2,(typeof num2));

let num3=parseInt('36.25');
console.log(num3);

let flo=parseFloat('25.3629');
console.log(flo,"type of flo is ",(typeof flo));
console.log(flo.toFixed(3));
console.log(flo.toFixed(30));

let dt=String(new Date());
console.log(dt);

// Type Coercion
let q='256';
let w=69;
console.log(q+w);