#include <iostream>



int main() {
    public void shortToBytes(short num, char* bytesArr)
    {
        bytesArr[0] = ((num >> 8) & 0xFF);
        bytesArr[1] = (num & 0xFF);
    }
    //hellow
    short cpCode = 4;
    if(argc<3){
        std::cerr << "Usage:" <<argv[0] <<"host port"<<std::endl;
        reutrn -1;
    }

    std::string host = argv[1];
    short port = atoi(argv[2]);

    ConnectionHandler connectionHandler(host,port);
    if(!connectionHandler.connect()){
    std::cerr<< "Cannot connect to" << host<< ":" << port << std::endl;
    retirn 1;
    }
    else{
        shortToBytes(short);
        connectionHandler.sendBytes();
    }


}
