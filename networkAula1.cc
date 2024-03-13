#include <omnetpp.h>
#include <string.h>

using namespace omnetpp;

class Node: public cSimpleModule{
protected:
    virtual void initialize() override;
    virtual void handleMessage(Message *msg) override;
};

Define_Module(Node);

void Node::initialize(){
    if(strcmp("NodeA", getName()) == 0){
        std::cout << "Olá mundo!" << endl;
   	 cMessage *msg = new cMessage("MSG TIC TOC!");
   	 send(msg, "out");
    }
}

void Node::handleMessage(cMesssage *msg){
    send(msg, "out");
}
