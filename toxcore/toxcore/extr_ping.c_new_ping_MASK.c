
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int net; } ;
struct TYPE_8__ {TYPE_2__* dht; int ping_array; } ;
typedef TYPE_1__ PING ;
typedef TYPE_2__ DHT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int *,TYPE_2__*) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;

PING *FUNC_4(DHT *VAR_6)
{
    PING *VAR_7 = FUNC_0(1, sizeof(PING));

    if (VAR_7 == ((void*)0))
        return ((void*)0);

    if (FUNC_3(&VAR_7->ping_array, VAR_2, VAR_3) != 0) {
        FUNC_1(VAR_7);
        return ((void*)0);
    }

    VAR_7->dht = VAR_6;
    FUNC_2(VAR_7->dht->net, VAR_0, &VAR_4, VAR_6);
    FUNC_2(VAR_7->dht->net, VAR_1, &VAR_5, VAR_6);

    return VAR_7;
}
