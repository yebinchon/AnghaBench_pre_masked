
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ type; scalar_t__ load_state; int * dependencies; int default_dependencies; } ;
typedef TYPE_1__ Unit ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,TYPE_1__*,int,int ) ;

int FUNC_3(Unit *VAR_5, Unit *VAR_6) {
        FUNC_0(VAR_5);
        FUNC_0(VAR_6);

        if (VAR_6->type != VAR_4)
                return 0;



        if (VAR_5->load_state != VAR_3 ||
            VAR_6->load_state != VAR_3)
                return 0;



        if (!VAR_5->default_dependencies ||
            !VAR_6->default_dependencies)
                return 0;


        if (FUNC_1(VAR_6->dependencies[VAR_1], VAR_5))
                return 0;

        return FUNC_2(VAR_6, VAR_0, VAR_5, 1, VAR_2);
}
