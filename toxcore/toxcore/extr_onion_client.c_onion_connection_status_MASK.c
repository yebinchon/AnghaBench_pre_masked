
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ onion_connected; scalar_t__ UDP_connected; } ;
typedef TYPE_1__ Onion_Client ;


 scalar_t__ VAR_0 ;

unsigned int FUNC_0(const Onion_Client *VAR_1)
{
    if (VAR_1->onion_connected >= VAR_0) {
        if (VAR_1->UDP_connected) {
            return 2;
        } else {
            return 1;
        }
    }

    return 0;
}
