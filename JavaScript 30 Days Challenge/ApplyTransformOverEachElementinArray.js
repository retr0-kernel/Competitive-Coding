/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    var returnedArray = [];
    for(var i = 0;i<arr.length;i++){
        returnedArray.push(fn(arr[i],i));
    }
    return returnedArray;
};
