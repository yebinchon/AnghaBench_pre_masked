
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int tcp_connections_length; TYPE_1__* tcp_connections; } ;
struct TYPE_4__ {scalar_t__ status; scalar_t__ onion; } ;
typedef TYPE_2__ TCP_Connections ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 () ;

int FUNC_1(TCP_Connections *VAR_1)
{
    unsigned int VAR_2, VAR_3 = FUNC_0();

    for (VAR_2 = 0; VAR_2 < VAR_1->tcp_connections_length; ++VAR_2) {
        unsigned int VAR_4 = ((VAR_2 + VAR_3) % VAR_1->tcp_connections_length);

        if (VAR_1->tcp_connections[VAR_4].onion && VAR_1->tcp_connections[VAR_4].status == VAR_0) {
            return VAR_4;
        }
    }

    return -1;
}
