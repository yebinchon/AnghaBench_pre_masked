
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* current_token; struct TYPE_8__* tokens; } ;
typedef TYPE_1__ UdevRuleToken ;
typedef TYPE_1__ UdevRuleLine ;


 int FUNC_0 (int ,TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(UdevRuleLine *VAR_1, UdevRuleToken *VAR_2) {
        FUNC_1(VAR_1);
        FUNC_1(VAR_2);

        if (VAR_1->current_token)
                FUNC_0(VAR_0, VAR_1->current_token, VAR_2);
        else
                FUNC_0(VAR_0, VAR_1->tokens, VAR_2);

        VAR_1->current_token = VAR_2;
}
