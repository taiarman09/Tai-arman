
/*--------------------sum and table and for loop--------------------*/

let a = 3
let b = 20
let i
let n = 10

console.log("This is the a or b sum is =", a + b)

for (i = 1; i <= n; i++) {
    console.log(a, "X", i, "=", a * i)
}




/*--------------------if else--------------------*/
let Number = prompt("Enter any number:")

if (Number >= 18) {
    console.log("you can drive")
}
else if (Number >= 15) {
    console.log("you can wait for drive")
}
else if (Number >= 10) {
    console.log("you can kins you not drive safety")
}
else {
    console.log("you can not drive")
}






/*--------------------switch case statment--------------------*/
console.log("1. press for english")
console.log("2. press for hindi")
console.log("3. press for gujrati")
let choice = Number(prompt("Enter you choice:"))

switch (choice) {

    case 1:
        console.log("English language succesfully done ")
        break;
    case 2:
        console.log("aapne hindi bhasha ko select kiya hai")
        break;
    case 3:
        console.log("tame gujarati bhasha ne pasand karyu chhe")
        break;

    default:
        break;
}



/*--------------------for loop--------------------*/
let number = Number(prompt("Enter any number:"))

for (i = 1; i <= n; i++) {
    console.log(i)
}


/*--------------------Do while--------------------*/
let num = Number(prompt("Enter any number:"))
let j = 1
do {
    console.log(j)
    i++
} while (i <= n)


/*--------------------Do while--------------------*/
let Num = Number(prompt("Enter any number:"))
let k = 1

while (i <= n) {
    console.log(i)
    i++
}


/*--------------------Sum and multiple and mainas--------------------*/
let o=1
let l=5
let sum=1

for(o=1; i<=l; o++){
    sum=sum+=o
}

console.log(sum)




/*--------------------1D array--------------------*/

let size=Number(prompt("Enter array size:"))

let arr=[]

for(let i=0; i<size; i++){
    arr[i]=parseInt(prompt(`a[${i}] =`))
}

console.log("Arrays elemnts:")
console.log("Length of an array:", arr.length);




/*--------------------1D array average--------------------*/

let sum=0
let size=Number(prompt("Enter array size:"))

let arr=[]

for(let i=0; i<size; i++){
    arr[i]=parseInt(prompt(`a[${i}] =`))
    sum+=arr[i]
}


let average = sum / size;

console.log("Average of Array:", average);