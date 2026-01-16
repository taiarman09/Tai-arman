console.log("----------Question-2----------")

function outer(){

    let name="javascript"

    function inner(){
        let count =0
        for(let i=0; i<name.length; i++){
            let char =name[i].toLowerCase()
            if(char ==='a' || char ==='e' || char ==='i' || char ==='o' || char ==='u' ){
                count++
            }
        }
        return count
    }


    return inner
}

let result = outer()
console.log(result())