/**
 * @param {number[]} nums
 * @return {number}
 */
var jump = function(nums) {
    len = nums.length

    const arr = new Array(len).fill(-1);

    for (let i = 0; i < len; i++){
        nums[i] = nums[i] + i
    }   

    let count = 0
    let  index = 0;
    let max = 0;
    
    for (let i = 0; i < len; i++){
        if (i > index || index >= len-1) {
            break
        }

        if (nums[i] > max){
            max = nums[i]
        }

        if (i === index && max > index){
            index = max
            count++
        }
        
    }

    return count 
};