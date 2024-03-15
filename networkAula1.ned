simple Node
{
    gates:
        input in;
        output out;
}
network networkAula1
{
    @display("bgb=409,301");
    submodules:
            NodeB: Node {
                    @display("p=64,183");
            }
            NodeA: Node {
                    @display("p=227,129");
            }
    connections:
            NodeA.out --> NodeB.in;
            NodeB.out --> NodeA.in;
}


