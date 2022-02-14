
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tty_path; int std_error; int std_output; int std_input; } ;
typedef TYPE_1__ ExecContext ;


 int FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(const ExecContext *VAR_0) {
        FUNC_0(VAR_0);



        if (FUNC_1(VAR_0->std_input))
                return 1;

        if (FUNC_2(VAR_0->std_output))
                return 1;

        if (FUNC_2(VAR_0->std_error))
                return 1;

        return !!VAR_0->tty_path;
}
