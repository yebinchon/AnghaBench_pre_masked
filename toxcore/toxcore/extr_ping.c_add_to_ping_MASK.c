
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;


typedef int uint8_t ;
struct TYPE_20__ {int ip; } ;
struct TYPE_19__ {int self_public_key; int close_clientlist; } ;
struct TYPE_18__ {int ip; } ;
struct TYPE_17__ {TYPE_5__* dht; TYPE_12__* to_ping; } ;
struct TYPE_16__ {int public_key; TYPE_7__ ip_port; } ;
typedef TYPE_1__ PING ;
typedef TYPE_2__ IP_Port ;


 scalar_t__ FUNC_0 (TYPE_5__*,int const*,TYPE_2__*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_12__*,unsigned int,int const*,TYPE_2__,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ,int const*,TYPE_2__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_7__*,TYPE_2__*) ;
 int FUNC_5 (int ,int const*,int ) ;
 int FUNC_6 (TYPE_5__*,int const*,TYPE_2__) ;
 scalar_t__ FUNC_7 (int ,int const*) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__,int const*) ;

int FUNC_9(PING *VAR_3, const uint8_t *VAR_4, IP_Port VAR_5)
{
    if (!FUNC_3(&VAR_5.ip))
        return -1;

    if (!FUNC_6(VAR_3->dht, VAR_4, VAR_5))
        return -1;

    if (FUNC_2(VAR_3->dht->close_clientlist, VAR_0, VAR_4, VAR_5))
        return -1;

    IP_Port VAR_6;

    if (FUNC_0(VAR_3->dht, VAR_4, &VAR_6) == 0) {
        FUNC_8(VAR_3, VAR_5, VAR_4);
        return -1;
    }

    unsigned int VAR_7;

    for (VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7) {
        if (!FUNC_3(&VAR_3->to_ping[VAR_7].ip_port.ip)) {
            FUNC_5(VAR_3->to_ping[VAR_7].public_key, VAR_4, VAR_2);
            FUNC_4(&VAR_3->to_ping[VAR_7].ip_port, &VAR_5);
            return 0;
        }

        if (FUNC_7(VAR_3->to_ping[VAR_7].public_key, VAR_4) == 0) {
            return -1;
        }
    }

    if (FUNC_1(VAR_3->to_ping, VAR_1, VAR_4, VAR_5, VAR_3->dht->self_public_key))
        return 0;

    return -1;
}
