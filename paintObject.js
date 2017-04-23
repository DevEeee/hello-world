var paintBrush = {
    x: 250,
    y: 250,
    img: getImage("creatures/Hopper-Cool")
};

var paintCanvas = function() {
    imageMode(CENTER);
    image(paintBrush.img, paintBrush.x, paintBrush.y);
};
mouseMoved = function() {
    paintBrush.x = mouseX;
    paintBrush.y = mouseY;
    paintCanvas();
};
paintCanvas();
