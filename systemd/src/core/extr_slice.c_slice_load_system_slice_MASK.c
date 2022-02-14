
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int perpetual; int default_dependencies; scalar_t__ documentation; scalar_t__ description; int manager; } ;
typedef TYPE_1__ Unit ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_5(Unit *VAR_1) {
        FUNC_1(VAR_1);

        if (!FUNC_0(VAR_1->manager))
                return 0;
        if (!FUNC_4(VAR_1, VAR_0))
                return 0;

        VAR_1->perpetual = 1;




        VAR_1->default_dependencies = 0;

        if (!VAR_1->description)
                VAR_1->description = FUNC_2("System Slice");
        if (!VAR_1->documentation)
                VAR_1->documentation = FUNC_3("man:systemd.special(7)");

        return 1;
}
