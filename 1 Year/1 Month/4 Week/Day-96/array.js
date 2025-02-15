let myArray = ["hi","bye","shy","shy","try","guy","tie","buy"]
let tArray  = ["why","cry"]
let Sarray = [["why","cry"],["hi","bye","shy","shy","try","guy","tie","buy"],["hi","bye","shy","shy","try","guy","tie","buy"]]
let all = myArray.concat(tArray)
let ball = Sarray.flat(Infinity)
console.log(all);
console.log(ball);