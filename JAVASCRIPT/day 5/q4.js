let amount=0

if(amount>=100){
    console.log("give a 20% discount.")
}
else if(amount>=50 && amount<=100){
    console.log("give a 10% discount.")
}
else if(amount<=50 && amount>0){
    console.log("no discount..")
}
else{
    console.log("No shopping No discount")
}