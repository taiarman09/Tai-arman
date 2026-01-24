const products = [
    {
        id: 1,
        name: "Mobile",
        price: 15000,
        img: "https://rukminim2.flixcart.com/image/312/312/xif0q/mobile/x/c/y/-original-imah57jbfqsz6797.jpeg?q=70"
    },
    {
        id: 2,
        name: "Headphone",
        price: 2000,
        img: "https://rukminim2.flixcart.com/image/312/312/xif0q/headphone/8/n/h/-original-imags7dg76mcwkhe.jpeg?q=70"
    },
    {
        id: 3,
        name: "Watch",
        price: 2500,
        img: "https://rukminim2.flixcart.com/image/312/312/xif0q/watch/y/v/u/-original-imahyvgrvctdzy77.jpeg?q=70"
    }
]

let cartItems = JSON.parse(localStorage.getItem("cartItems")) || [];
document.querySelector("li span").innerHTML = cartItems.length;


let cartcount = cartItems.length;
let productContainer = document.getElementById("products")


function showProducts() {
    products.forEach((item) => {
        productContainer.innerHTML += `
             <div class="card">
                <img src="${item.img}" />
                <h3>${item.name}</h3>
                <p>₹${item.price}</p>
                <button onclick="addToCart(${item.id})">Add to Cart</button>
            </div>
        `
    })
}


showProducts()



function addToCart(id) {
    
    let product = products.find((p)=> p.id ===id);

    cartItems.push(product)

    localStorage.setItem("cartItems", JSON.stringify(cartItems));

    document.querySelector("li span").innerHTML = cartItems.length;

    alert(product.name + "add to cart!");

}




