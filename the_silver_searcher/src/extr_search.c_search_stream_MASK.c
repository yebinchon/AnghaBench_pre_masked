
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_2__ {size_t stream_line_num; } ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char**,size_t*,int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char const*,char*,int) ;
 int FUNC_5 (char*,int,char const*) ;

ssize_t FUNC_6(FILE *VAR_1, const char *VAR_2) {
    char *VAR_3 = ((void*)0);
    ssize_t VAR_4 = 0;
    ssize_t VAR_5 = 0;
    size_t VAR_6 = 0;
    size_t VAR_7;

    FUNC_3();

    for (VAR_7 = 1; (VAR_5 = FUNC_1(&VAR_3, &VAR_6, VAR_1)) > 0; VAR_7++) {
        ssize_t VAR_8;
        VAR_0.stream_line_num = VAR_7;
        VAR_8 = FUNC_5(VAR_3, VAR_5, VAR_2);
        if (VAR_8 > 0) {
            if (VAR_4 == -1) {
                VAR_4 = 0;
            }
            VAR_4 += VAR_8;
        } else if (VAR_4 <= 0 && VAR_8 == -1) {
            VAR_4 = -1;
        }
        if (VAR_3[VAR_5 - 1] == '\n') {
            VAR_5--;
        }
        FUNC_4(VAR_2, VAR_3, VAR_5);
    }

    FUNC_0(VAR_3);
    FUNC_2();
    return VAR_4;
}
