// Add dec at end of array
let month = ["Jan", "Feb", "March", "April", "May", "June", "July", "August"];
month.splice(month.length, 0, "Dec");
console.log(month);
// Change March to mar
let updatemonth = month.indexOf("March");
console.log(updatemonth);
month.splice(2, 2, "mar");
console.log(month);
// Delete june from array
console.log(month.indexOf("June"));
month.splice(4, 1);
console.log(month);
// Square of array
let numbers = [1, 4, 5, 3, 67, 876];
let result = numbers.map((curElem) => curElem * curElem);
console.log(result);
// Convert string to uppercase
let stringmonth = month.map((curElem) => {
    return curElem.toUpperCase();
});
console.log(stringmonth);
// Square of even numbers
let evenSquare=numbers.map((curElem)=>{
    if(curElem %2==0){
      return  curElem*curElem;
    }
}).filter((curElem)=>curElem!=undefined);
console.log(evenSquare);
// Add Mr in the names array
let names=["Ali","Akbar","Abu Bakar","Abdullah","Afzal","Asif"];
let mister=names.map((curElem)=> `Mr. ${curElem}`);
console.log(mister);
//Add numbers in array
let final=numbers.reduce((accum,curElem)=>{
return accum+curElem;
},0);
console.log(final);