
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int data ;
struct TYPE_6__ {TYPE_1__* dht; } ;
struct TYPE_5__ {int net; } ;
typedef TYPE_2__ Net_Crypto ;
typedef int IP_Port ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int *,int *,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int *,int *,int *,int const*,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_4, IP_Port VAR_5, const uint8_t *VAR_6, uint16_t VAR_7)
{
    Net_Crypto *VAR_8 = VAR_4;
    uint8_t VAR_9[VAR_0];
    uint8_t VAR_10[VAR_2];
    uint8_t VAR_11[VAR_3];

    if (FUNC_1(VAR_8, VAR_9, VAR_10, VAR_11, VAR_6, VAR_7) != 0)
        return 1;

    uint8_t VAR_12[VAR_1];

    if (FUNC_0(VAR_8, VAR_12, VAR_9, VAR_10, VAR_11) != sizeof(VAR_12))
        return 1;

    if ((uint32_t)FUNC_2(VAR_8->dht->net, VAR_5, VAR_12, sizeof(VAR_12)) != sizeof(VAR_12))
        return 1;

    return 0;
}
