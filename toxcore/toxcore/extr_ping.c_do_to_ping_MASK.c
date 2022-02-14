
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int ip; } ;
struct TYPE_8__ {int last_to_ping; TYPE_1__* to_ping; int dht; } ;
struct TYPE_7__ {TYPE_4__ ip_port; int public_key; } ;
typedef TYPE_2__ PING ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,TYPE_4__) ;
 int FUNC_4 (TYPE_2__*,TYPE_4__,int ) ;
 int FUNC_5 () ;

void FUNC_6(PING *VAR_2)
{
    if (!FUNC_2(VAR_2->last_to_ping, VAR_1))
        return;

    if (!FUNC_0(&VAR_2->to_ping[0].ip_port.ip))
        return;

    unsigned int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
        if (!FUNC_0(&VAR_2->to_ping[VAR_3].ip_port.ip))
            break;

        if (!FUNC_3(VAR_2->dht, VAR_2->to_ping[VAR_3].public_key, VAR_2->to_ping[VAR_3].ip_port))
            continue;

        FUNC_4(VAR_2, VAR_2->to_ping[VAR_3].ip_port, VAR_2->to_ping[VAR_3].public_key);
        FUNC_1(&VAR_2->to_ping[VAR_3].ip_port.ip);
    }

    if (VAR_3 != 0)
        VAR_2->last_to_ping = FUNC_5();
}
