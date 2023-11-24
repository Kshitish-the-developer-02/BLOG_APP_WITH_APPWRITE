var istatus = document.querySelector("h5");
var addfriends = document.querySelector("#add");
// var removefrnd=document.querySelector("#remove")
var check = 0
addfriends.addEventListener("click", function() {
  if (check == 0) {
    istatus.innerHTML = "Friends"
    istatus.style.color = "green"
    check=1
  }
  else{
    istatus.inerHTML="Stranger"
    istatus.style.color="red"
    check=0
  }
})

// removefrnd.addEventListener("click",function(){
//     istatus.innerHTML="Stranger"
//     istatus.style.color="red";
// })
