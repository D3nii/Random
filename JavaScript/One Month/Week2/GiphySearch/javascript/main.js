
document.querySelector(".js-go").addEventListener('click', function() {
  var input = document.querySelector("input").value;
  data(input);
  pushToDOM(input);
});

document.querySelector(".js-userinput").addEventListener('keyup', function(e){
  var input = document.querySelector("input").value;

  if(e.which === 13) {
    data(input);
    pushToDOM(input);
  }
});

function data(x) {
	var url = "http://api.giphy.com/v1/gifs/search?q=" + x + "&api_key=dc6zaTOxFJmzC";

	var GiphyAJAXCall = new XMLHttpRequest();
	GiphyAJAXCall.open('GET', url);
	GiphyAJAXCall.send();

	GiphyAJAXCall.addEventListener('load', function(e){
	  var data = e.target.response;
	  pushToDOM(data);
	});
}

function pushToDOM(input) {
  var response = JSON.parse(input);
  var imageUrls = response.data;
  var container = document.querySelector(".js-container");

  imageUrls.forEach(function(image){
    var src = image.images.fixed_height.url;
    console.log(src);

    container.innerHTML += "<img src=\"" + src + "\" class=\"container-image\">";
  });
}
