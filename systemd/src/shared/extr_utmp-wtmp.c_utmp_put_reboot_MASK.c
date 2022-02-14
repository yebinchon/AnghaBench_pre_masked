
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
struct utmpx {int ut_user; int ut_type; } ;


 int VAR_0 ;
 int FUNC_0 (struct utmpx*,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct utmpx*) ;

int FUNC_3(usec_t VAR_1) {
        struct utmpx VAR_2 = {};

        FUNC_0(&VAR_2, VAR_1);

        VAR_2.ut_type = VAR_0;
        FUNC_1(VAR_2.ut_user, "reboot", sizeof(VAR_2.ut_user));

        return FUNC_2(&VAR_2);
}
