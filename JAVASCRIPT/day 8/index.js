// function sum
console.log("\n---------Function Call Sum:---------")
console.log("Answer of 1:\n")
function sum(a, b) {

    console.log(`${a} + ${b} = ${a+b}`)

}
sum(5, 25);


// function sum1
function sum1(a, b) {

    return `${a} + ${b} = ${a+b}`

}
let result = sum1(5, 5)
console.log(result)


// function minus
console.log("\n---------Function Call minus:---------")
console.log("Answer of 2:\n")
function minus(a, b) {

    return `${a} - ${b} = ${a-b}`

}
let result1 = minus(15, 5)
console.log(result1)


// function minus1
function minus1(a, b) {

    console.log(`${a} - ${b} = ${a-b}`)

}
minus1(35, 5);


// function multiple
console.log("\n---------Function Call Multiple:---------")
console.log("Answer of 3:\n")
function multiple(a, b) {

    return `${a} * ${b} = ${a*b}`

}
let Multiple = multiple(5, 5)
console.log(Multiple)


// function multiple1
function multiple1(a, b) {

    console.log(`${a} * ${b} = ${a*b}`)

}
multiple1(6, 5);





// function divide
console.log("\n---------Function Call Divide:---------")
console.log("Answer of 4:\n")
function divide(a, b) {

    return `${a} / ${b} = ${a/b}`

}
let Divide = divide(30, 6)
console.log(Divide)


// function multiple1
function divide1(a, b) {

    console.log(`${a} / ${b} = ${a/b}`)

}
divide1(50, 5);




// function Table
console.log(`\n---------Function Call Table:---------`)
console.log("Answer of 5:\n")
function table(number){
    console.log(`---------Table of ${number}---------`)
    for(let i=1; i<=10; i++){
        console.log(`${number} * ${i} = ${number*i}`)
    }
    console.log(   )
}

for(let i=1; i<=5; i++){
    table(i)
}


// function odd
console.log(`\n---------Function Call odd:---------`)
console.log("Answer of 6:\n")
function odd(){
    for(let i=1; i<=10; i++){
        if(i%2 ===1){
            console.log(`${i} is odd`)
        }
    }
}
odd()

// function even
console.log(`\n---------Function Call even:---------`)
console.log("Answer of 7:\n")
function even(){
    for(let i=1; i<=10; i++){
        if(i%2 ===0){
            console.log(`${i} is even`)
        }
    }
}
even()


// function oddEven
console.log(`\n---------Function Call oddEven:---------`)
console.log("Answer of 8:\n")
function oddEven(){
    for(let i=1; i<=10; i++){
        if(i%2 !=0){
            console.log(`${i} = Odd`)
        }
        else{
            console.log(`${i} = Even`)
        }
    }
}
oddEven()




// function Prime
console.log(`\n---------Function Call Prime and No Prime:---------`)
console.log("Answer of 9:\n")
function Prime(number){
    let conut=0
    for(let i=1; i<=number; i++){
        if(number%i ===0){
            conut++
        }
    }

    if(conut ==2){
        console.log(`${number} prime`)
    }
    else{
        console.log(`${number} no prime`)
    }
}


for(let i=1; i<=100; i++){
    if(i==1){
        console.log("NON")
    }
    else{
        Prime(i)
    }
}