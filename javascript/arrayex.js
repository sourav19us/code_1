const arry1=[1,2,3,45,6];
const arry2=['a','w','r','op'];
const arry3=[1.34,665,43,'fdd',4,'drgy'];
let arry4=new Array(4,2,36,84,125);
console.log(arry4);
console.log(arry1.length);
console.log(arry1.indexOf(3));
arry4[0]=582;
console.log(arry4);

//arrays method
arry1.push(254);
console.log(arry1);

arry1.unshift(21036);
console.log(arry1);

arry1.pop();
console.log(arry1);

arry1.shift();
console.log(arry1);

arry1.slice(1,3);
console.log(arry1);

arry1.reverse();
console.log(arry1);

arry1.sort();
console.log(arry1);

let arry5=arry1.concat(arry3);
console.log(arry5);
console.log(arry1.concat(arry3));


// object

let obj={sourav:142,
         kumar:145,
         saini:4258,
         'sourav kumar saini':000000045
        };

console.log(obj.sourav);
console.log(obj['sourav kumar saini']);
console.log(obj['saini']);        