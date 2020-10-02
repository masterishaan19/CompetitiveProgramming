var myIndex = 0;


function carousel() {
  var i;
  var x = document.getElementsByClassName("mySlides");
  for (i = 0; i <3; i++) 
  {
    x[i].style.display = 'none';  
    
  }
  myIndex++;
  if (myIndex > 3) {myIndex = 1}    
  x[myIndex-1].style.display = 'block';  
  setTimeout(carousel, 3000);   

}