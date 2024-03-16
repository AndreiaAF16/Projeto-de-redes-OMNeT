# Projeto-de-redes-OMNeT

Nos arquivos networkAula1.ned, Node.cc e omnetpp.ini está estamos modelando uma rede simples com dois nós, chamados NodeA e NodeB. Cada nó tem uma entrada (in) e uma saída (out).

Na função initialize() da classe Node, estamos inicializando os nós. Se o nome do nó for "NodeA", criamos uma mensagem chamada "MSG TIC TOC!" e a enviamos pela saída (out) do nó. Ou seja, o NodeA envia uma mensagem inicial para começar a comunicação.

Na função handleMessage(), estamos lidando com as mensagens que os nós recebem. Em ambos os casos, qualquer mensagem recebida é simplesmente reenviada pela saída (out) do nó, ou seja, os nós simplesmente repassam as mensagens que recebem.

Então, na simulação, NodeA envia uma mensagem inicial "MSG TIC TOC!" para NodeB, que então repassa a mensagem de volta para NodeA. Esse processo de envio e recebimento de mensagens entre os nós continua indefinidamente, criando um loop de comunicação entre eles.

Nos arquivos tictoc10.ned, Txc10.cc e Omnetpp.ini está estamos modelando uma rede simples com dois nós, chamados NodeA e NodeB. Cada nó tem uma entrada (in) e uma saída (out). O código apresenta uma simulação de rede em OMNeT++, onde os nós são representados por módulos do tipo Txc10. Cada nó possui uma porta de entrada e uma de saída, permitindo a comunicação entre os nós. A rede Tictoc10 é composta por seis desses nós, conectados em série. A simulação é iniciada com uma mensagem agendada para o nó de índice 0, que é encaminhada para os nós subsequentes até alcançar seu destino.

Durante a execução da simulação, quando uma mensagem chega a um nó, a função handleMessage() é acionada. Se o nó atual for o destino final (índice 3), a mensagem é simplesmente descartada. Caso contrário, a mensagem é encaminhada para outro nó através da função forwardMessage(), que escolhe aleatoriamente uma das portas de saída disponíveis para encaminhar a mensagem.

Essa abordagem cria uma cadeia de transmissão, onde as mensagens são enviadas de um nó para outro até alcançar o destino desejado. Essa simulação básica demonstra o funcionamento de redes de comunicação e como as mensagens são roteadas entre os nós para atingir seus destinos.
