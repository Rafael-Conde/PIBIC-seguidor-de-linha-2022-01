# 12/08/2022

## Discussões

### comparações em C++

os simbolos mostrados a seguir, são chamados se operador de comparação, na linguagem de programação C++

$$ ==, !=, >, >=, <, <= $$

Eles são utilizados quando queremos comparar valores. No caso do [código do seguidor de linha](https://www.robocore.net/tutoriais/robo-seguidor-de-linha) que vimos na internet, podemos usar um pedaço do código para compreender como eles pode ser utilizados.

No código, temos a seguinte linha:

```c++
if((Valor_Sensor1 > 700) && (Valor_Sensor2 > 700))
```

Nessa linha, são feitas 3 comparações, cujo resultado é utilizado pela estrutura `if`;

A  1° comparação, compara o valor armazenado na variável `Valor_sensor1` com o valor 700:
```c++
(Valor_Sensor1 > 700)
```

A 2° comparação é igual a primeira porém agora utilizando o valor armazenado na variável `Valor_sensor2`.

```c++
(Valor_Sensor2 > 700)
```
A 3° comparação utiliza outros operador de comparação, porém esses operadores funcionam apenas em valores do tipo `bool`(que só podem ser verdadeiro-`true` ou falso-`false`). Os operadores são os seguintes

| operador | `&&` | `\|\|` | `!` |
|:-:|:-:|:-:|:-:|
| equivalente ao português | "e" | "ou" | "não" |

- `&&` é o nosso "e" do português
- `||` é o nosso "ou" do português
- `!` é o nosso não do português
  - Exemplo: vamos supor que queremos executar algum código quando a pessoa não é autorizada a entrar no sistema, podemos usar uma variável chamada `tem_autorizacao`, ai faremos a leitura do código da seguinte forma, "se a pessoa não tem autorização, avise-a.", que pode ser transcrito da seguinte forma:
    ```c++
    if(!tem_autorizacao)// podemos ler essa linha como:
                        // se não tem_autorizacao
    {
        avisar_pessoa();//uma função pronta que avisa a pessoa
    }
    ```
na prática, o que o "`!`" faz é inverter o valor da variável do tipo `bool`, ou seja:
- `!false` transforma o `false` em `true`
- `!true` transforma o `true` em `false`

Obs.: o código encontrado não estava 100\% correto, pois era necessário adicionar duas chamadas para a função `pinMode(Sensor1,INPUT);` e `pinMode(Sensor2,INPUT);` para podermos ler os valores medidos pelos sensores infravemelho.


## próxima reunião

- Tentar obter alguma parte física do robô, falar com a Maria Inês e com o Sanches.






