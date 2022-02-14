
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wVersion; } ;
typedef TYPE_1__ WSADATA ;
typedef int WORD ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,TYPE_1__*) ;

int FUNC_5(void) {
    WSADATA VAR_0;
    WORD VAR_1 = FUNC_2(2, 0);
    int VAR_2 = FUNC_4(VAR_1, &VAR_0 );
    if (VAR_2 != 0) return 0;
    if ((FUNC_1(VAR_0.wVersion) != 2 || FUNC_0(VAR_0.wVersion) != 0) &&
        (FUNC_1(VAR_0.wVersion) != 1 || FUNC_0(VAR_0.wVersion) != 1)) {
        FUNC_3();
        return 0;
    }
    return 1;
}
