function reverseArray(arr, size) {
    let temp;
    let j = size - 1;

    for (let i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j--;
    }
}

function main() {
    let arr = [1, 2, 3, 4, 5, 6, 7];
    let size = arr.length;

    reverseArray(arr, size);

    arr.forEach((e) => {
        console.log(e);
    });
}

main();
