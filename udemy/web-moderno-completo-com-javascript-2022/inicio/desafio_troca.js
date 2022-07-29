// Realize a troca de valores entre duas variáveis.

let a = 7;
let b = 94;
const c = a;

console.log('O valor de a é de ' + a);
console.log('O valor de b é de ' + b);

console.log('TROCA');

a = b;
console.log('O valor de a é de ' + a);

b = c;
console.log('O valor de b é de ' + b);

//----------------------------------------------------------

console.log('TROCA');

[a, b] = [b, a]; // Forma direta para trocar duas variáveis
console.log('O valor de a é de ' + a);
console.log('O valor de b é de ' + b);