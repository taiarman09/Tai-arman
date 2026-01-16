console.log("----------Question-3----------")

function outer(){

    let a=8; 

    function inner(){
            return a+2
    }

    return inner
}

let result=outer();
console.log(result())