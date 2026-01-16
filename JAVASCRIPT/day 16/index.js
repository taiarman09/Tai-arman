// question 1
console.log("\n|----------Question-1----------|")
let array = [200, 150, 100, 350, 50]

function show(array) {
    let total = 0

    for(let i=0; i<array.length; i++){
        total+=array[i]
    }

    return total
}
console.log(show(array))


// question 2
console.log("\n|----------Question-2----------|")

let tem=[32, 35, 30, 31, 33, 36, 34]
function tempracher(tem){
    
    return Math.max(...tem)
}
console.log(tempracher(tem))



// question 3
console.log("\n|----------Question-3----------|")
let min=[56, 72, 48, 90, 65]

function showmin(min){

    return Math.min(...min)
}

console.log(showmin(min))




// question 4
console.log("\n|----------Question-4----------|")
let employe=[45000, 55000, 30000, 70000, 60000];
function salary(){
    let sum=0

    for(let i=0; i<employe.length; i++){
        sum+=employe[i]
    }

    return sum/5
}
console.log(salary(employe))





// question 5
console.log("\n|----------Question-5----------|")
let reversed=["John", "Aman", "Rita", "Raj"]

function reverse(reversed){
    let reversee=[]
    for(let i=reversed.length-1; i>=0; i--){
        reversee.push(reversed[i])
    }

    return reversee
}

console.log(reverse(reversed))






// question 6
console.log("\n|----------Question-6----------|")
let seats = [3, 5, 7, 9, 12];

function setAvailabe(seatnumber){
    return seats.includes(seatnumber)
}

console.log(setAvailabe(7))



// question 7
console.log("\n|----------Question-7----------|")
let remove=["Buy groceries", "Clean room", "Study"]
