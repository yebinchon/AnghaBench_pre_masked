
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utmpx {int ut_pid; int ut_user; int ut_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct utmpx*,int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int*,int *) ;
 int FUNC_4 (struct utmpx*) ;

int FUNC_5(int VAR_2, int VAR_3) {
        struct utmpx VAR_4 = {};
        int VAR_5;

        FUNC_0(VAR_2 > 0);

        if (VAR_3 <= 0) {


                VAR_5 = FUNC_3(&VAR_3, ((void*)0));
                if (VAR_5 < 0) {
                        if (VAR_5 != -VAR_0)
                                return VAR_5;

                        VAR_3 = 0;
                }
        }

        if (VAR_3 == VAR_2)
                return 0;

        FUNC_1(&VAR_4, 0);

        VAR_4.ut_type = VAR_1;
        VAR_4.ut_pid = (VAR_2 & 0xFF) | ((VAR_3 & 0xFF) << 8);
        FUNC_2(VAR_4.ut_user, "runlevel", sizeof(VAR_4.ut_user));

        return FUNC_4(&VAR_4);
}
