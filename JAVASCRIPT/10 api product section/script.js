function addToCart(name, price, img) {
    const cart = document.getElementById("cart");

    const itemBox = document.createElement("div");
    itemBox.className = "cart-item";

    const image = document.createElement("img");
    image.src = img;

    const text = document.createElement("p");
    text.innerText = `${name} — ₹${price}`;

    const removeBtn = document.createElement("button");
    removeBtn.innerText = "Remove";
    removeBtn.className = "remove-btn";

    removeBtn.onclick = () => {
        itemBox.style.opacity = "0";
        setTimeout(() => cart.removeChild(itemBox), 300);
    };

    itemBox.appendChild(image);
    itemBox.appendChild(text);
    itemBox.appendChild(removeBtn);

    cart.appendChild(itemBox);
}
