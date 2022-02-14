
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int path; } ;
struct TYPE_8__ {TYPE_3__* pid_file_pathspec; } ;
typedef TYPE_1__ Service ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*,int ) ;
 TYPE_3__* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_5(Service *VAR_0) {
        if (!VAR_0->pid_file_pathspec)
                return;

        FUNC_1(FUNC_0(VAR_0), "Stopping watch for PID file %s", VAR_0->pid_file_pathspec->path);
        FUNC_4(VAR_0->pid_file_pathspec);
        FUNC_3(VAR_0->pid_file_pathspec);
        VAR_0->pid_file_pathspec = FUNC_2(VAR_0->pid_file_pathspec);
}
