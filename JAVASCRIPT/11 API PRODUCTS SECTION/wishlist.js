let cartData = JSON.parse(localStorage.getItem("cartItems")) || [];
let cartList = document.getElementById("cartList");


function loadCart() {
    if (cartData.length === 0) {
        cartList.innerHTML = "<h2>No items added yet!</h2>";
        return;
    }

    cartData.forEach((item) => {
        cartList.innerHTML += `
            <div class="card">
                <img src="${item.img}">
                <h3>${item.name}</h3>
                <p>₹${item.price}</p>
            </div>
        `;
    });
}

loadCart();