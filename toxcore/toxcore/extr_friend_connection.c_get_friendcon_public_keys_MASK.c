
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int dht_temp_pk; int real_public_key; } ;
typedef int Friend_Connections ;
typedef TYPE_1__ Friend_Conn ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int ) ;

int FUNC_2(uint8_t *VAR_1, uint8_t *VAR_2, Friend_Connections *VAR_3, int VAR_4)
{
    Friend_Conn *VAR_5 = FUNC_0(VAR_3, VAR_4);

    if (!VAR_5)
        return -1;

    if (VAR_1)
        FUNC_1(VAR_1, VAR_5->real_public_key, VAR_0);

    if (VAR_2)
        FUNC_1(VAR_2, VAR_5->dht_temp_pk, VAR_0);

    return 0;
}
