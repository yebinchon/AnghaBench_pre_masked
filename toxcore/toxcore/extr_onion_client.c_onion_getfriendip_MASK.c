
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int dht; } ;
typedef TYPE_1__ Onion_Client ;
typedef int IP_Port ;


 int FUNC_0 (int ,int *,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__ const*,int,int *) ;

int FUNC_2(const Onion_Client *VAR_1, int VAR_2, IP_Port *VAR_3)
{
    uint8_t VAR_4[VAR_0];

    if (FUNC_1(VAR_1, VAR_2, VAR_4) == 0)
        return -1;

    return FUNC_0(VAR_1->dht, VAR_4, VAR_3);
}
