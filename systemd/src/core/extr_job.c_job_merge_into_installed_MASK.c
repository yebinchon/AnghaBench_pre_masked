
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int installed; scalar_t__ unit; scalar_t__ type; int irreversible; int ignore_order; } ;
typedef TYPE_1__ Job ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(Job *VAR_1, Job *VAR_2) {
        FUNC_0(VAR_1->installed);
        FUNC_0(VAR_1->unit == VAR_2->unit);

        if (VAR_1->type != VAR_0)
                FUNC_1(FUNC_2(&VAR_1->type, VAR_2->type, VAR_1->unit) == 0);
        else
                FUNC_0(VAR_2->type == VAR_0);

        VAR_1->irreversible = VAR_1->irreversible || VAR_2->irreversible;
        VAR_1->ignore_order = VAR_1->ignore_order || VAR_2->ignore_order;
}
