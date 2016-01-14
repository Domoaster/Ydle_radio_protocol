
#include "Kernel.h"
#include "Float.h"

namespace domoaster {

class node_ydle : public INode 
{
  public:
    std::string Name () { return "Node Ydle" ; }
    std::string Class () { return "node_ydle" ; }
    std::string Protocol () { return "ydle" ; }

    void Init () {} ;
    void Start () {} ;
} ;

} ; // namespace domoaster

extern "C" int LoadPlugins (domoaster::Kernel &) ;