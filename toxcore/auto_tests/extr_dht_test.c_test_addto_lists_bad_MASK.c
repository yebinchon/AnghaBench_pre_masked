
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int public_key ;
struct TYPE_11__ {int assoc4; int assoc6; int public_key; } ;
struct TYPE_9__ {scalar_t__ family; } ;
struct TYPE_10__ {int port; TYPE_1__ ip; } ;
typedef TYPE_2__ IP_Port ;
typedef int DHT ;
typedef TYPE_3__ Client_data ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,TYPE_2__,int*) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int,int*) ;
 int VAR_1 ;
 int FUNC_3 (int*,int ) ;
 int FUNC_4 (TYPE_3__*,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int*,int) ;

void FUNC_8(DHT *VAR_2,
                          Client_data *VAR_3,
                          uint32_t VAR_4,
                          IP_Port *VAR_5)
{

    int VAR_6, VAR_7, VAR_8, VAR_9;
    uint8_t VAR_10[VAR_1], VAR_11[VAR_1], VAR_12[VAR_1],
            VAR_13[VAR_1];
    uint8_t VAR_14 = VAR_5->ip.family == VAR_0 ? 1 : 0;

    FUNC_7(VAR_10, sizeof(VAR_10));
    FUNC_4(VAR_3, VAR_4, VAR_14);

    VAR_7 = FUNC_6() % (VAR_4 / 3);
    VAR_8 = FUNC_6() % (VAR_4 / 3) + VAR_4 / 3;
    VAR_9 = FUNC_6() % (VAR_4 / 3) + 2 * VAR_4 / 3;
    FUNC_1(!(VAR_7 == VAR_8 || VAR_7 == VAR_9 || VAR_8 == VAR_9), "Wrong test indices are chosen");

    FUNC_3((uint8_t *)&VAR_11, VAR_3[VAR_7].public_key);
    FUNC_3((uint8_t *)&VAR_12, VAR_3[VAR_8].public_key);
    FUNC_3((uint8_t *)&VAR_13, VAR_3[VAR_9].public_key);


    if (VAR_14) {
        FUNC_5(&VAR_3[VAR_7].assoc6);
        FUNC_5(&VAR_3[VAR_8].assoc6);
        FUNC_5(&VAR_3[VAR_9].assoc6);
    } else {
        FUNC_5(&VAR_3[VAR_7].assoc4);
        FUNC_5(&VAR_3[VAR_8].assoc4);
        FUNC_5(&VAR_3[VAR_9].assoc4);
    }

    VAR_5->port += 1;
    VAR_6 = FUNC_0(VAR_2, *VAR_5, VAR_10);
    FUNC_1(VAR_6 >= 1, "Wrong number of added clients");

    FUNC_1(FUNC_2(VAR_3, VAR_4, VAR_10) >= 0, "Client id is not in the list");
    FUNC_1(FUNC_2(VAR_3, VAR_4, VAR_12) >= 0, "Wrong bad client removed");
    FUNC_1(FUNC_2(VAR_3, VAR_4, VAR_13) >= 0, "Wrong bad client removed");
}
