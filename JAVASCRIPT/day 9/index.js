console.log("\n--------Question-1--------")
let sum = function (a, b) {
    let result = a + b
    return `${a} + ${b} = ${result}`
}
let sum1 = sum(5, 5)
console.log(sum1)



console.log("\n--------Question-2--------")
let minus = function (a, b) {
    let result = a - b
    return `${a} - ${b} = ${result}`
}
let minus1 = minus(20, 10)
console.log(minus1)



console.log("\n--------Question-2--------")
let multiple = function (a, b) {
    let result = a * b
    return `${a} * ${b} = ${result}`
}
let multiple1 = multiple(5, 2)
console.log(multiple1)



console.log("\n--------Question-4--------")
let divide = function (a, b) {
    let result = a / b
    return `${a} / ${b} = ${result}`
}
let result = divide(50, 5)
console.log(result)



console.log("\n--------Question-5--------")
let Prime = function (number) {
    let count = 0
    for (let i = 1; i <= number; i++) {
        if (number % i == 0) {
            count++
        }
    }
    if (count == 2) {
        console.log(`${number} Prime`)
    }
    else {
        console.log(`${number} No Prime`)
    }
}

for (let i = 1; i <= 10; i++) {
    if (i == 1) {
        console.log("NON")
    }
    else {
        Prime(i)
    }
}



console.log("\n--------Question-6--------")
let loop = function () {
    let src = ""

    for (let i = 1; i <= 5; i++) {
        src += i
        console.log(src)
    }
}
loop()



console.log("\n--------Question-7--------")
let whileloop = function () {
    let i = 10
    let src = ""
    while (i >= 1) {
        src += i + " "

        i--
    }
    console.log(src)
}
whileloop()



console.log("\n--------Question-8--------")
let dowhile = function () {
    i = 1
    let src = ""
    do {
        src += i + " "
        i++
    } while (i <= 10)
    console.log(src)
}
dowhile()



console.log("\n--------Question-9--------")
let odd = function () {
    for (let i = 1; i <= 10; i++) {
        if (i % 2 === 0) {
            console.log(`${i} Even Number`)
        }
        else {
            console.log(`${i} Odd Number`)
        }
    }
}
odd()



console.log("\n--------Question-10--------")
let sum2 = () => {
    let src = ""
    for (let i = 1; i <= 5; i++) {
        src += i + " "
        console.log(src)
    }


}
sum2()



console.log("\n--------Question-10--------")
let table = (number) => {
    console.log(`---------Table of ${number}---------`)
    for (let i = 1; i <= 10; i++) {
        console.log(`${number} * ${i} = ${number * i}`)
    }
    console.log(" ")
}

for (let i = 1; i <= 10; i++) {
    table(i)
}


