/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array}
 */
var chunk = function(arr, size) {
    const answer = [];
    let chuck = new Array();

    for (let i = 0; i  < arr.length; i++){
        chuck.push(arr[i]);

        if (chuck.length === size || i === arr.length - 1){
            answer.push(chuck);
            chuck = new Array();
        }
    }

    return answer;
};
