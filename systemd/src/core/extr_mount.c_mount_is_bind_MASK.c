
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ fstype; int options; } ;
typedef TYPE_1__ MountParameters ;


 scalar_t__ FUNC_0 (scalar_t__,char*,char*) ;
 int FUNC_1 (TYPE_1__ const*) ;
 scalar_t__ FUNC_2 (int ,char*) ;

__attribute__((used)) static bool FUNC_3(const MountParameters *VAR_0) {
        FUNC_1(VAR_0);

        if (FUNC_2(VAR_0->options, "bind\0" "rbind\0"))
                return 1;

        if (VAR_0->fstype && FUNC_0(VAR_0->fstype, "bind", "rbind"))
                return 1;

        return 0;
}
