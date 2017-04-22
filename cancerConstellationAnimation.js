var x1Pos = 0;
var y1Pos = 300;
var starWidth = 20;
var starHeight = 20;
var star2Width = 10;
var star2Height = 10;
var x2Pos = 400;
var y2Pos = 100;
draw = function() {
    background(29, 40, 115);
    fill(255, 242, 0);
    //1st shooting star
    ellipse(x1Pos, y1Pos, starWidth, starHeight);
    //2nd shooting star
    ellipse(x2Pos, y2Pos, starWidth, starHeight);
    //stagnant stars making cancer constellation
    ellipse(29, 10, star2Width, star2Height);
    ellipse(72, 123, star2Width, star2Height);
    ellipse(97, 140, star2Width, star2Height);
    ellipse(107, 159, star2Width, star2Height);
    ellipse(60, 170, star2Width, star2Height);
    ellipse(50, 289, star2Width, star2Height);
    ellipse(188, 260, star2Width, star2Height);
    
    //animation
    x1Pos++;
    y1Pos -=1.5;
    x2Pos-=1;
    y2Pos-=1;
    starWidth*=99/100;
    starHeight*=99/100;
};
