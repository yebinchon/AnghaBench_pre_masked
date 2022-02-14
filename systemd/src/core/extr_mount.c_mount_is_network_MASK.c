
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ fstype; int options; } ;
typedef TYPE_1__ MountParameters ;


 int FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static bool FUNC_3(const MountParameters *VAR_0) {
        FUNC_0(VAR_0);

        if (FUNC_1(VAR_0->options, "_netdev\0"))
                return 1;

        if (VAR_0->fstype && FUNC_2(VAR_0->fstype))
                return 1;

        return 0;
}
