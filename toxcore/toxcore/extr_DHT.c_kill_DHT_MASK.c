
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* loaded_nodes_list; struct TYPE_5__* friends_list; int ping; int dht_harden_ping_array; int dht_ping_array; int net; int assoc; } ;
typedef TYPE_1__ DHT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int *,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int *,int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(DHT *VAR_4)
{



    FUNC_4(VAR_4->net, VAR_2, ((void*)0), ((void*)0));
    FUNC_4(VAR_4->net, VAR_3, ((void*)0), ((void*)0));
    FUNC_0(VAR_4, VAR_1, ((void*)0), ((void*)0));
    FUNC_0(VAR_4, VAR_0, ((void*)0), ((void*)0));
    FUNC_5(&VAR_4->dht_ping_array);
    FUNC_5(&VAR_4->dht_harden_ping_array);
    FUNC_3(VAR_4->ping);
    FUNC_1(VAR_4->friends_list);
    FUNC_1(VAR_4->loaded_nodes_list);
    FUNC_1(VAR_4);
}
