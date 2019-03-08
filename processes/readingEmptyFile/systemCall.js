const fs = require('fs');


let startTime = 0, endTime = 0, totalTime = 0, rounds = 10000;
for (let i = 0; i < rounds; ++i) {
  startTime = process.hrtime();
  fs.readFileSync('./empty.txt')
  endTime = process.hrtime()
  totalTime += (endTime[1] - startTime[1]) / 1000;
}
console.log(`Average time for reading empty file: ${totalTime / rounds}  microseconds\n`);