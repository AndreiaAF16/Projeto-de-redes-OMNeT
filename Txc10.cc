#include <omnetpp.h>
#include <Txc10.h>

Define_Module(Txc10);

Txc10::Txc10() {

}

Txc10::~Txc10() {

}

void Txc10::initialize() {
    if (getIndex() == 0) {
        // Boot the process scheduling the initial message as a self-message.
        char msgname[20];
        sprintf(msgname, "tic-%d", getIndex());
        cMessage *msg = new cMessage(msgname);
        scheduleAt(0.0, msg);
    }
}

void Txc10::handleMessage(cMessage *msg) {
    if (getIndex() == 3) {
        // Message arrived.
        EV << "Message " << msg << " arrived.\n";
        delete msg;
    } else {
        // We need to forward the message.
        forwardMessage(msg);
    }
}

void Txc10::forwardMessage(cMessage *msg) {

    int n = gateSize("out");
    int k = intuniform(0, n - 1);

    EV << "Forwarding message " << msg << " on port out[" << k << "]\n";
    send(msg, "out", k);
}
