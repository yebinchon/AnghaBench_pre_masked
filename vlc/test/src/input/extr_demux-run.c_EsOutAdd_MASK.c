
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct test_es_out_t {int parent; TYPE_1__* ids; } ;
typedef int es_out_t ;
struct TYPE_7__ {int fmt; int * decoder; struct TYPE_7__* next; } ;
typedef TYPE_1__ es_out_id_t ;
struct TYPE_8__ {scalar_t__ i_group; } ;
typedef TYPE_2__ es_format_t ;


 int FUNC_0 (char*,void*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_2__ const*) ;
 TYPE_1__* FUNC_3 (int) ;
 int * FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static es_out_id_t *FUNC_6(es_out_t *VAR_0, const es_format_t *VAR_1)
{
    struct test_es_out_t *VAR_2 = (struct test_es_out_t *) VAR_0;

    if (VAR_1->i_group < 0)
        return ((void*)0);

    es_out_id_t *VAR_3 = FUNC_3(sizeof (*VAR_3));
    if (FUNC_5(VAR_3 == ((void*)0)))
        return ((void*)0);

    VAR_3->next = VAR_2->ids;
    VAR_2->ids = VAR_3;







    FUNC_0("[%p] Added   ES\n", (void *)VAR_3);
    return VAR_3;
}
