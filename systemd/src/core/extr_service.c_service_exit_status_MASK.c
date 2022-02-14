
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int Unit ;
struct TYPE_4__ {scalar_t__ pid; scalar_t__ code; int status; int exit_timestamp; } ;
struct TYPE_5__ {TYPE_1__ main_exec_status; } ;
typedef TYPE_2__ Service ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(Unit *VAR_3) {
        Service *VAR_4 = FUNC_0(VAR_3);

        FUNC_1(VAR_3);

        if (VAR_4->main_exec_status.pid <= 0 ||
            !FUNC_2(&VAR_4->main_exec_status.exit_timestamp))
                return -VAR_2;

        if (VAR_4->main_exec_status.code != VAR_0)
                return -VAR_1;

        return VAR_4->main_exec_status.status;
}
