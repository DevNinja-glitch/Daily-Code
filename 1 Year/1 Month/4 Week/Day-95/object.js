let mySymbol = Symbol("key1")
let myObject = {
    name: "bye",
    "age": "fry",
    [mySymbol]: "key1",
    "email": 34
}
console.log(`So the story begins by your name which is ${myObject.name}. Someone ask you about your age and instead of telling ${myObject["age"]} you replied aggressively ${myObject[mySymbol]}. In response the other person give you your required object by breaking your ${myObject["email"]}`);
