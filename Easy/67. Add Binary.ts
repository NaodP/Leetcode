function addBinary(a: string, b: string): string {
    let output = [];
    let next = 0;
    let sum = 0;
    let newA = a.split("");
    let newB = b.split("");

    while(newA.length !== 0 || newB.length !== 0){
        
        if(newA.length !== 0){
            sum += Number(newA.pop());
        }
        if(newB.length !== 0){
            sum += Number(newB.pop());
        }

        sum += next;

        if(sum == 2){
            next = 1;
            sum = 0;
        }
        else if(sum == 3){
            next = 1
            sum = 1;
        }
        else{
            next = 0;
        }

        output.unshift(sum);
        sum = 0;
    }

    if(next == 1){
        output.unshift(1);
    }

    return output.join("");
};