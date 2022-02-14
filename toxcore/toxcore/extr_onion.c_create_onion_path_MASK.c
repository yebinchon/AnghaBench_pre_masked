
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int * self_public_key; int * self_secret_key; } ;
struct TYPE_8__ {int * public_key; int ip_port; } ;
struct TYPE_7__ {int node_public_key3; int node_public_key2; int node_public_key1; int ip_port3; int ip_port2; int ip_port1; int public_key3; int shared_key3; int public_key2; int shared_key2; int public_key1; int shared_key1; } ;
typedef TYPE_1__ Onion_Path ;
typedef TYPE_2__ Node_format ;
typedef TYPE_3__ DHT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int ,int *,int) ;

int FUNC_3(const DHT *VAR_2, Onion_Path *VAR_3, const Node_format *VAR_4)
{
    if (!VAR_3 || !VAR_4)
        return -1;

    FUNC_1(VAR_4[0].public_key, VAR_2->self_secret_key, VAR_3->shared_key1);
    FUNC_2(VAR_3->public_key1, VAR_2->self_public_key, VAR_0);

    uint8_t VAR_5[VAR_0];
    uint8_t VAR_6[VAR_1];

    FUNC_0(VAR_5, VAR_6);
    FUNC_1(VAR_4[1].public_key, VAR_6, VAR_3->shared_key2);
    FUNC_2(VAR_3->public_key2, VAR_5, VAR_0);

    FUNC_0(VAR_5, VAR_6);
    FUNC_1(VAR_4[2].public_key, VAR_6, VAR_3->shared_key3);
    FUNC_2(VAR_3->public_key3, VAR_5, VAR_0);

    VAR_3->ip_port1 = VAR_4[0].ip_port;
    VAR_3->ip_port2 = VAR_4[1].ip_port;
    VAR_3->ip_port3 = VAR_4[2].ip_port;

    FUNC_2(VAR_3->node_public_key1, VAR_4[0].public_key, VAR_0);
    FUNC_2(VAR_3->node_public_key2, VAR_4[1].public_key, VAR_0);
    FUNC_2(VAR_3->node_public_key3, VAR_4[2].public_key, VAR_0);

    return 0;
}
