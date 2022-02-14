
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int path; } ;
struct TYPE_7__ {TYPE_5__* pid_file_pathspec; } ;
typedef TYPE_1__ Service ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,int,char*,int ) ;
 int FUNC_3 (TYPE_5__*,int ) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(Service *VAR_1) {
        int VAR_2;

        FUNC_1(FUNC_0(VAR_1), "Setting watch for PID file %s", VAR_1->pid_file_pathspec->path);

        VAR_2 = FUNC_3(VAR_1->pid_file_pathspec, VAR_0);
        if (VAR_2 < 0)
                goto fail;


        FUNC_1(FUNC_0(VAR_1), "Trying to read PID file %s in case it changed", VAR_1->pid_file_pathspec->path);
        FUNC_4(VAR_1);

        return 0;
fail:
        FUNC_2(FUNC_0(VAR_1), VAR_2, "Failed to set a watch for PID file %s: %m", VAR_1->pid_file_pathspec->path);
        FUNC_5(VAR_1);
        return VAR_2;
}
