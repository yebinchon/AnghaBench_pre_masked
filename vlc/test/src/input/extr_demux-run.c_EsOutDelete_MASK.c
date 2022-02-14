
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct test_es_out_t {TYPE_1__* ids; } ;
typedef int es_out_t ;
struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ es_out_id_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,void*) ;

__attribute__((used)) static void FUNC_3(es_out_t *VAR_0, es_out_id_t *VAR_1)
{
    struct test_es_out_t *VAR_2 = (struct test_es_out_t *) VAR_0;
    es_out_id_t **VAR_3 = &VAR_2->ids;

    while (*VAR_3 != VAR_1)
    {
        if (*VAR_3 == ((void*)0))
            FUNC_1();
        VAR_3 = &((*VAR_3)->next);
    }

    FUNC_2("[%p] Deleted ES\n", (void *)VAR_1);
    *VAR_3 = VAR_1->next;
    FUNC_0(VAR_1);
}
