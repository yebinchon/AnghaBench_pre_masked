
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int routes_requests_ok; int send_nodes_ok; int testing_requests; } ;
struct TYPE_5__ {TYPE_1__ hardening; int timestamp; } ;
typedef TYPE_2__ IPPTsPng ;


 int VAR_0 ;
 int FUNC_0 () ;

void FUNC_1(IPPTsPng *VAR_1)
{
    VAR_1->timestamp = FUNC_0();
    VAR_1->hardening.routes_requests_ok = (VAR_0 >> 0) & 1;
    VAR_1->hardening.send_nodes_ok = (VAR_0 >> 1) & 1;
    VAR_1->hardening.testing_requests = (VAR_0 >> 2) & 1;
}
