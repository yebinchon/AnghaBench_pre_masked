
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int net; } ;
struct TYPE_7__ {int net; int timestamp; int secret_symmetric_key; TYPE_2__* dht; } ;
typedef TYPE_1__ Onion ;
typedef TYPE_2__ DHT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,int ,int *,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;

Onion *FUNC_4(DHT *VAR_12)
{
    if (VAR_12 == ((void*)0))
        return ((void*)0);

    Onion *VAR_13 = FUNC_0(1, sizeof(Onion));

    if (VAR_13 == ((void*)0))
        return ((void*)0);

    VAR_13->dht = VAR_12;
    VAR_13->net = VAR_12->net;
    FUNC_2(VAR_13->secret_symmetric_key);
    VAR_13->timestamp = FUNC_3();

    FUNC_1(VAR_13->net, VAR_5, &VAR_11, VAR_13);
    FUNC_1(VAR_13->net, VAR_3, &VAR_9, VAR_13);
    FUNC_1(VAR_13->net, VAR_4, &VAR_10, VAR_13);

    FUNC_1(VAR_13->net, VAR_2, &VAR_8, VAR_13);
    FUNC_1(VAR_13->net, VAR_1, &VAR_7, VAR_13);
    FUNC_1(VAR_13->net, VAR_0, &VAR_6, VAR_13);

    return VAR_13;
}
