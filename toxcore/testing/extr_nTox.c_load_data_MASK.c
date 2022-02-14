
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct Tox_Options {size_t savedata_length; int * savedata_data; int savedata_type; } ;
typedef int Tox ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int ) ;
 size_t FUNC_3 (int *,int,size_t,int *) ;
 int FUNC_4 (int *,int ,int ) ;
 size_t FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 int VAR_3 ;
 int * FUNC_8 (struct Tox_Options*,int *) ;
 int FUNC_9 (struct Tox_Options*) ;

__attribute__((used)) static Tox *FUNC_10()
{
    FILE *VAR_4 = FUNC_1(VAR_2, "r");

    if (VAR_4) {
        FUNC_4(VAR_4, 0, VAR_0);
        size_t VAR_5 = FUNC_5(VAR_4);
        FUNC_7(VAR_4);

        uint8_t VAR_6[VAR_5];

        if (FUNC_3(VAR_6, sizeof(uint8_t), VAR_5, VAR_4) != VAR_5) {
            FUNC_2("[!] could not read data file!\n", VAR_3);
            FUNC_0(VAR_4);
            return 0;
        }

        struct Tox_Options VAR_7;

        FUNC_9(&VAR_7);

        VAR_7.savedata_type = VAR_1;

        VAR_7.savedata_data = VAR_6;

        VAR_7.savedata_length = VAR_5;

        Tox *VAR_8 = FUNC_8(&VAR_7, ((void*)0));

        if (FUNC_0(VAR_4) < 0) {
            FUNC_6("[!] fclose failed");


        }

        return VAR_8;
    }

    return FUNC_8(((void*)0), ((void*)0));
}
