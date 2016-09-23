function myMap() {
  var mapCanvas = document.getElementById("map");
  var mapPosition=new google.maps.LatLng(37.08742, 126.120850);
  var mapCenter = {center: mapPosition, zoom: 6};
  var map = new google.maps.Map(mapCanvas, mapCenter);
  google.maps.event.addListener(map, 'click', function(event) {
    placeMarker(map, event.latLng);
  });
}

function placeMarker(map, location) {
  var marker = new google.maps.Marker({
    position: location,
    map: map
  });
  var infowindow = new google.maps.InfoWindow({
    content: 'Latitude: ' + location.lat() + '<br>Longitude: ' + location.lng()
  });
  infowindow.open(map,marker);
}
