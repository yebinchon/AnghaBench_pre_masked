
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* type_argument; int lower; struct TYPE_5__* rm_rf_tmpdir; struct TYPE_5__* work_dir; struct TYPE_5__* options; struct TYPE_5__* destination; struct TYPE_5__* source; } ;
typedef TYPE_1__ CustomMount ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ) ;

void FUNC_3(CustomMount *VAR_2, size_t VAR_3) {
        size_t VAR_4;

        for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
                CustomMount *VAR_5 = VAR_2 + VAR_4;

                FUNC_0(VAR_5->source);
                FUNC_0(VAR_5->destination);
                FUNC_0(VAR_5->options);

                if (VAR_5->work_dir) {
                        (void) FUNC_1(VAR_5->work_dir, VAR_1|VAR_0);
                        FUNC_0(VAR_5->work_dir);
                }

                if (VAR_5->rm_rf_tmpdir) {
                        (void) FUNC_1(VAR_5->rm_rf_tmpdir, VAR_1|VAR_0);
                        FUNC_0(VAR_5->rm_rf_tmpdir);
                }

                FUNC_2(VAR_5->lower);
                FUNC_0(VAR_5->type_argument);
        }

        FUNC_0(VAR_2);
}
