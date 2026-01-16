console.log("\n----------Question-1----------")

let arr = [1, 2, 3, 4, 5]

for (let i = 0; i < arr.length; i++) {
    console.log(arr[i])
}

console.log("\n----------Question-2----------")

let number = [10, 20, 30, 40, 50]
let i = 0
while (i < number.length) {
    console.log(number[i])
    i++
}


console.log("\n----------Question-3----------")
let str = "Hello,World!";
let count = 0;

for (let i = 1; i <= str.length; i++) {
    count++
}
console.log(count)



console.log("\n----------Question-4----------")
let string = "javascript"

for (let i = 0; i <= string.length - 1; i++) {
    console.log(string[i])
}



console.log("\n----------Question-5----------")
let sumarr = [1, 2, 3, 4, 5];
let sum = 0

for (let i = 0; i < sumarr.length; i++) {
    sum += sumarr[i]
}
console.log(sum)



console.log("\n----------Question-6----------")
let maxarr = [3, 1, 4, 1, 5, 9,50]
let max = maxarr[0]

for (let i = 1; i <= maxarr.length; i++) {
    if (maxarr[i] > max) {
        max = maxarr[i]
    }
}

console.log(max)




console.log("\n----------Question-7----------")

let reverse = [1, 2, 3, 4, 5]
let reversd = []


for (let i = reverse.length - 1; i >= 0; i--) {
    reversd.push(reverse[i])
}

console.log(reversd)



console.log("\n----------Question-8----------")
let uppercase = "hello";

for (let i = 0; i < uppercase.length; i++) {
    console.log(uppercase[i].toUpperCase())
}


console.log("\n----------Question-9----------")

let counting = [2, 4, 6, 8, 10]
let count1=0
let a=0
while(a<counting.length){
    count1++;
    a++;
}

console.log(count1)




console.log("\n----------Question-10----------")
let number1=[1,2,3,4,5,6,7,8,9,10]

for(let i=1; i<=number1.length; i++){
    if(number1[i] %2 ===0){
        console.log(number1[i]);
    }
}



console.log("\n----------Question-11----------")
let length=[5,10,15]
count=0
i=0
while(i<=length[i]){
    count++
    i++
}
console.log(count)



console.log("\n----------Question-12----------") 
str=["apple","banana","cherry"]
count=0
for(let i=0; i<str.length; i++){
    count +=str[i].length
}
console.log(count)




console.log("\n----------Question-13----------") 
str=["This","is","JavaScript"]
count=""
for(let i=0; i<str.length; i++){
    count+=str[i]+" "
}
console.log(count)




console.log("\n----------Question-14----------") 
str="javascript"
for(let i=1; i<=str.length; i++){
    if(str[i]==='a'){
        console.log(i)
    }
}



console.log("\n----------Question-15----------") 
str="hello world"
count=0

for(let i=0; i<str.length; i++){
    if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
        count++
    }
}

console.log(count)