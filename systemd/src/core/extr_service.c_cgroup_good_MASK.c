
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cgroup_path; } ;
typedef int Service ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(Service *VAR_1) {
        int VAR_2;

        FUNC_1(VAR_1);




        if (!FUNC_0(VAR_1)->cgroup_path)
                return 0;

        VAR_2 = FUNC_2(VAR_0, FUNC_0(VAR_1)->cgroup_path);
        if (VAR_2 < 0)
                return VAR_2;

        return VAR_2 == 0;
}
