console.log("\n|-----------Question-1-----------|")
function capitalizeNames(array) {
    return array
}

let names = ['john', 'jane', 'doe'];
console.log(capitalizeNames(names));




console.log("\n|-----------Question-2-----------|")
function countWords(sentence) {
    let word = sentence.trim().split(" ");
    return word.length
}

let result = countWords("Javascript is a very powerfull")
console.log(result)




console.log("\n|-----------Question-3-----------|")
function findMinNumber(number) {
    let min = number[0]
    for (let i = 0; i < number.length; i++) {
        if (number[i] < min) {
            min = number[i]
        }
    }

    return min;
}


let number = [10, 20, 30, 40, 50]
console.log(findMinNumber(number))






console.log("\n|-----------Question-4-----------|")
function printNumbers(number) {
    let i = 1
    while (i <= number) {
        console.log(i);
        i++
    }
    return number
}

printNumbers(5);





console.log("\n|-----------Question-5-----------|")
function joinArrayToString(words) {

    return words.join(" ")

}

let words = ['I', 'love', 'coding'];
console.log(joinArrayToString(words));





console.log("\n|-----------Question-6-----------|")

function calculateProduct(numbers) {
    let count = 1
    let i = 0
    while (i < numbers.length) {
        count *= numbers[i]
        i++
    }
    return count
}


let numbers = [2, 3, 4];
console.log(calculateProduct(numbers));





console.log("\n|-----------Question-7-----------|")
function removeSpaces(remove) {

    let removeSpaces1 = ""
    for (let i = 0; i < remove.length; i++) {
        if (remove[i] != " ") {
            removeSpaces1 += remove[i]
        }
    }
    return removeSpaces1
}
console.log(removeSpaces('hello world'));



console.log("\n|-----------Question-8-----------|")
function doubleNumbers(numbers1) {
    let newarr = []

    for (let i = 0; i < numbers1.length; i++) {
        newarr.push(numbers1[i] * 2)
    }

    return newarr
}
let numbers1 = [1, 2, 3, 4];
console.log(doubleNumbers(numbers1));





console.log("\n|-----------Question-9-----------|")
function printOddNumbers(n){
    let i=0
    while(i<n){
        if(i%2 ===1){
            console.log(i)
        }
        i++
    }
}

printOddNumbers(10);






console.log("\n|-----------Question-10-----------|")

function createIncrementer(){
    let counter=0

    function Incrementer(){
        counter=counter+1;
        return counter
    }

    return Incrementer
}

let inc = createIncrementer();
console.log(inc());
console.log(inc());
console.log(inc());
console.log(inc());