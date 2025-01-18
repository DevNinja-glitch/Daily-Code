const reverse_string = (str) =>{
    let join_line="";
     for(let char=str.length-1;char>=0;char--){
         join_line=join_line+str[char];
     }
     console.log(join_line);
     if(str===join_line){
        return true;
     }else{
        return false;
     }
}
reverse_string("Fatima Tul Zahra");
console.log(reverse_string("level"));
function greet(namee){
console.log(`Hello, ${namee}! Welcome to Javascript.`);
}
greet("Fatima Tul Zahra");
const square=(num)=>console.log(num*num);
square(5);
function calculateArea(length,width=length){
let area=length*width;
return area;
}
console.log(calculateArea(3));
console.log(calculateArea(3,9));
var addNumbers=(num1,num2)=>num1+num2;
console.log(addNumbers(3,8));
let multiply=(num1,num2)=>num1*num2;
console.log(multiply(5,8));
function applyOperation(num1,num2,operator){
    if(operator==='+'){
        return num1+num2;
    }
    else if(operator==='-'){
        return num1-num2;
    }
    else if(operator==='*'){
        return num1*num2;
    }
    else if(operator==='/'){
        return num1/num2;
    }
    else{
        console.log(`Enter correct operator`);
    }
}
console.log(applyOperation(3,6,'/'));
