
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int std_error; int std_output; int std_input; scalar_t__ tty_vt_disallocate; scalar_t__ tty_vhangup; scalar_t__ tty_reset; } ;
typedef TYPE_1__ ExecContext ;


 int FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(const ExecContext *VAR_0) {
        FUNC_0(VAR_0);

        return VAR_0->tty_reset ||
                VAR_0->tty_vhangup ||
                VAR_0->tty_vt_disallocate ||
                FUNC_1(VAR_0->std_input) ||
                FUNC_2(VAR_0->std_output) ||
                FUNC_2(VAR_0->std_error);
}
