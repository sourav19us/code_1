let str="sourav";
let str2="kumar";
let str3="saini";
let str4="I am from jaipur";
console.log(str+" "+str2+" "+str3);
console.log(str.concat(str2,str3));
console.log(str.toLowerCase());
console.log(str.toUpperCase());
console.log(str.charAt(3));
console.log(str.substring(0,3));
console.log(str.indexOf('o'));
console.log(str.charAt(5));
console.log(str4.endsWith('jaipur'));
console.log(str4.includes('am'));
console.log(str4.lastIndexOf('a'));
console.log(str4.split(' '));
console.log(str4.replace('am','Am'));
let html=`My name is ${str} ${str2} ${str3}
          <h1> first name ${str} </h1>
          <h1> mid name ${str2} </h1>
          <h1> last name ${str3} </h1>
          <p>.........hahaha</p>
         `
document.body.innerHTML=html;  
//document.body.innerHTML=`<h1>${str4}</h1>`;
document.write(`<h1> ${str4} </h1>`);