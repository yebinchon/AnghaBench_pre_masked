
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_5__ {unsigned int tcp_connections_length; TYPE_1__* tcp_connections; } ;
struct TYPE_4__ {scalar_t__ status; int connection; } ;
typedef TYPE_2__ TCP_Connections ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int const*,int ) ;

int FUNC_1(TCP_Connections *VAR_1, unsigned int VAR_2, const uint8_t *VAR_3,
                           uint16_t VAR_4)
{
    if (VAR_2 >= VAR_1->tcp_connections_length) {
        return -1;
    }

    if (VAR_1->tcp_connections[VAR_2].status == VAR_0) {
        int VAR_5 = FUNC_0(VAR_1->tcp_connections[VAR_2].connection, VAR_3, VAR_4);

        if (VAR_5 == 1)
            return 0;
    }

    return -1;
}
