
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
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 size_t FUNC_3 (int *,int,int const,int *) ;
 int const FUNC_4 (int *,int,int const,int *) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (char*) ;

void FUNC_7(DHT *VAR_2)
{
    const uint32_t VAR_3 = VAR_0 + VAR_1;
    uint8_t VAR_4[VAR_3];

    FILE *VAR_5 = FUNC_2("key", "r");

    if (VAR_5 != ((void*)0)) {


        size_t VAR_6 = FUNC_3(VAR_4, sizeof(uint8_t), VAR_3, VAR_5);

        if (VAR_6 != VAR_3) {
            FUNC_6("Error while reading the key file\nExiting.\n");
            FUNC_0(1);
        }

        FUNC_5(VAR_2->self_public_key, VAR_4, VAR_0);
        FUNC_5(VAR_2->self_secret_key, VAR_4 + VAR_0, VAR_1);
        FUNC_6("Keys loaded successfully.\n");
    } else {
        FUNC_5(VAR_4, VAR_2->self_public_key, VAR_0);
        FUNC_5(VAR_4 + VAR_0, VAR_2->self_secret_key, VAR_1);
        VAR_5 = FUNC_2("key", "w");

        if (VAR_5 == ((void*)0)) {
            FUNC_6("Error opening key file in write mode.\nKeys will not be saved.\n");
            return;
        }

        if (FUNC_4(VAR_4, sizeof(uint8_t), VAR_3, VAR_5) != VAR_3) {
            FUNC_6("Error while writing the key file.\nExiting.\n");
            FUNC_0(1);
        }

        FUNC_6("Keys saved successfully.\n");
    }

    FUNC_1(VAR_5);
}
