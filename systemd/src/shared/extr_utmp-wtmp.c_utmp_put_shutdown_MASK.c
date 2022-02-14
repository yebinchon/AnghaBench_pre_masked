
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utmpx {int ut_user; int ut_type; } ;


 int VAR_0 ;
 int FUNC_0 (struct utmpx*,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct utmpx*) ;

int FUNC_3(void) {
        struct utmpx VAR_1 = {};

        FUNC_0(&VAR_1, 0);

        VAR_1.ut_type = VAR_0;
        FUNC_1(VAR_1.ut_user, "shutdown", sizeof(VAR_1.ut_user));

        return FUNC_2(&VAR_1);
}
