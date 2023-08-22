function sum(n1,n2) {
    if(n2 == 0 ) {
        return 0;
    }

    // For handling both positive value
    if(n2>0){
        return  n1+sum(n1,n2-1);
    }
    
    // For handling negative value.
    // if (n2 < 0) {
    //     return -sum(n1, -n2);
        
    // }
 }

const result = sum(3,3);
console.log("Result: "+ result);


// Time complexity: O(n);
// Space complexity: O(1);