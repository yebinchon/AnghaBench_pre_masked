
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sz; int surfaces; } ;
struct TYPE_6__ {int sz; int surfaces; } ;
struct deint_data {TYPE_1__ forward_refs; TYPE_2__ backward_refs; } ;
struct TYPE_7__ {int num_forward_references; int num_backward_references; int forward_references; int backward_references; } ;
typedef TYPE_3__ VAProcPipelineParameterBuffer ;



__attribute__((used)) static void
FUNC_0
(void * VAR_0, VAProcPipelineParameterBuffer * VAR_1)
{
    struct deint_data *const VAR_2 = VAR_0;

    VAR_1->backward_references = VAR_2->backward_refs.surfaces;
    VAR_1->forward_references = VAR_2->forward_refs.surfaces;
    VAR_1->num_backward_references = VAR_2->backward_refs.sz;
    VAR_1->num_forward_references = VAR_2->forward_refs.sz;
}
