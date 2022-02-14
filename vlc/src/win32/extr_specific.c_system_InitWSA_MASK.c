
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wVersion; } ;
typedef TYPE_1__ WSADATA ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(int VAR_0, int VAR_1)
{
    WSADATA VAR_2;

    if (FUNC_4(FUNC_2(VAR_0, VAR_1), &VAR_2) == 0)
    {
        if (FUNC_1(VAR_2.wVersion) == 2 && FUNC_0(VAR_2.wVersion) == 2)
            return 0;

        FUNC_3( );
    }
    return -1;
}
