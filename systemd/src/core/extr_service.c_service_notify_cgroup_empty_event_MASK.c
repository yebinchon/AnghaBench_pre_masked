
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int Unit ;
struct TYPE_10__ {int state; int pid_file_pathspec; int type; } ;
typedef TYPE_1__ Service ;


 TYPE_1__* FUNC_0 (int *) ;
 int VAR_0 ;


 int VAR_1 ;







 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_11(Unit *VAR_4) {
        Service *VAR_5 = FUNC_0(VAR_4);

        FUNC_1(VAR_4);

        FUNC_3(VAR_4, "Control group is empty.");

        switch (VAR_5->state) {







        case 133:
                if (VAR_5->type == VAR_1 &&
                    FUNC_5(VAR_5) == 0 &&
                    FUNC_2(VAR_5) == 0) {

                        FUNC_9(VAR_5, VAR_0);
                        break;
                }

                VAR_3;
        case 132:
                if (VAR_5->pid_file_pathspec &&
                    FUNC_5(VAR_5) == 0 &&
                    FUNC_2(VAR_5) == 0) {


                        FUNC_4(VAR_4, "Daemon never wrote its PID file. Failing.");

                        FUNC_10(VAR_5);
                        if (VAR_5->state == 133)
                                FUNC_9(VAR_5, VAR_0);
                        else
                                FUNC_8(VAR_5, VAR_0);
                }
                break;

        case 134:

                FUNC_7(VAR_5, VAR_2);
                break;

        case 128:
        case 129:
        case 130:

                if (FUNC_5(VAR_5) <= 0 && FUNC_2(VAR_5) <= 0)
                        FUNC_9(VAR_5, VAR_2);

                break;

        case 131:
        case 135:
        case 136:
                if (FUNC_5(VAR_5) <= 0 && FUNC_2(VAR_5) <= 0)
                        FUNC_6(VAR_5, VAR_2, 1);

                break;

        default:
                ;
        }
}
