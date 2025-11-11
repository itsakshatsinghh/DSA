/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let fakenum=init;
    function increment(){
        return ++fakenum;

    }
    function decrement(){
        return --fakenum;
        
    }
    function reset(){
        return fakenum=init;
        
    }
    return {increment , decrement , reset};
    
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */