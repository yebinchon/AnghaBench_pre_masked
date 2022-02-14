
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__ numfriends; struct TYPE_5__* friendlist; int net; int dht; int net_crypto; int onion_c; int onion_a; int onion; int fr_c; scalar_t__ tcp_server; } ;
typedef TYPE_1__ Messenger ;


 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

void FUNC_10(Messenger *VAR_0)
{
    if (!VAR_0)
        return;

    uint32_t VAR_1;

    if (VAR_0->tcp_server) {
        FUNC_3(VAR_0->tcp_server);
    }

    FUNC_4(VAR_0->fr_c);
    FUNC_7(VAR_0->onion);
    FUNC_8(VAR_0->onion_a);
    FUNC_9(VAR_0->onion_c);
    FUNC_5(VAR_0->net_crypto);
    FUNC_2(VAR_0->dht);
    FUNC_6(VAR_0->net);

    for (VAR_1 = 0; VAR_1 < VAR_0->numfriends; ++VAR_1) {
        FUNC_0(VAR_0, VAR_1);
    }

    FUNC_1(VAR_0->friendlist);
    FUNC_1(VAR_0);
}
