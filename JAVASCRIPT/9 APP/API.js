let menuList = document.getElementById("menuList")

menuList.style.maxHeight = "0px"

function togglemenu() {
    if (menuList.style.maxHeight == "0px") {
        menuList.style.maxHeight = "300px"
        menuList.style.display = "block"
    }
    else {
        menuList.style.maxHeight = "0px"
        menuList.style.display = "none"
    }
}


document.addEventListener("DOMContentLoaded", () => {
    const inputId = document.getElementById("inputId")
    const searchBtn = document.getElementById("searchBtn")
    const error = document.getElementById("error");
    const result = document.getElementById("result")

    searchBtn.addEventListener("click", () => {

        result.style.display = "none";
        error.innerHTML = "";


        const search = inputId.value.trim();

        if (!search) {
            error.innerHTML = "Please enter food name";
            return;
        }

        const url = `http://localhost:3000/food`;

        fetch(url)
            .then((Response) => Response.json())
            .then((data) => {


                const filtered = data.filter(item =>
                    item.name.toLowerCase().includes(search.toLowerCase())
                );



                if (filtered.length === 0) {
                    error.innerHTML = `No Results found for ${search}`
                }

                result.innerHTML = ""


                filtered.forEach((item) => {
                    result.innerHTML += `
                    <div class="card" style="width: 18rem;">
                        <img src="${item.img}" class="card-img-top" alt="...">
                        <div class="card-body">
                        <h5 class="card-title">${item.name}</h5>
    
                        <p class="card-text">Category: ${item.category}</p>
                        <a href="#" class="btn btn-primary">View More</a>
                         </div>
                    </div>
                    `
                });


                result.style.display = "flex";
                result.style.flexWrap = "wrap";
                result.style.justifyContent = "center";
                result.style.gap = "20px";
                result.style.paddingLeft = "20px";
                result.style.paddingRight = "20px";

            })

            .catch((error) => {
                result.style.display = "none";
                error.innerHTML = "Error fatching data";
                console.error(error)
            })




    })
})