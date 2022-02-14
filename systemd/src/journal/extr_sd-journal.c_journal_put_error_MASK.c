
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int errors; } ;
typedef TYPE_1__ sd_journal ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int ,char*) ;
 char* FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(sd_journal *VAR_2, int VAR_3, const char *VAR_4) {
        char *VAR_5;
        int VAR_6;
        if (VAR_3 >= 0)
                return VAR_3;

        VAR_6 = FUNC_2(&VAR_2->errors, ((void*)0));
        if (VAR_6 < 0)
                return VAR_6;

        if (VAR_4) {
                VAR_5 = FUNC_4(VAR_4);
                if (!VAR_5)
                        return -VAR_1;
        } else
                VAR_5 = ((void*)0);

        VAR_6 = FUNC_3(VAR_2->errors, FUNC_0(VAR_3), VAR_5);
        if (VAR_6 < 0) {
                FUNC_1(VAR_5);

                if (VAR_6 == -VAR_0)
                        return 0;

                return VAR_6;
        }

        return 0;
}
