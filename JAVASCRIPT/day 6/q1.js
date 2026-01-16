let n=15
let sum=0

for(let i=1; i<=n; i++){
    if(i%2 ===0 || i%5 ===0){
        sum+=i
    }
}

console.log(sum)