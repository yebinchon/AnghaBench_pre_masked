
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t n_elements; int type; int reference; scalar_t__ is_reference; int source; } ;
typedef TYPE_1__ JsonVariant ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(JsonVariant *VAR_2) {
        FUNC_1(VAR_2);

        if (!FUNC_3(VAR_2))
                return;

        FUNC_2(VAR_2->source);

        if (VAR_2->is_reference) {
                FUNC_4(VAR_2->reference);
                return;
        }

        if (FUNC_0(VAR_2->type, VAR_0, VAR_1)) {
                size_t VAR_3;

                for (VAR_3 = 0; VAR_3 < VAR_2->n_elements; VAR_3++)
                        FUNC_5(VAR_2 + 1 + VAR_3);
        }
}
