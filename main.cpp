#include <iostream>
#include "http/Http.h"

int sendNum=0;
int errNum=0;
int successNum=0;
CHttp *http=new CHttp();

int main()
{
	boost::shared_ptr<CWebRespone> ret=http->Get("http://www.xiaoqin.in");
	std::string msg=ret->msg.get();
	std::cout<<msg;

	int waitSingle;
	std::cin>>waitSingle;

	return 0;	
}