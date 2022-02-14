
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {unsigned int connections_length; int onion_num_conns; } ;
struct TYPE_8__ {int connection; scalar_t__ onion; } ;
typedef TYPE_1__ TCP_con ;
typedef TYPE_2__ TCP_Connections ;
typedef int TCP_Connection_to ;


 int * FUNC_0 (TYPE_2__*,unsigned int) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_5(TCP_Connections *VAR_0, int VAR_1)
{
    TCP_con *VAR_2 = FUNC_1(VAR_0, VAR_1);

    if (!VAR_2)
        return -1;

    unsigned int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_0->connections_length; ++VAR_3) {
        TCP_Connection_to *VAR_4 = FUNC_0(VAR_0, VAR_3);

        if (VAR_4) {
            FUNC_3(VAR_4, VAR_1);
        }
    }

    if (VAR_2->onion) {
        --VAR_0->onion_num_conns;
    }

    FUNC_2(VAR_2->connection);

    return FUNC_4(VAR_0, VAR_1);
}
