
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int options; scalar_t__ fstype; } ;
typedef TYPE_1__ MountParameters ;


 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_1__ const*) ;

__attribute__((used)) static bool FUNC_4(const MountParameters *VAR_0) {
        FUNC_0(VAR_0);



        if (VAR_0->fstype && FUNC_2(VAR_0->fstype))
                return 0;

        if (FUNC_3(VAR_0))
                return 0;

        return FUNC_1(VAR_0->options,
                                 "usrquota\0" "grpquota\0" "quota\0" "usrjquota\0" "grpjquota\0");
}
