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
var pattern=' ';
for(var i=0;i<n;i++){
    for(var j=0;j<i;j++){
        pattern=pattern+'*';
    }
    console.log(pattern);
}
