let number=28
let sum=0

for(let i=1; i<number; i++){

    if(number%i ===0){
        sum +=i
    }
}

if (sum === number) {
    console.log(number + " is a perfect number");
} else {
    console.log(number + " is NOT a perfect number");
}