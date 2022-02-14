
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int Unit ;
struct TYPE_7__ {struct TYPE_7__* command_prev; } ;
struct TYPE_6__ {TYPE_2__** exec_command; } ;
typedef size_t ServiceExecCommand ;
typedef TYPE_1__ Service ;
typedef TYPE_2__ ExecCommand ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static unsigned FUNC_2(Unit *VAR_0, ServiceExecCommand VAR_1, ExecCommand *VAR_2) {
        Service *VAR_3 = FUNC_0(VAR_0);
        unsigned VAR_4 = 0;
        ExecCommand *VAR_5, *VAR_6;

        FUNC_1(VAR_3);

        VAR_5 = VAR_3->exec_command[VAR_1];


        for (VAR_6 = VAR_2; VAR_6 != VAR_5; VAR_6 = VAR_6->command_prev)
                VAR_4++;

        return VAR_4;
}
