
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 char* FUNC_0 (int) ;
 char* FUNC_1 (char*,int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;

char *FUNC_4(char *VAR_1, size_t VAR_2) {
    int VAR_3 = 100;
    char *VAR_4 = FUNC_0(VAR_3);
    int VAR_5 = 3;
    int VAR_6 = 0;
    char *VAR_7;
    size_t VAR_8;

    FUNC_2(VAR_4, "\\.(");

    for (VAR_8 = 0; VAR_8 < VAR_2; ++VAR_8) {
        VAR_7 = VAR_1 + VAR_8 * VAR_0;
        int VAR_9 = FUNC_3(VAR_7);
        while (VAR_5 + VAR_9 + 3 + VAR_6 > VAR_3) {
            VAR_3 *= 2;
            VAR_4 = FUNC_1(VAR_4, VAR_3);
        }
        if (VAR_6) {
            VAR_4[VAR_5++] = '|';
        } else {
            VAR_6 = 1;
        }
        FUNC_2(VAR_4 + VAR_5, VAR_7);
        VAR_5 += VAR_9;
    }

    VAR_4[VAR_5++] = ')';
    VAR_4[VAR_5++] = '$';
    VAR_4[VAR_5++] = 0;
    return VAR_4;
}
