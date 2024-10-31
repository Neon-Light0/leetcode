/**
 * @param {Function[]} functions
 * @return {Function}
 */
var compose = function(functions) {
    return function(x) {
        const compositeFuncton = functions.reduceRight((val, fn)=>{
            return fn(val);
        }, x);

        return compositeFuncton;
    }
};

/**
 * const fn = compose([x => x + 1, x => 2 * x])
 * fn(4) // 9
 */