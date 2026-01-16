function getData() {
  let name = document.getElementById("name");
  let age = document.getElementById("age");
  let city = document.getElementById("city");

  let optname = document.getElementById("optname");
  let optage = document.getElementById("optage");
  let optcity = document.getElementById("optcity");

  optname.innerHTML=name.value;
  optage.innerHTML=age.value;
  optcity.innerHTML=city.value;
}