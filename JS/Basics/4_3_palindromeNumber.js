function reverseNumber(n) {
    let num = n;
    let reversedNum = 0;

    while (num > 0) {
        let rem = num % 10;
        reversedNum = reversedNum * 10 + rem;
        num = Math.floor(num / 10);
    }

    return reversedNum;
}

function palindromeNumber(n) {
    let reversedNumber = reverseNumber(n);

    if (reversedNumber == n) return true;
    else return false;
}

function main() {
    let num = 567;

    if (palindromeNumber(num)) console.log("Palindrome");
    else console.log("Not palindrome");
}

main();
