// a number equal to sum of its digits raised to no of digits

function armstrong(n) {
    let nStr = String(n);
    let len = nStr.length;

    let sum = 0;
    let num = n;
    while (num > 0) {
        let rem = num % 10;
        sum += Math.pow(rem, len);

        num = Math.floor(num / 10);
    }

    if (sum == n) console.log("Armstrong number.");
    else console.log("Not an armstrong number");
}

armstrong(155);
