/**
 * @param {string} val
 * @return {Object}
 */
var expect = function(val) {
    const result = {
        toBe: (val2) => {
            if (val === val2){
                return true;
            } else {
                let err = new Error("Not Equal");
                throw err;
            }
        },

        notToBe: (val2) => {
            if (val !== val2){
                return true;
            } else {
                let err = new Error("Equal");
                throw err;
            }
        }
    }

    return result;
};

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */