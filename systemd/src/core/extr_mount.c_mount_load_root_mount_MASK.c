
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int perpetual; int default_dependencies; scalar_t__ description; } ;
typedef TYPE_2__ Unit ;
struct TYPE_8__ {int std_input; int std_output; } ;
struct TYPE_10__ {TYPE_1__ exec_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__* FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_4(Unit *VAR_3) {
        FUNC_1(VAR_3);

        if (!FUNC_3(VAR_3, VAR_2))
                return;

        VAR_3->perpetual = 1;
        VAR_3->default_dependencies = 0;


        FUNC_0(VAR_3)->exec_context.std_output = VAR_1;
        FUNC_0(VAR_3)->exec_context.std_input = VAR_0;

        if (!VAR_3->description)
                VAR_3->description = FUNC_2("Root Mount");
}
