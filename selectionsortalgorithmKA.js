//provides the ability to swap values of indexes
var swap = function(array, firstIndex, secondIndex) {
    var temp = array[firstIndex];
    array[firstIndex] = array[secondIndex];
    array[secondIndex] = temp;
};

//locates the minimum value in an array at any given index
var indexOfMinimum = function(array, startIndex) {

    var minValue = array[startIndex];
    var minIndex = startIndex;

    for(var i = minIndex + 1; i < array.length; i++) {
        if(array[i] < minValue) {
            minIndex = i;
            minValue = array[i];
        }
    } 
    return minIndex;
}; 
//combines the two functions above to swap the minimum value of an index in the array starting from the left and sorting the minimum values among the indeces until the array is sorted least to greatest.
var selectionSort = function(array) {
    var minIndex = 0;
    for(var i = 0; i < array.length; i++) {
     swap(array, i, indexOfMinimum(array, i));   
    }
};

var array = [22, 11, 99, 88, 9, 7, 42];
selectionSort(array);
println("Array after sorting:  " + array);

Program.assertEqual(array, [7, 9, 11, 22, 42, 88, 99]);
