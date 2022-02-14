
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int public_key; int ip_port; } ;
struct TYPE_5__ {int node_public_key3; int node_public_key2; int node_public_key1; int ip_port3; int ip_port2; int ip_port1; } ;
typedef TYPE_1__ Onion_Path ;
typedef TYPE_2__ Node_format ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;

int FUNC_1(Node_format *VAR_2, unsigned int VAR_3, const Onion_Path *VAR_4)
{
    if (VAR_3 < VAR_0)
        return -1;

    VAR_2[0].ip_port = VAR_4->ip_port1;
    VAR_2[1].ip_port = VAR_4->ip_port2;
    VAR_2[2].ip_port = VAR_4->ip_port3;

    FUNC_0(VAR_2[0].public_key, VAR_4->node_public_key1, VAR_1);
    FUNC_0(VAR_2[1].public_key, VAR_4->node_public_key2, VAR_1);
    FUNC_0(VAR_2[2].public_key, VAR_4->node_public_key3, VAR_1);
    return 0;
}
