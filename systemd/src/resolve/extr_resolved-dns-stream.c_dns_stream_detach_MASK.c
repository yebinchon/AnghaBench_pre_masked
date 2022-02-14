
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* stream; } ;
struct TYPE_5__ {TYPE_3__* server; } ;
typedef TYPE_1__ DnsStream ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_3__*) ;

void FUNC_2(DnsStream *VAR_0) {
        FUNC_0(VAR_0);

        if (!VAR_0->server)
                return;

        if (VAR_0->server->stream != VAR_0)
                return;

        FUNC_1(VAR_0->server);
}
