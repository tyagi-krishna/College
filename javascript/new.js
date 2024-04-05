let a = 0;
var b = 1;
const c = 3;
// c = 4
a = 5;
b = 6;
console.log(a);
console.log(b);
console.log(c);
console.log(`value of a is ${a}`);
hello();
const func = () => {
	console.log("hello");
};
func();
// console.log(string);
// console.log(typeof string);
async function hello() {
	let d = await wait(1);
	console.log(d);
	return "Fuck";
}

async function wait(int) {
	let i = 0,
		count = 0;
	for (i = 0; i < 100000; i++) {
		count++;
	}
	return count;
}
