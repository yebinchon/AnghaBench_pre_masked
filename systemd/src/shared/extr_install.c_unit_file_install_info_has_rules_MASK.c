
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int required_by; int wanted_by; int aliases; } ;
typedef TYPE_1__ UnitFileInstallInfo ;


 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(const UnitFileInstallInfo *VAR_0) {
        FUNC_0(VAR_0);

        return !FUNC_1(VAR_0->aliases) ||
               !FUNC_1(VAR_0->wanted_by) ||
               !FUNC_1(VAR_0->required_by);
}
