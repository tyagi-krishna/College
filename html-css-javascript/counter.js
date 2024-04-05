let counter = 0 
function count() {
    counter++;
    document.querySelector('h1').innerHTML = counter;

    if(counter%10 ===0) {
        alert(`counter is ${counter}`);
    }
}
document.addEventListener('DOMContentLoaded', function() {
    document.querySelector('button').addEventListener('click', count);
});
