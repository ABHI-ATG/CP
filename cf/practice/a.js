const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

function findUniqueEmails(text) {
    const emailRegex = /\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Z|a-z]{2,}\b/g;
    const uniqueEmails = new Set(text.match(emailRegex) || []);
    return Array.from(uniqueEmails).sort();
}

rl.question("", (text) => {
  const result = findUniqueEmails(text);
  console.log(result);
  rl.close();
});
