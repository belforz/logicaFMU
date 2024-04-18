// let  n1
// let n2 
// let media

// prompt("Digite a nota da prova 1", n1)

// prompt("Digite a nota da prova 2", n2)
// media = (n1 + n2)/2
// if (media <= 6){
//     alert("Voce está aprovado", media)


// }
// else{
//     alert("Voce está reprovado")
// }

let  n1
let n2 
let media
let percenFalta

prompt("Digite a nota da prova 1", n1)

prompt("Digite a nota da prova 2", n2)
media = (n1 + n2)/2

prompt("Digite o percentual da frequencia", percenFalta)
if (percenFalta < 75){
    alert("Voce está reprovador")


}
else{
    if (media < 6){
        alert("Voce está reprovador")
    }
    else{
        alert("Voc}e está aprovador")
    }
}



