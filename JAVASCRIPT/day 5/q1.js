let temperature =20

if(temperature<=18){
    console.log("It's too cold, turn on the heater.")
}
else if(temperature>=18 && temperature<=25){
    console.log("The temperature is comfortable.")
}
else if(25<=temperature){
    console.log("It's too hot, turn on the fan.")
}
else{
    console.log("Invalid temperature.")
}