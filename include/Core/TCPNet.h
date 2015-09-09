#include "SDLBase.h"
#include <string>

namespace Core{

class TCPServer;

class TCPSocket{ //套接字连接
friend class TCPServer;
public:
	static TCPSocket* LinkToServer(const std::string service,Uint16 port);
//作为客户端连接到服务器
	
	int Send(const void*,int size);	//发送数据到另一端，返回已发送的数据量
	int Recv(void*,int maxlen);
	//从另一端接收数据，返回已接受的数据
	
	int WaitRecv(void*,int maxlen);
	//等待数据到达
	
	~TCPSocket();
private:
	IPaddress m_ip;
	TCPsocket m_socket = nullptr;
};

class TCPServer{    //TCP服务器
public:
	TCPService(Uint16 port);
	//传入端口
	~TCPService();
	TCPSocket* Accept();
	//接收一个连接，如果没有连接请求返回nullptr.
	TCPSocket* ListenAndAccept();
	//侦听，等待连接接入并自动接收。
private:
	IPaddress m_ip;
	TCPsocket m_socket = nullptr;
};
}