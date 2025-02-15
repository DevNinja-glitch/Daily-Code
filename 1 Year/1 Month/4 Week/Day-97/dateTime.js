let today = new Date();
let day = today.getUTCDay()
if(day==5){
     day = "Friday"
}
console.log(`Assalam o Alaikum today is ${today.toLocaleDateString()} So this tell us that the day is 
${day} and time is the most important and logical part ${today.getHours()} But here we will also study about one more thing which is comparison of two dates for the future complex projects ${Date.now()}`);
