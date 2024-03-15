# Projeto-de-redes-OMNeT

Nos arquivos networkAula1, Node.cc e omnetpp.ini está estamos modelando uma rede simples com dois nós, chamados NodeA e NodeB. Cada nó tem uma entrada (in) e uma saída (out).

Na função initialize() da classe Node, estamos inicializando os nós. Se o nome do nó for "NodeA", criamos uma mensagem chamada "MSG TIC TOC!" e a enviamos pela saída (out) do nó. Ou seja, o NodeA envia uma mensagem inicial para começar a comunicação.

Na função handleMessage(), estamos lidando com as mensagens que os nós recebem. Em ambos os casos, qualquer mensagem recebida é simplesmente reenviada pela saída (out) do nó, ou seja, os nós simplesmente repassam as mensagens que recebem.

Então, na simulação, NodeA envia uma mensagem inicial "MSG TIC TOC!" para NodeB, que então repassa a mensagem de volta para NodeA. Esse processo de envio e recebimento de mensagens entre os nós continua indefinidamente, criando um loop de comunicação entre eles.
