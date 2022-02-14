
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int manager; } ;
struct TYPE_10__ {int where; } ;
struct TYPE_9__ {int options; } ;
typedef TYPE_1__ MountParameters ;
typedef TYPE_2__ Mount ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char*,char*) ;
 scalar_t__ FUNC_2 (int ,char*,char*,char*,char*) ;
 TYPE_7__* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 TYPE_1__* FUNC_6 (TYPE_2__*) ;
 int FUNC_7 () ;

__attribute__((used)) static bool FUNC_8(Mount *VAR_0) {
        MountParameters *VAR_1;
        FUNC_4(VAR_0);





        if (!FUNC_0(FUNC_3(VAR_0)->manager))
                return 1;

        if (FUNC_1(VAR_0->where,
                        "/",
                        "/usr"))
                return 1;

        if (FUNC_2(VAR_0->where,
                                "/run/initramfs",
                                "/proc",
                                "/sys",
                                "/dev"))
                return 1;


        VAR_1 = FUNC_6(VAR_0);
        if (VAR_1 && FUNC_5(VAR_1->options, "x-initrd.mount\0") && !FUNC_7())
                return 1;

        return 0;
}
