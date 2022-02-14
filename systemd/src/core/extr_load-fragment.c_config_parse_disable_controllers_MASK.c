
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int disable_controllers; } ;
typedef int CGroupMask ;
typedef TYPE_1__ CGroupContext ;


 int VAR_0 ;
 int FUNC_0 (char const*,int *) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char const*,int ,char const*,unsigned int,int,char*,char const*) ;

int FUNC_3(
                const char *VAR_1,
                const char *VAR_2,
                unsigned VAR_3,
                const char *VAR_4,
                unsigned VAR_5,
                const char *VAR_6,
                int VAR_7,
                const char *VAR_8,
                void *VAR_9,
                void *VAR_10) {

        int VAR_11;
        CGroupContext *VAR_12 = VAR_9;
        CGroupMask VAR_13;




        if (FUNC_1(VAR_8)) {
                VAR_12->disable_controllers = 0;
                return 0;
        }

        VAR_11 = FUNC_0(VAR_8, &VAR_13);
        if (VAR_11 < 0 || VAR_13 <= 0) {
                FUNC_2(VAR_1, VAR_0, VAR_2, VAR_3, VAR_11, "Invalid cgroup string: %s, ignoring", VAR_8);
                return 0;
        }

        VAR_12->disable_controllers |= VAR_13;

        return 0;
}
