
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int Tox ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int ) ;
 size_t FUNC_3 (int *,int,size_t,int *) ;
 int FUNC_4 (char*) ;
 int VAR_1 ;
 int FUNC_5 (int *,int *) ;
 size_t FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(Tox *VAR_2)
{
    FILE *VAR_3 = FUNC_1(VAR_0, "w");

    if (!VAR_3) {
        FUNC_4("[!] load_key");
        return 0;
    }

    int VAR_4 = 1;
    size_t VAR_5 = FUNC_6(VAR_2);
    uint8_t VAR_6[VAR_5];
    FUNC_5(VAR_2, VAR_6);

    if (FUNC_3(VAR_6, sizeof(uint8_t), VAR_5, VAR_3) != VAR_5) {
        FUNC_2("[!] could not write data file (1)!", VAR_1);
        VAR_4 = 0;
    }

    if (FUNC_0(VAR_3) < 0) {
        FUNC_4("[!] could not write data file (2)");
        VAR_4 = 0;
    }

    return VAR_4;
}
