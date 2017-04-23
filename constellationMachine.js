var xPositions = [100,100];/*stars*/
var yPositions = [200,100];

var drawStars = function() {
    background(9, 5, 59);
    imageMode(CENTER);
    for (var i = 0; i < yPositions.length; i++) {
        image(getImage("space/star"), xPositions[i], yPositions[i], 30, 30);
    }
};
mouseClicked = function() {/*wherever the user clicks there will be a star*/ 
    xPositions.push(mouseX);
    yPositions.push(mouseY);
    drawStars();
    };
drawStars();
