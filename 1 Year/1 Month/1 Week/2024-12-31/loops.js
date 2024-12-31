var year=2004;
for(var i=1;i<=year;i++){
    if((year%4===0  && year%100!=0) || (year%400===0)){
    console.log(year+' is a leap year');
}
else{
    console.log(year+'  is not a leap Year');
}
}
var n=5;
for(var i=1;i<=n;i++){
    var pattern=' ';
    for(var j=0;j<i;j++){
        pattern=pattern+'*';
    }
    console.log(pattern);
}
for(var i=1;i<=20;i++){
    if(i%2===0){
        console.log(i+" Even Number");
    }
}
for(var i=1;i<=5;i++){
    var pattern=" ";
    for(var j=1;j<=i;j++){
        pattern=pattern+" *";
    }
    console.log(pattern);
}
var sum=0;
var nums=1;
while(nums<=50){
    sum=sum+nums;
    nums++;
}
console.log("Result = "+sum);
for(var i=1;i<=30;i++){
    if(i%3===0 && i%5===0){
        console.log(i+" FizzBuzz");
    }
    else if(i%3===0){
        console.log(i+" Fizz");
    }
    else if(i%5===0){
        console.log(i+" Buzz");
    }
}
for(var i=1;i<=10;i++){
    if(i===5){
        continue;
    }
    if(i===8){
        break;
    }
    console.log(i);
}