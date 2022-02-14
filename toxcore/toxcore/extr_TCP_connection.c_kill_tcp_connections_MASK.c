
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int tcp_connections_length; struct TYPE_4__* connections; struct TYPE_4__* tcp_connections; int connection; } ;
typedef TYPE_1__ TCP_Connections ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

void FUNC_2(TCP_Connections *VAR_0)
{
    unsigned int VAR_1;

    for (VAR_1 = 0; VAR_1 < VAR_0->tcp_connections_length; ++VAR_1) {
        FUNC_1(VAR_0->tcp_connections[VAR_1].connection);
    }

    FUNC_0(VAR_0->tcp_connections);
    FUNC_0(VAR_0->connections);
    FUNC_0(VAR_0);
}
