console.log("----------Question-2----------")

function outer(){

    let a=8; 
    let b=5

    function inner(){
        let num1=`The number ${a} is =${a**2}`
        let num2=`The number ${b} is =${b**2}`
        return[num1,num2]
    }

    return inner
}

let result=outer();
console.log(result())