console.log("hello");
var myName = "Fatima Tul Zahra";
console.log(myName);
var chawal = 50;
var jahil = 38;
var ptakha = chawal + jahil;
console.log(ptakha);
var age = 18;
var drivingLisence = true;
if(age>=18 && drivingLisence==true){
    console.log("Eligible for Driving ");
}
else if(age>=18 && drivingLisence==false){
    console.log("Apply for the Lisence ");
}
else{
    console.log("Wait for the Age ");
}
let userAge = 22;
let isCitizen = true;
let isRegistered = false;
if(userAge>=18){
    if(isCitizen==true){
        if(isRegistered==true){
             console.log("Eligible to vote");
        }
        else{
            console.log("Not Eligible due to Registration");
        }
    }
    else{
        console.log("Not Eligible due to Citizenship");
    }
}
else{
    console.log("Not Eligible to vote");
}
var mane = "Arfa";
var xyz = 46;
var shut = "rtfy";
console.log(mane,xyz,shut);
function addNumbers(num1,num2){
    var resulte = num1+num2;
    console.log(resulte);
}
addNumbers(5,7);
function numee(num1){
    if(num1<0){
        console.log("Number is Negative");
    }
    else if(num1==0){
        console.log("Number is Zero");
    }
    else{
        console.log("Number is Positive");
    }
}
numee(34);
numee(-78);
numee(0);
function calculator(num1,num2,oper){
    var result=null;
    if(oper==='+'){
        result=num1+num2;
    }
    else if(oper==='-'){
        result=num1-num2;
    }
    else if(oper==='*'){
        result=num1*num2;
    }
    else{
        result=num1/num2;
    }
    return result;
}
console.log(calculator(2,3,'+'));
var positiveNum;
var giveNum;
do{
giveNum = prompt("Enter The Poitive Number");
}while(isNaN = positiveNum || giveNum < 0)
    