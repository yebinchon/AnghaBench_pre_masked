
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int server; TYPE_1__* scope; } ;
struct TYPE_5__ {scalar_t__ protocol; } ;
typedef TYPE_2__ DnsTransaction ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(DnsTransaction *VAR_1) {
        FUNC_0(VAR_1);




        if (VAR_1->scope->protocol != VAR_0)
                return 0;



        if (!VAR_1->server)
                return 1;






        return FUNC_1(VAR_1->server);
}
