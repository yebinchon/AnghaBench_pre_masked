
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* connections; } ;
struct TYPE_5__ {unsigned int tcp_connection; scalar_t__ connection_id; int status; } ;
typedef TYPE_2__ TCP_Connection_to ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,unsigned int) ;

__attribute__((used)) static int FUNC_1(TCP_Connection_to *VAR_2, unsigned int VAR_3)
{
    unsigned int VAR_4;

    if (FUNC_0(VAR_2, VAR_3))
        return -1;

    for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
        if (VAR_2->connections[VAR_4].tcp_connection == 0) {
            VAR_2->connections[VAR_4].tcp_connection = VAR_3 + 1;
            VAR_2->connections[VAR_4].status = VAR_1;
            VAR_2->connections[VAR_4].connection_id = 0;
            return VAR_4;
        }
    }

    return -1;
}
