
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* parameter; int type; } ;
typedef TYPE_1__ Condition ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

int FUNC_1(void) {
        static int VAR_1 = -1;
        int VAR_2;

        if (VAR_1 < 0) {
                Condition VAR_3 = {
                        .type = VAR_0,
                        .parameter = (char *) ">= 4.5"
                };
                VAR_2 = FUNC_0(&VAR_3);
                if (VAR_2 < 0)
                        return VAR_2;

                VAR_1 = VAR_2;
        }
        return VAR_1;
}
