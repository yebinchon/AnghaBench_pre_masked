
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int dht; int net_crypto; TYPE_1__* onion_c; } ;
struct TYPE_7__ {int c; int dht; } ;
typedef TYPE_1__ Onion_Client ;
typedef TYPE_2__ Friend_Connections ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int,int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *,TYPE_2__*) ;

Friend_Connections *FUNC_3(Onion_Client *VAR_1)
{
    if (!VAR_1)
        return ((void*)0);

    Friend_Connections *VAR_2 = FUNC_1(1, sizeof(Friend_Connections));

    if (VAR_2 == ((void*)0))
        return ((void*)0);

    VAR_2->dht = VAR_1->dht;
    VAR_2->net_crypto = VAR_1->c;
    VAR_2->onion_c = VAR_1;

    FUNC_2(VAR_2->net_crypto, &VAR_0, VAR_2);
    FUNC_0(VAR_2->dht);

    return VAR_2;
}
