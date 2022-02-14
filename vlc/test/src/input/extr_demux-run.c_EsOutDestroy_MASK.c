
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct test_es_out_t {TYPE_1__* ids; } ;
typedef int es_out_t ;
struct TYPE_3__ {struct TYPE_3__* next; } ;
typedef TYPE_1__ es_out_id_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct test_es_out_t*) ;

__attribute__((used)) static void FUNC_2(es_out_t *VAR_0)
{
    struct test_es_out_t *VAR_1 = (struct test_es_out_t *)VAR_0;
    es_out_id_t *VAR_2;

    while ((VAR_2 = VAR_1->ids) != ((void*)0))
    {
        VAR_1->ids = VAR_2->next;
        FUNC_0(VAR_2);
    }
    FUNC_1(VAR_1);
}
