// Task 1
function greetUser(name) {
    console.log("Hello, " + name + " !");
}
greetUser("Fatima");
let gretUser = (user) => console.log("Hello, " + user + " !");
gretUser("Khushi");
// Task 2
const student = { sname: "Mariyam", age: 34, grade: "C" }
console.log(student.sname);
console.log(student.age);
console.log(student.grade);
// Task 3
const calculator = {
    add: (num1, num2) => (num1 + num2),
    sub: (num1, num2) => (num1 - num2),
    mul: (num1, num2) => (num1 * num2),
    div: (num1, num2) => (num1 / num2)
}
console.log(calculator.add(34, 23));
console.log(calculator.mul(34, 23));
console.log(calculator.div(34, 23));