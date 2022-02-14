
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int * self_secret_key; int * self_public_key; } ;
typedef int FILE ;
typedef TYPE_1__ DHT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 size_t FUNC_2 (int *,int,int const,int *) ;
 size_t FUNC_3 (int *,int,int const,int *) ;
 int FUNC_4 (int *,int *,int) ;

int FUNC_5(DHT *VAR_2, char *VAR_3)
{
    const uint32_t VAR_4 = VAR_0 + VAR_1;
    uint8_t VAR_5[VAR_4];
    FILE *VAR_6;


    VAR_6 = FUNC_1(VAR_3, "r");

    if (VAR_6 != ((void*)0)) {
        const size_t VAR_7 = FUNC_2(VAR_5, sizeof(uint8_t), VAR_4, VAR_6);

        if (VAR_7 != VAR_4) {
            FUNC_0(VAR_6);
            return 0;
        }

        FUNC_4(VAR_2->self_public_key, VAR_5, VAR_0);
        FUNC_4(VAR_2->self_secret_key, VAR_5 + VAR_0, VAR_1);
    } else {

        FUNC_4(VAR_5, VAR_2->self_public_key, VAR_0);
        FUNC_4(VAR_5 + VAR_0, VAR_2->self_secret_key, VAR_1);

        VAR_6 = FUNC_1(VAR_3, "w");

        if (!VAR_6)
            return 0;

        const size_t VAR_8 = FUNC_3(VAR_5, sizeof(uint8_t), VAR_4, VAR_6);

        if (VAR_8 != VAR_4) {
            FUNC_0(VAR_6);
            return 0;
        }
    }

    FUNC_0(VAR_6);

    return 1;
}
