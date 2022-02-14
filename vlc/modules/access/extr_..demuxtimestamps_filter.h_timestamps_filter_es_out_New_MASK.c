
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * cbs; } ;
struct tf_es_out_s {int b_discontinuity; TYPE_1__ es_out; int es_list; int pcrtf; TYPE_1__* original_es_out; } ;
typedef TYPE_1__ es_out_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct tf_es_out_s*) ;
 struct tf_es_out_s* FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static es_out_t * FUNC_4(es_out_t *VAR_1)
{
    struct tf_es_out_s *VAR_2 = FUNC_2(sizeof(*VAR_2));
    if(!VAR_2)
    {
        FUNC_1(VAR_2);
        return ((void*)0);
    }
    VAR_2->original_es_out = VAR_1;
    VAR_2->b_discontinuity = 0;
    FUNC_3(&VAR_2->pcrtf);
    FUNC_0(VAR_2->es_list);

    VAR_2->es_out.cbs = &VAR_0;

    return &VAR_2->es_out;
}
