
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ tty_vt_disallocate; scalar_t__ tty_reset; scalar_t__ tty_vhangup; } ;
struct TYPE_7__ {scalar_t__ stdin_fd; } ;
typedef TYPE_1__ ExecParameters ;
typedef TYPE_2__ ExecContext ;


 int FUNC_0 (TYPE_2__ const*) ;
 char* FUNC_1 (TYPE_2__ const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static void FUNC_7(const ExecContext *VAR_0, const ExecParameters *VAR_1) {
        const char *VAR_2;

        FUNC_0(VAR_0);

        VAR_2 = FUNC_1(VAR_0);

        if (VAR_0->tty_vhangup) {
                if (VAR_1 && VAR_1->stdin_fd >= 0)
                        (void) FUNC_5(VAR_1->stdin_fd);
                else if (VAR_2)
                        (void) FUNC_4(VAR_2);
        }

        if (VAR_0->tty_reset) {
                if (VAR_1 && VAR_1->stdin_fd >= 0)
                        (void) FUNC_3(VAR_1->stdin_fd, 1);
                else if (VAR_2)
                        (void) FUNC_2(VAR_2);
        }

        if (VAR_0->tty_vt_disallocate && VAR_2)
                (void) FUNC_6(VAR_2);
}
