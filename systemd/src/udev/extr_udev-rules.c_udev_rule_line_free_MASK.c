
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* line; TYPE_1__* rule_file; struct TYPE_8__* rule_lines_prev; } ;
typedef TYPE_2__ UdevRuleLine ;
struct TYPE_7__ {int rule_lines; TYPE_2__* current_line; } ;


 int FUNC_0 (int ,int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(UdevRuleLine *VAR_1) {
        if (!VAR_1)
                return;

        FUNC_2(VAR_1);

        if (VAR_1->rule_file) {
                if (VAR_1->rule_file->current_line == VAR_1)
                        VAR_1->rule_file->current_line = VAR_1->rule_lines_prev;

                FUNC_0(VAR_0, VAR_1->rule_file->rule_lines, VAR_1);
        }

        FUNC_1(VAR_1->line);
        FUNC_1(VAR_1);
}
