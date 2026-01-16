//-------------map-------------     //multiple array is store!
console.log("\n|-----------------Map-----------------|")
let number = [1, 2, 3, 4, 5]

let result = number.map(number => number + 2)
console.log(result)

let str = ["banana", "mango", "cherry", "potato"]
result = str.map(str => {
    result = str.length;
    return result;
})
console.log(result)


//-------------filter-------------   //your choice select in work
console.log("\n|-----------------Filter-----------------|")

result = number.filter(number => number > 2)
console.log(result)



let arr = ["banana", "mango", "cherry", "potato"]

let result5 = arr.filter(arr => {
    let result1 = arr.length
    return result1;
})

console.log(result5)






//-------------foeach-------------   //  select your chioce find the name
console.log("\n|-----------------Foe Each-----------------|")

arr.forEach((arr, index) => {
    if (arr === "banana") {
        console.log(arr)
    }
})

number.forEach((number, index) => {
    if (number === 5) {
        console.log(number)
    }
})


//-------------Find Index-------------   //  
console.log("\n|-----------------Find Index-----------------|")

arr.findIndex((arr, index) => {
    if (arr === "cherry") {
        console.log(index)
    }
})


number.findIndex((number, index) => {
    if (number === 5) {
        console.log(index)
    }
})





//-------------Includes-------------   //  
console.log("\n|-----------------Includes-----------------|")

console.log(arr.includes("banana"))
console.log(number.includes(10))




//-------------Every-------------   //  
console.log("\n|-----------------Every-----------------|")
let arr1 = ["apple", "ananas", "avengers"]

let everyresult = arr1.every(arr => arr.startsWith("a"))
console.log(everyresult)

arr1 = ["banana", "mango", "cherry"]
everyresult = arr1.every(arr => arr.startsWith("b"))
console.log(everyresult)


//-------------Some-------------   //  
console.log("\n|-----------------Some-----------------|")

arr1 = ["banana", "apple", "cherry"]
everyresult = arr1.some(arr => arr.startsWith("a"))
console.log(everyresult)

let number1 = [1, 2, 3, 4, 5]
everyresult = number1.some(number => number===5)
console.log(everyresult)