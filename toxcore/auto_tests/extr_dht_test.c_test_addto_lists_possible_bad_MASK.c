
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
 int FUNC_3 (int const*,int*,int*) ;
 int FUNC_4 (int*,int ) ;
 int FUNC_5 (TYPE_3__*,int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int*,int) ;

void FUNC_9(DHT *VAR_2,
                                   Client_data *VAR_3,
                                   uint32_t VAR_4,
                                   IP_Port *VAR_5,
                                   const uint8_t *VAR_6)
{

    int VAR_7, VAR_8, VAR_9, VAR_10;
    uint8_t VAR_11[VAR_1], VAR_12[VAR_1], VAR_13[VAR_1],
            VAR_14[VAR_1];
    uint8_t VAR_15 = VAR_5->ip.family == VAR_0 ? 1 : 0;

    FUNC_8(VAR_11, sizeof(VAR_11));
    FUNC_5(VAR_3, VAR_4, VAR_15);

    VAR_8 = FUNC_7() % (VAR_4 / 3);
    VAR_9 = FUNC_7() % (VAR_4 / 3) + VAR_4 / 3;
    VAR_10 = FUNC_7() % (VAR_4 / 3) + 2 * VAR_4 / 3;
    FUNC_1(!(VAR_8 == VAR_9 || VAR_8 == VAR_10 || VAR_9 == VAR_10), "Wrong test indices are chosen");

    FUNC_4((uint8_t *)&VAR_12, VAR_3[VAR_8].public_key);
    FUNC_4((uint8_t *)&VAR_13, VAR_3[VAR_9].public_key);
    FUNC_4((uint8_t *)&VAR_14, VAR_3[VAR_10].public_key);


    if (VAR_15) {
        FUNC_6(&VAR_3[VAR_8].assoc6);
        FUNC_6(&VAR_3[VAR_9].assoc6);
        FUNC_6(&VAR_3[VAR_10].assoc6);
    } else {
        FUNC_6(&VAR_3[VAR_8].assoc4);
        FUNC_6(&VAR_3[VAR_9].assoc4);
        FUNC_6(&VAR_3[VAR_10].assoc4);
    }

    VAR_5->port += 1;
    VAR_7 = FUNC_0(VAR_2, *VAR_5, VAR_11);
    FUNC_1(VAR_7 >= 1, "Wrong number of added clients");

    FUNC_1(FUNC_2(VAR_3, VAR_4, VAR_11) >= 0, "Client id is not in the list");

    int VAR_16 = FUNC_2(VAR_3, VAR_4, VAR_12) >= 0;
    int VAR_17 = FUNC_2(VAR_3, VAR_4, VAR_13) >= 0;
    int VAR_18 = FUNC_2(VAR_3, VAR_4, VAR_14) >= 0;

    FUNC_1(VAR_16 + VAR_17 + VAR_18 == 2, "Wrong client removed");

    if (!VAR_16) {
        FUNC_1(FUNC_3(VAR_6, VAR_13, VAR_12) == 1,
                      "Id has been removed but is closer to than another one");
        FUNC_1(FUNC_3(VAR_6, VAR_14, VAR_12) == 1,
                      "Id has been removed but is closer to than another one");
    } else if (!VAR_17) {
        FUNC_1(FUNC_3(VAR_6, VAR_12, VAR_13) == 1,
                      "Id has been removed but is closer to than another one");
        FUNC_1(FUNC_3(VAR_6, VAR_14, VAR_13) == 1,
                      "Id has been removed but is closer to than another one");
    } else if (!VAR_18) {
        FUNC_1(FUNC_3(VAR_6, VAR_12, VAR_14) == 1,
                      "Id has been removed but is closer to than another one");
        FUNC_1(FUNC_3(VAR_6, VAR_13, VAR_14) == 1,
                      "Id has been removed but is closer to than another one");
    }
}
