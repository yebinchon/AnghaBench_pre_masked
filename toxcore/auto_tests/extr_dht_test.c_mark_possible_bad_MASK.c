
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ testing_requests; scalar_t__ send_nodes_ok; scalar_t__ routes_requests_ok; } ;
struct TYPE_5__ {TYPE_1__ hardening; int timestamp; } ;
typedef TYPE_2__ IPPTsPng ;


 int FUNC_0 () ;

void FUNC_1(IPPTsPng *VAR_0)
{
    VAR_0->timestamp = FUNC_0();
    VAR_0->hardening.routes_requests_ok = 0;
    VAR_0->hardening.send_nodes_ok = 0;
    VAR_0->hardening.testing_requests = 0;
}
