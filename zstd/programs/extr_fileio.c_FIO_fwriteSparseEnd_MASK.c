
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sparseFileSupport; scalar_t__ testMode; } ;
typedef TYPE_1__ FIO_prefs_t ;
typedef int FILE ;


 int FUNC_0 (int,char*,...) ;
 scalar_t__ FUNC_1 (int *,unsigned int,int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (char const*,int,int,int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(const FIO_prefs_t* const VAR_2, FILE* VAR_3, unsigned VAR_4)
{
    if (VAR_2->testMode) FUNC_2(VAR_4 == 0);
    if (VAR_4>0) {
        FUNC_2(VAR_2->sparseFileSupport > 0);
        (void)VAR_2;
        if (FUNC_1(VAR_3, VAR_4-1, VAR_0) != 0)
            FUNC_0(69, "Final skip error (sparse file support)");


        { const char VAR_5[1] = { 0 };
            if (FUNC_3(VAR_5, 1, 1, VAR_3) != 1)
                FUNC_0(69, "Write error : cannot write last zero : %s", FUNC_4(VAR_1));
    } }
}
