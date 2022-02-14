
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int transient; int perpetual; int default_dependencies; int documentation; scalar_t__ description; } ;
typedef TYPE_1__ Unit ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_4(Unit *VAR_1) {
        FUNC_0(VAR_1);

        if (!FUNC_3(VAR_1, VAR_0))
                return 0;

        VAR_1->transient = 1;
        VAR_1->perpetual = 1;




        VAR_1->default_dependencies = 0;


        if (!VAR_1->description)
                VAR_1->description = FUNC_1("System and Service Manager");
        if (!VAR_1->documentation)
                (void) FUNC_2(&VAR_1->documentation, "man:systemd(1)");

        return 1;
}
