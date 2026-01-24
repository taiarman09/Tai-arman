function getCoronaData() {
  let country = document.getElementById("country").value.trim();  
  
  let url;
  if (!country) {
    url = "https://disease.sh/v3/covid-19/all";  
  } else {
    url = `https://disease.sh/v3/covid-19/countries/${encodeURIComponent(country)}`; 
  }

  fetch(url)
    .then((response) => {
      if (!response.ok) {
        throw new Error("Country not found or API issue");
      }
      return response.json();
    })
    .then((data) => {
      let output = "";

      if (!country) {
        // Global
        output = `
          <strong>Global COVID-19 Stats:</strong><br>
          Cases: ${data.cases.toLocaleString()} <br>
          Today Cases: ${data.todayCases.toLocaleString()} <br>
          Deaths: ${data.deaths.toLocaleString()} <br>
          Today Deaths: ${data.todayDeaths.toLocaleString()} <br>
          Recovered: ${data.recovered.toLocaleString()} <br>
          Active: ${data.active.toLocaleString()} <br>
          Updated: ${new Date(data.updated).toLocaleString()}
        `;
      } else {
        
        output = `
          <strong>${data.country} (${data.countryInfo.iso2 || "N/A"}) COVID-19 Stats:</strong><br>
          Cases: ${data.cases.toLocaleString()} <br>
          Today Cases: ${data.todayCases.toLocaleString()} <br>
          Deaths: ${data.deaths.toLocaleString()} <br>
          Today Deaths: ${data.todayDeaths.toLocaleString()} <br>
          Recovered: ${data.recovered.toLocaleString()} <br>
          Active: ${data.active.toLocaleString()} <br>
          Critical: ${data.critical.toLocaleString()} <br>
          Population: ${data.population?.toLocaleString() || "N/A"} <br>
          Updated: ${new Date(data.updated).toLocaleString()}
        `;
      }

      document.getElementById("result").innerHTML = output;
    })
    .catch((error) => {
      document.getElementById("result").innerHTML = 
        "Error: " + (error.message.includes("not found") ? "Country not found!" : error.message);
      console.error(error);
    });
}
