
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ status; TYPE_1__* connections; } ;
struct TYPE_7__ {scalar_t__ status; int sleep_count; int lock_count; int connection; } ;
struct TYPE_6__ {int tcp_connection; scalar_t__ status; int connection_id; } ;
typedef TYPE_2__ TCP_con ;
typedef int TCP_Connections ;
typedef TYPE_3__ TCP_Connection_to ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__* FUNC_0 (int *,int) ;
 TYPE_2__* FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int) ;

int FUNC_4(TCP_Connections *VAR_4, int VAR_5)
{
    TCP_Connection_to *VAR_6 = FUNC_0(VAR_4, VAR_5);

    if (!VAR_6)
        return -1;

    unsigned int VAR_7;

    for (VAR_7 = 0; VAR_7 < VAR_0; ++VAR_7) {
        if (VAR_6->connections[VAR_7].tcp_connection) {
            unsigned int VAR_8 = VAR_6->connections[VAR_7].tcp_connection - 1;
            TCP_con *VAR_9 = FUNC_1(VAR_4, VAR_8);

            if (!VAR_9)
                continue;

            if (VAR_9->status == VAR_2) {
                FUNC_2(VAR_9->connection, VAR_6->connections[VAR_7].connection_id);
            }

            if (VAR_6->connections[VAR_7].status == VAR_1) {
                --VAR_9->lock_count;

                if (VAR_6->status == VAR_3) {
                    --VAR_9->sleep_count;
                }
            }
        }
    }

    return FUNC_3(VAR_4, VAR_5);
}
