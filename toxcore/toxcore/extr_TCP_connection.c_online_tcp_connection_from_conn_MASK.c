
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* connections; } ;
struct TYPE_4__ {scalar_t__ status; scalar_t__ tcp_connection; } ;
typedef TYPE_2__ TCP_Connection_to ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static unsigned int FUNC_0(TCP_Connection_to *VAR_2)
{
    unsigned int VAR_3, VAR_4 = 0;

    for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
        if (VAR_2->connections[VAR_3].tcp_connection) {
            if (VAR_2->connections[VAR_3].status == VAR_1) {
                ++VAR_4;
            }
        }
    }

    return VAR_4;
}
