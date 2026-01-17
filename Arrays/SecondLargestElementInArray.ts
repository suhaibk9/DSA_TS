const secondLargest = (ar: number[]): number => {
  let sl: number = -1;
  let l: number = 0;
  for (let i = 1; i < ar.length; i++) {
    if (ar[i] > ar[l]) {
      sl = l;
      l = i;
    } else {
      if (ar[i] !== ar[l]) {
        if (sl === -1 || ar[sl] < ar[i]) {
          sl = i;
        }
      }
    }
  }

  return sl === -1 ? -1 : ar[sl];
};
const testArray = [12, 35, 1, 10, 34, 1, 35, -1, -10];
console.log("Array:", testArray);
console.log("Second Largest Element:", secondLargest(testArray));
