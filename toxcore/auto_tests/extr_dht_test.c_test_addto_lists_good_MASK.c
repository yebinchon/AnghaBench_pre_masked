
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int public_key ;
struct TYPE_5__ {scalar_t__ family; } ;
struct TYPE_6__ {int port; TYPE_1__ ip; } ;
typedef TYPE_2__ IP_Port ;
typedef int DHT ;
typedef int Client_data ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,TYPE_2__,int*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *,int ,int*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int const*,int *,int ,int*) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int*,int) ;

void FUNC_6(DHT *VAR_2,
                           Client_data *VAR_3,
                           uint32_t VAR_4,
                           IP_Port *VAR_5,
                           const uint8_t *VAR_6)
{
    uint8_t VAR_7[VAR_1];
    uint8_t VAR_8 = VAR_5->ip.family == VAR_0 ? 1 : 0;

    FUNC_4(VAR_3, VAR_4, VAR_8);


    do {
        FUNC_5(VAR_7, sizeof(VAR_7));
    } while (FUNC_3(VAR_6, VAR_3, VAR_4, VAR_7));

    VAR_5->port += 1;
    FUNC_0(VAR_2, *VAR_5, VAR_7);
    FUNC_1(FUNC_2(VAR_3, VAR_4, VAR_7) >= 0, "Good client id is not in the list");


    do {
        FUNC_5(VAR_7, sizeof(VAR_7));
    } while (!FUNC_3(VAR_6, VAR_3, VAR_4, VAR_7));

    VAR_5->port += 1;
    FUNC_0(VAR_2, *VAR_5, VAR_7);
    FUNC_1(FUNC_2(VAR_3, VAR_4, VAR_7) == -1, "Good client id is in the list");
}
