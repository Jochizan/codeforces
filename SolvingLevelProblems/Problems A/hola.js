var preguntas = ['Cuál es tu nombre?: ',
                'Cuántos años tienes?: ',
                'Lenguaje de programación favorito?: '];

var respuestas = [];
function pregunta(i) {
    process.stdout.write(preguntas[i]);
}

process.stdout.write('Hola mundo\n');
process.stdin.on('data', function(data) {
    respuestas.push(data.toString().trim());
    if(respuestas.length < preguntas.length) {
        pregunta(respuestas.length);
    }
});

for(var i = 0; i < respuestas.length; ++i)
    pregunta.stdout.write(respuestas[i]);
pregunta(0);

function regexVar() {
    //  ^ => first item matches:
    // () => stores matching value captured within
    // [aeiou] => matches any of the characters in the brackets
    // . => matches any character:
    // + => for 1 or more occurrances (this ensures str length > 3)
    // \1 => matches to previously stored match. 
        // \2 looks for matched item stored 2 instances ago 
        // \3 looks for matched item stored 3 ago, etc
    //  $ ensures that matched item is at end of the sequence
    let re = /^([aeiou]).+\1$/;
    return re;
}
