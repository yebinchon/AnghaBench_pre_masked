
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ cgroup_path; TYPE_1__* manager; } ;
typedef TYPE_2__ pid_t ;
typedef TYPE_2__ Unit ;
struct TYPE_10__ {int cgroup_supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,scalar_t__,int ,int *,int *) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (TYPE_2__*,int,char*,scalar_t__) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char const*,int ,TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;

int FUNC_9(Unit *VAR_7, const char *VAR_8, pid_t *VAR_9) {
        int VAR_10;

        FUNC_1(VAR_7);
        FUNC_1(VAR_9);




        (void) FUNC_8(VAR_7);

        VAR_10 = FUNC_7(VAR_8, VAR_1, VAR_9);
        if (VAR_10 != 0)
                return VAR_10;

        (void) FUNC_3(VAR_3, VAR_4, -1);
        (void) FUNC_4(VAR_5, -1);

        (void) FUNC_6(VAR_2, VAR_6);

        if (VAR_7->cgroup_path) {
                VAR_10 = FUNC_2(VAR_7->manager->cgroup_supported, VAR_7->cgroup_path, 0, ((void*)0), ((void*)0));
                if (VAR_10 < 0) {
                        FUNC_5(VAR_7, VAR_10, "Failed to join unit cgroup %s: %m", VAR_7->cgroup_path);
                        FUNC_0(VAR_0);
                }
        }

        return 0;
}
