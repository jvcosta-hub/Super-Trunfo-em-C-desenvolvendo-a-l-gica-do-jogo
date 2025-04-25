Desafio: nível aventureiro
Interatividade no Super Trunfo


Neste nível, você dará um grande passo no desenvolvimento do seu Super Trunfo, adicionando interação com o usuário e lógica mais complexa. Continue praticando e se preparando para o desafio final!


O que você vai fazer:


Neste desafio, o Super Trunfo fica mais interessante! Você implementará um menu interativo usando switch para que o jogador possa escolher o atributo de comparação entre duas cartas de países. Além disso, você usará estruturas de decisão aninhadas (if-else dentro de if-else) para criar uma lógica de comparação mais complexa, considerando regras específicas para cada atributo. Este desafio é uma continuação do desafio anterior, onde você implementou o cadastro das cartas.


Requisitos funcionais


Menu Interativo: Criar um menu interativo no terminal usando a estrutura switch que permita ao jogador escolher qual atributo será usado para comparar as cartas. O menu deve ser claro e fácil de usar.
 
Comparação de Atributos: Implementar a lógica de comparação entre duas cartas com base no atributo selecionado pelo jogador. Os atributos disponíveis são:
 
Nome do país (string - usado apenas para exibir informações, não para comparação direta)
 
População (int)
 
Área (float)
 
PIB (float)
 
Número de pontos turísticos (int)
 
Densidade demográfica (float - já calculada no desafio anterior).
 
Regras de Comparação: A regra geral é: vence a carta com o maior valor no atributo escolhido. Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor.
 
Exibição do Resultado: Mostrar na tela, de forma clara, o resultado da comparação, incluindo:
 
O nome dos dois países.
O atributo usado na comparação.
Os valores do atributo para cada carta.
Qual carta venceu.
Em caso de empate, exibir a mensagem "Empate!".

Requisitos não funcionais


Usabilidade: O menu e as mensagens exibidas no terminal devem ser intuitivos e fáceis de entender.
 
Performance: O sistema deve responder rapidamente às ações do usuário.
 
Manutenibilidade: Escreva um código limpo, organizado e bem comentado.
 
Segurança: (Embora menos crítico neste nível, comece a pensar em como seu código poderia lidar com entradas inválidas do usuário, como a escolha de uma opção inexistente no menu. Um default no switch pode ajudar).
 


Simplificações para o nível intermediário


Você pode usar as cartas que já foram cadastradas no desafio anterior. Não é necessário implementar o cadastro novamente neste nível.
 
Foque na criação do menu com switch e na lógica de comparação com if-else (incluindo comparações aninhadas onde fizer sentido).
 
Implemente a comparação para apenas duas cartas.

Entregando seu projeto


Desenvolva seu projeto no GitHub em um repositório público.
 
Certifique-se de que seu código está bem comentado e que o arquivo README.md do seu repositório contém instruções claras de como compilar e executar seu programa. Inclua exemplos de como usar o menu e quais são os atributos disponíveis para comparação.
