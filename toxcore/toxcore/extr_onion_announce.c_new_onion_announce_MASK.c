
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int net; } ;
struct TYPE_7__ {int net; int secret_bytes; TYPE_2__* dht; } ;
typedef TYPE_1__ Onion_Announce ;
typedef TYPE_2__ DHT ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int *,TYPE_1__*) ;
 int FUNC_2 (int ) ;

Onion_Announce *FUNC_3(DHT *VAR_4)
{
    if (VAR_4 == ((void*)0))
        return ((void*)0);

    Onion_Announce *VAR_5 = FUNC_0(1, sizeof(Onion_Announce));

    if (VAR_5 == ((void*)0))
        return ((void*)0);

    VAR_5->dht = VAR_4;
    VAR_5->net = VAR_4->net;
    FUNC_2(VAR_5->secret_bytes);

    FUNC_1(VAR_5->net, VAR_0, &VAR_2, VAR_5);
    FUNC_1(VAR_5->net, VAR_1, &VAR_3, VAR_5);

    return VAR_5;
}
