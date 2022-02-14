
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int no_console_output; } ;
struct TYPE_7__ {TYPE_5__* manager; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_2__* unit; } ;
typedef TYPE_1__ Job ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_5__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (TYPE_2__*,int ) ;

void FUNC_5(Job *VAR_2) {
        FUNC_1(VAR_2);
        if (VAR_2->type != VAR_0)
                return;

        if (!FUNC_0(VAR_2->unit->manager))
                return;

        if (!FUNC_4(VAR_2->unit, VAR_1))
                return;


        VAR_2->unit->manager->no_console_output = 0;

        if (FUNC_3() > 0)
                return;

        (void) FUNC_2(((void*)0));
}
