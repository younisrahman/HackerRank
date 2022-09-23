function findBestDivisor(n) {
  const divisors = [];
  for (let i = 1; i <= Math.floor(n / 2); i++) {
    if (n % i === 0) divisors.push(i);
  }

  divisors.push(n);

  let bestDivisor = 1;
  for (const divisor of divisors) {
    const divisorDigits = bestDivisor.toString().split('');
    const bestDivisorDigits = divisor.toString().split('');
    const divisorDigitsSum = divisorDigits.reduce(
      (a, b) => Number(a) + Number(b)
    );
    const bstDivisorDigitSum = bestDivisorDigits.reduce(
      (a, b) => Number(a) + Number(b)
    );
    if (bstDivisorDigitSum > divisorDigitsSum) {
      bestDivisor = divisor;
    }
  }

  console.log(bestDivisor);
}
