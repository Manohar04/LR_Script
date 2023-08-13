var activeIndex;
$(document).ready(function () {
    $("#menu0").addClass('active');
    activeIndex = 0;
})

function setActiveMenuItem(menuIndex){
    var clickedId = "menu" + menuIndex;
    var activeId = "menu" + activeIndex;

    $("#"+activeId).removeClass('active');
    $("#"+clickedId).addClass('active');
    activeIndex = menuIndex;
}