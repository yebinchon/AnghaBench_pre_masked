
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (char*,size_t) ;

char *FUNC_5(FILE *VAR_2, size_t *VAR_3) {
    char *VAR_4 = ((void*)0);
    int VAR_5, VAR_6 = 0, VAR_7 = 0;

    FUNC_0(VAR_2);
    while ((VAR_5 = FUNC_3(VAR_2)) != VAR_1) {
        if (!VAR_4 || VAR_7 >= VAR_6) {
            size_t VAR_8;
            char *VAR_9;
            VAR_8 = VAR_6 + VAR_0;
            if (!(VAR_9 = FUNC_4(VAR_4, VAR_8))) {
                FUNC_2(VAR_2);
                if (VAR_4)
                    FUNC_1(VAR_4);
                return ((void*)0);
            }
            VAR_4 = VAR_9;
            VAR_6 = VAR_8;
        }
        VAR_4[VAR_7++] = VAR_5;
        if (VAR_5 == '\n') {
            break;
        }
    }
    FUNC_2(VAR_2);
    *VAR_3 = VAR_7;
    return VAR_4;
}
