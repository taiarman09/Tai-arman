console.log("----------Question-1----------")
function outer(){

    function inner(){
        console.log("Hello inner function");
    }

    return inner;
}
let result=outer();
result()