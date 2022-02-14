
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct test_es_out_t {TYPE_1__* ids; } ;
struct TYPE_3__ {struct TYPE_3__* next; } ;
typedef TYPE_1__ es_out_id_t ;


 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct test_es_out_t *VAR_0, es_out_id_t *VAR_1)
{
    for (es_out_id_t *VAR_2 = VAR_0->ids; VAR_2 != ((void*)0); VAR_2 = VAR_2->next)
        if (VAR_2 == VAR_1)
            return;

    FUNC_0();
}
