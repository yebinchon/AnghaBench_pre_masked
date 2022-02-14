
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* dht; } ;
struct TYPE_10__ {int * c; } ;
struct TYPE_9__ {int * net; } ;
struct TYPE_8__ {TYPE_5__* onion; int onion_a; TYPE_4__* onion_c; } ;
typedef TYPE_1__ Onions ;
typedef int Networking_Core ;
typedef int Net_Crypto ;
typedef TYPE_2__ DHT ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_4__*) ;

void FUNC_7(Onions *VAR_0)
{
    Networking_Core *VAR_1 = VAR_0->onion->dht->net;
    DHT *VAR_2 = VAR_0->onion->dht;
    Net_Crypto *VAR_3 = VAR_0->onion_c->c;
    FUNC_6(VAR_0->onion_c);
    FUNC_5(VAR_0->onion_a);
    FUNC_4(VAR_0->onion);
    FUNC_2(VAR_3);
    FUNC_1(VAR_2);
    FUNC_3(VAR_1);
    FUNC_0(VAR_0);
}
