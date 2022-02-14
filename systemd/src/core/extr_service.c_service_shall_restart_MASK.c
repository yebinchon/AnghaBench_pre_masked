
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int status; int code; } ;
struct TYPE_6__ {int restart; int result; TYPE_1__ main_exec_status; int restart_force_status; int restart_prevent_status; scalar_t__ forbid_restart; } ;
typedef TYPE_2__ Service ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;







 int VAR_4 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static bool FUNC_4(Service *VAR_5, const char **VAR_6) {
        FUNC_1(VAR_5);


        if (VAR_5->forbid_restart) {
                *VAR_6 = "manual stop";
                return 0;
        }


        if (FUNC_3(&VAR_5->restart_prevent_status, VAR_5->main_exec_status.code, VAR_5->main_exec_status.status)) {
                *VAR_6 = "prevented by exit status";
                return 0;
        }


        if (FUNC_3(&VAR_5->restart_force_status, VAR_5->main_exec_status.code, VAR_5->main_exec_status.status)) {
                *VAR_6 = "forced by exit status";
                return 1;
        }

        *VAR_6 = "restart setting";
        switch (VAR_5->restart) {

        case 133:
                return 0;

        case 134:
                return 1;

        case 129:
                return VAR_5->result == VAR_4;

        case 130:
                return VAR_5->result != VAR_4;

        case 132:
                return !FUNC_0(VAR_5->result, VAR_4, VAR_1);

        case 128:
                return VAR_5->result == VAR_3;

        case 131:
                return FUNC_0(VAR_5->result, VAR_2, VAR_0);

        default:
                FUNC_2("unknown restart setting");
        }
}
