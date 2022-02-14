
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int options; } ;
struct TYPE_5__ {TYPE_1__ parameters_proc_self_mountinfo; scalar_t__ from_fragment; } ;
typedef TYPE_1__ MountParameters ;
typedef TYPE_2__ Mount ;


 int FUNC_0 (int ,char*) ;

__attribute__((used)) static bool FUNC_1(const Mount *VAR_0) {
        const MountParameters *VAR_1;

        if (VAR_0->from_fragment)
                return 1;

        VAR_1 = &VAR_0->parameters_proc_self_mountinfo;
        return FUNC_0(VAR_1->options, "x-systemd.device-bound\0");
}
