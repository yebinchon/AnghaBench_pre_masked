
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct instance {scalar_t__ pid_filename; int pid; int log_filename; int log_level; } ;
typedef scalar_t__ rstatus_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct instance*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct instance*) ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static rstatus_t
FUNC_6(struct instance *VAR_2)
{
    rstatus_t VAR_3;

    VAR_3 = FUNC_1(VAR_2->log_level, VAR_2->log_filename);
    if (VAR_3 != VAR_0) {
        return VAR_3;
    }

    if (VAR_1) {
        VAR_3 = FUNC_3(1);
        if (VAR_3 != VAR_0) {
            return VAR_3;
        }
    }

    VAR_2->pid = FUNC_0();

    VAR_3 = FUNC_5();
    if (VAR_3 != VAR_0) {
        return VAR_3;
    }

    if (VAR_2->pid_filename) {
        VAR_3 = FUNC_2(VAR_2);
        if (VAR_3 != VAR_0) {
            return VAR_3;
        }
    }

    FUNC_4(VAR_2);

    return VAR_0;
}
