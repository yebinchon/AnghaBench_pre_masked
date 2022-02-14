
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int Unit ;
struct TYPE_5__ {scalar_t__ oom_policy; int state; int result; } ;
typedef TYPE_1__ Service ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 (int *) ;


 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (TYPE_1__*,int const,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_4(Unit *VAR_5) {
        Service *VAR_6 = FUNC_0(VAR_5);

        FUNC_1(VAR_5, "Process of control group was killed by the OOM killer.");

        if (VAR_6->oom_policy == VAR_0)
                return;

        switch (VAR_6->state) {

        case 140:
        case 133:
        case 135:
        case 134:
        case 132:
                if (VAR_6->oom_policy == VAR_2)
                        FUNC_2(VAR_6, 129, VAR_3);
                else if (VAR_6->oom_policy == VAR_1)
                        FUNC_2(VAR_6, 130, VAR_3);

                break;

        case 139:
        case 136:
                if (VAR_6->oom_policy == VAR_2)
                        FUNC_3(VAR_6, VAR_3);
                else if (VAR_6->oom_policy == VAR_1)
                        FUNC_2(VAR_6, 130, VAR_3);

                break;

        case 128:
        case 129:
                FUNC_2(VAR_6, 130, VAR_3);
                break;

        case 130:
        case 138:
                if (VAR_6->result == VAR_4)
                        VAR_6->result = VAR_3;
                break;

        case 131:
        case 137:
                FUNC_2(VAR_6, 138, VAR_3);
                break;

        default:
                ;
        }
}
