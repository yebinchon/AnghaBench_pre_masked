
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_6__ {scalar_t__ status; } ;
struct TYPE_5__ {size_t tcp_connections_length; TYPE_2__* tcp_connections; } ;
typedef int TCP_con ;
typedef TYPE_1__ TCP_Connections ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int,int,int *) ;

__attribute__((used)) static int FUNC_2(TCP_Connections *VAR_1)
{
    uint32_t VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_1->tcp_connections_length; ++VAR_2) {
        if (VAR_1->tcp_connections[VAR_2].status == VAR_0)
            return VAR_2;
    }

    int VAR_3 = -1;

    TCP_con *VAR_4;

    if (FUNC_1(VAR_1->tcp_connections, sizeof(TCP_con), VAR_1->tcp_connections_length + 1, VAR_4) == 0) {
        VAR_3 = VAR_1->tcp_connections_length;
        ++VAR_1->tcp_connections_length;
        FUNC_0(&(VAR_1->tcp_connections[VAR_3]), 0, sizeof(TCP_con));
    }

    return VAR_3;
}
