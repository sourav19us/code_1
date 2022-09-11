let i=0;
while (i<=10) {
    console.log(i);
    i+=1;    
}

for (let k = 0; k <=10; k++) {
    console.log(k);    
}

let arr=[14,25,36,14,'ii','ui',142];

arr.forEach(function(element){
    console.log(element);
});

arr.forEach(function(element,index,arr){
    console.log(element,index,arr);
});

for (let g = 0; g < arr.length; g++) {
    const element = arr[g];
    console.log(element);
}


let ob={studentName: 'sourav',
        class:12,
        rollno:12334,
        result:'pass'
       };

for(let key in ob)
{
 console.log(key);
 console.log(`object ${ob[key]} key is ${key}`)
};       