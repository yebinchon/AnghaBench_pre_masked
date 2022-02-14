
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* symlink_target; struct TYPE_4__* default_instance; int also; int required_by; int wanted_by; int aliases; struct TYPE_4__* path; struct TYPE_4__* name; } ;
typedef TYPE_1__ UnitFileInstallInfo ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(UnitFileInstallInfo *VAR_0) {

        if (!VAR_0)
                return;

        FUNC_0(VAR_0->name);
        FUNC_0(VAR_0->path);
        FUNC_1(VAR_0->aliases);
        FUNC_1(VAR_0->wanted_by);
        FUNC_1(VAR_0->required_by);
        FUNC_1(VAR_0->also);
        FUNC_0(VAR_0->default_instance);
        FUNC_0(VAR_0->symlink_target);
        FUNC_0(VAR_0);
}
