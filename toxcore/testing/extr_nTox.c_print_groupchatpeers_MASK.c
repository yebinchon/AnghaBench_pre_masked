
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint16_t ;
typedef int Tox ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,size_t) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 size_t FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char*) ;
 size_t FUNC_5 (char*) ;
 int FUNC_6 (int *,int,int **,size_t*,int) ;
 int FUNC_7 (int *,int) ;

void FUNC_8(Tox *VAR_2, int VAR_3)
{
    int VAR_4 = FUNC_7(VAR_2, VAR_3);

    if (VAR_4 < 0)
        return;

    if (!VAR_4) {
        FUNC_1("[g]+ no peers left in group.");
        return;
    }

    uint8_t VAR_5[VAR_4][VAR_1];
    uint16_t VAR_6[VAR_4];
    FUNC_6(VAR_2, VAR_3, VAR_5, VAR_6, VAR_4);
    int VAR_7;
    char VAR_8[16];
    char VAR_9[] = "[g]+ ";
    size_t VAR_10 = FUNC_5(VAR_9);
    char VAR_11[VAR_0];
    FUNC_4(VAR_11, VAR_9);
    size_t VAR_12 = VAR_10;

    for (VAR_7 = 0; VAR_7 < VAR_4; ++VAR_7) {
        size_t VAR_13 = VAR_6[VAR_7];
        size_t VAR_14 = FUNC_3(VAR_8, "%i: ", VAR_7);

        if (VAR_14 + VAR_13 + VAR_12 + 3 >= VAR_0) {
            FUNC_2(VAR_11, 1);

            FUNC_4(VAR_11, VAR_9);
            VAR_12 = VAR_10;
        }

        FUNC_4(VAR_11 + VAR_12, VAR_8);
        VAR_12 += VAR_14;
        FUNC_0(VAR_11 + VAR_12, (char *)VAR_5[VAR_7], VAR_13);
        VAR_12 += VAR_13;

        if (VAR_7 < VAR_4 - 1) {
            FUNC_4(VAR_11 + VAR_12, "|");
            VAR_12++;
        }
    }

    FUNC_2(VAR_11, 1);
}
