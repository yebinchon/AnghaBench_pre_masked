
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int instances; struct TYPE_5__* pattern; } ;
struct TYPE_4__ {size_t n_rules; TYPE_3__* rules; } ;
typedef TYPE_1__ Presets ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(Presets *VAR_0) {
        size_t VAR_1;

        if (!VAR_0)
                return;

        for (VAR_1 = 0; VAR_1 < VAR_0->n_rules; VAR_1++) {
                FUNC_0(VAR_0->rules[VAR_1].pattern);
                FUNC_1(VAR_0->rules[VAR_1].instances);
        }

        FUNC_0(VAR_0->rules);
        VAR_0->n_rules = 0;
}
