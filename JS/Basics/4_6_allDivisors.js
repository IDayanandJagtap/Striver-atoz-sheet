// Go till the square root

function printAllDivisors(n) {
    for (let i = 1; i <= Math.sqrt(n); i++) {
        if (n % i == 0) {
            console.log(i);
            if (n / i != i) console.log(n / i);
        }
    }
}

printAllDivisors(16);
