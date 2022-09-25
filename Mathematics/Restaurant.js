function restaurant(l, b) {
  if (l === b) {
    return 1;
  }
  let result = 1;
  let loop = l > b ? b + 1 : l + 1;
  for (let i = 1; i <= loop; i++) {
    if ((l % i === 0) & (b % i === 0)) {
      result = i;
    }
  }
  return parseInt((l * b) / (result * result));
}
// 38 751
// 344 734
// 165 635
// 297 667
// 917 264
// 544 642
// 254 914
// 612 50
// 94 707
// 564 417
// 145 246
console.log('====================================');
console.log(restaurant(6, 9));

// console.log(restaurant(38, 751));
// console.log(restaurant(344, 734));
// console.log(restaurant(165, 635));
// console.log(restaurant(297, 667));
// console.log(restaurant(917, 264));
// console.log(restaurant(544, 642));
// console.log(restaurant(254, 914));
// console.log(restaurant(612, 50));
// console.log(restaurant(94, 707));
// console.log(restaurant(564, 417));
// console.log(restaurant(145, 246));
console.log('====================================');
