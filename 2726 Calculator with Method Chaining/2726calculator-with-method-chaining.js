class Calculator {
    
    /** 
     * @param {number} value
     */
    
    constructor(value) {
        this.value = value;
        this.dividedByZero = false;
    }
    
    /** 
     * @param {number} value
     * @return {Calculator}
     */
    add(value){
        this.dividedByZero = false;
        this.value += value;
        return this;
    }
    
    /** 
     * @param {number} value
     * @return {Calculator}
     */
    subtract(value){
        this.dividedByZero = false;
        this.value -= value;
        return this;
    }
    
    /** 
     * @param {number} value
     * @return {Calculator}
     */  
    multiply(value) {
        this.dividedByZero = false;
        this.value *= value;
        return this;
    }
    
    /** 
     * @param {number} value
     * @return {Calculator}
     */
    divide(value) {
        if (value === 0){
            this.dividedByZero = true;
        } else {
            this.dividedByZero = false;
            this.value /= value;
        }
        
        return this;
    }
    
    /** 
     * @param {number} value
     * @return {Calculator}
     */
    power(value) {
        this.dividedByZero = false;
        this.value = this.value ** value;
        return this;
    }
    
    /** 
     * @return {number}
     */
    getResult() {
        if (this.dividedByZero){
            return "Division by zero is not allowed";
        } else {
            return this.value;    
        }
    }
}