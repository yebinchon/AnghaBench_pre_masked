
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int source; int column; int line; } ;
typedef TYPE_1__ JsonVariant ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(JsonVariant *VAR_0, JsonVariant *VAR_1) {
        FUNC_0(VAR_0);
        FUNC_0(VAR_1);

        if (!FUNC_2(VAR_1))
                return;

        VAR_0->line = VAR_1->line;
        VAR_0->column = VAR_1->column;
        VAR_0->source = FUNC_1(VAR_1->source);
}
