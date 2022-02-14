
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int public_key; int ip_port; } ;
struct TYPE_9__ {unsigned int connections_length; int onion_num_conns; } ;
struct TYPE_8__ {scalar_t__ status; scalar_t__ lock_count; scalar_t__ sleep_count; scalar_t__ unsleep; scalar_t__ connected_time; scalar_t__ onion; TYPE_4__* connection; int relay_pk; int ip_port; } ;
typedef TYPE_1__ TCP_con ;
typedef TYPE_2__ TCP_Connections ;
typedef int TCP_Connection_to ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (TYPE_2__*,unsigned int) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *,int,int ,int ) ;

__attribute__((used)) static int FUNC_5(TCP_Connections *VAR_4, int VAR_5)
{
    TCP_con *VAR_6 = FUNC_1(VAR_4, VAR_5);

    if (!VAR_6)
        return -1;

    if (VAR_6->status != VAR_1)
        return -1;

    if (VAR_6->lock_count != VAR_6->sleep_count)
        return -1;

    VAR_6->ip_port = VAR_6->connection->ip_port;
    FUNC_3(VAR_6->relay_pk, VAR_6->connection->public_key, VAR_3);

    FUNC_2(VAR_6->connection);
    VAR_6->connection = ((void*)0);

    unsigned int VAR_7;

    for (VAR_7 = 0; VAR_7 < VAR_4->connections_length; ++VAR_7) {
        TCP_Connection_to *VAR_8 = FUNC_0(VAR_4, VAR_7);

        if (VAR_8) {
            FUNC_4(VAR_8, VAR_5, VAR_0, 0);
        }
    }

    if (VAR_6->onion) {
        --VAR_4->onion_num_conns;
        VAR_6->onion = 0;
    }

    VAR_6->lock_count = 0;
    VAR_6->sleep_count = 0;
    VAR_6->connected_time = 0;
    VAR_6->status = VAR_2;
    VAR_6->unsleep = 0;

    return 0;
}
