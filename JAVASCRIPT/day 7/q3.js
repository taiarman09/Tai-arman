let str=1
let str1=""

for(let i=5; i>=1; i--){
    str *=i
    str1 +=i+"*"
    
}

    console.log(str1.slice(0,-1),"=",str)