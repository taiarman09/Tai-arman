// let employe = {
//     userName: "Arman",
//     age: 18,
//     deginsation: ["developer", "disigner"],
//     show: function () {
//         console.log("hello world")
//     }
// }

// console.log(employe.age)
// employe.show()
// console.log(employe.deginsation[1])



// let student = {
//     userName: "zed",
//     subject: {
//         hindi: 55,
//         english: 88,
//         maths: 77,
//     },
// };

// console.log(student.subject)
// let array = ["hindi","english","maths"]


// let sum=0

// for(let i=0; i<array.length; i++){
//     sum+=student.subject[array[i]]
// }
// console.log(sum)

// let avg=sum/3

// console.log(avg)



//  let array = [1,2,3,4,5,6,7,8,9,10]

// for(let element of array){
//   console.log(element)
// }



let product = {
    title: "shoes",
    price: 12000,
    brand: "adidas",
    size: "xll",
    category: "sports shoes",
};

for (key in product) {
    console.log(key)
    console.log(product[key])
}