
#include "ydle.h"

using namespace domoaster ;

int LoadPlugins (Kernel & k)
{
	k.RegisterProtocol (new ydle) ;
	k.RegisterNode (new node_ydle) ;
	return 1 ;
}