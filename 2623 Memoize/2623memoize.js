/**
 * @param {Function} fn
 * @return {Function}
 */
function memoize(fn) {
    const table = {};

    return function(...args) {
        const key = JSON.stringify(args);

         if (table.hasOwnProperty(key)){
            return table[key];
         } else {
            table[key] = fn(...args);
            return table[key];
         }
    }
}


/** 
 * let callCount = 0;
 * const memoizedFn = memoize(function (a, b) {
 *	 callCount += 1;
 *   return a + b;
 * })
 * memoizedFn(2, 3) // 5
 * memoizedFn(2, 3) // 5
 * console.log(callCount) // 1 
 */