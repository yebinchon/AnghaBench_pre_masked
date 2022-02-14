
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int netns_storage_socket; struct TYPE_13__* var_tmp_dir; struct TYPE_13__* tmp_dir; struct TYPE_13__* id; TYPE_1__* manager; } ;
struct TYPE_12__ {int exec_runtime_by_id; } ;
typedef TYPE_2__ ExecRuntime ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (char*,TYPE_2__*) ;
 int FUNC_4 (int,char*,TYPE_2__*) ;
 TYPE_2__* FUNC_5 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static ExecRuntime* FUNC_7(ExecRuntime *VAR_1, bool VAR_2) {
        int VAR_3;

        if (!VAR_1)
                return ((void*)0);

        if (VAR_1->manager)
                (void) FUNC_2(VAR_1->manager->exec_runtime_by_id, VAR_1->id);


        if (VAR_2 && VAR_1->tmp_dir) {
                FUNC_3("Spawning thread to nuke %s", VAR_1->tmp_dir);

                VAR_3 = FUNC_0(VAR_0, VAR_1->tmp_dir);
                if (VAR_3 < 0) {
                        FUNC_4(VAR_3, "Failed to nuke %s: %m", VAR_1->tmp_dir);
                        FUNC_1(VAR_1->tmp_dir);
                }

                VAR_1->tmp_dir = ((void*)0);
        }

        if (VAR_2 && VAR_1->var_tmp_dir) {
                FUNC_3("Spawning thread to nuke %s", VAR_1->var_tmp_dir);

                VAR_3 = FUNC_0(VAR_0, VAR_1->var_tmp_dir);
                if (VAR_3 < 0) {
                        FUNC_4(VAR_3, "Failed to nuke %s: %m", VAR_1->var_tmp_dir);
                        FUNC_1(VAR_1->var_tmp_dir);
                }

                VAR_1->var_tmp_dir = ((void*)0);
        }

        VAR_1->id = FUNC_5(VAR_1->id);
        VAR_1->tmp_dir = FUNC_5(VAR_1->tmp_dir);
        VAR_1->var_tmp_dir = FUNC_5(VAR_1->var_tmp_dir);
        FUNC_6(VAR_1->netns_storage_socket);
        return FUNC_5(VAR_1);
}
