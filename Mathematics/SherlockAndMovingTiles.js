'use strict';

const fs = require('fs');

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', function (inputStdin) {
  inputString += inputStdin;
});

process.stdin.on('end', function () {
  inputString = inputString.split('\n');

  main();
});

function readLine() {
  return inputString[currentLine++];
}

/*
 * Complete the 'movingTiles' function below.
 *
 * The function is expected to return a DOUBLE_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER l
 *  2. INTEGER s1
 *  3. INTEGER s2
 *  4. INTEGER_ARRAY queries
 */

function movingTiles(l, s1, s2, queries) {
  let a = 0;
  let t = [];
  for (let i of queries) {
    let v = (Math.pow(2, 1 / 2) * (l - Math.pow(i, 1 / 2))) / Math.abs(s2 - s1);
    t.push(v.toFixed(4));
  }
  return t;
}

function main() {
  //   const ws = fs.createWriteStream(process.env.OUTPUT_PATH);
  // 10 1 2
  // 2
  // 50
  // 100

  //   const firstMultipleInput = readLine().replace(/\s+$/g, '').split(' ');

  const l = 10;

  const s1 = 1;

  const s2 = 2;

  const queriesCount = 2;

  let queries = [50, 100];

  //   for (let i = 0; i < queriesCount; i++) {
  //     const queriesItem = parseInt(readLine().trim(), 10);
  //     queries.push(queriesItem);
  //   }

  const result = movingTiles(l, s1, s2, queries);

  console.log('====================================');
  console.log(result);
  console.log('====================================');
  //   ws.write(result.join('\n') + '\n');

  //   ws.end();
}
main();
