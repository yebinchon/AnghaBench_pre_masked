
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {unsigned int sz; scalar_t__ surfaces; } ;
struct TYPE_7__ {unsigned int sz; scalar_t__ surfaces; } ;
struct TYPE_6__ {unsigned int sz; scalar_t__ num_pics; scalar_t__ pp_pics; scalar_t__ pp_cur_pic; } ;
struct deint_data {TYPE_3__ forward_refs; TYPE_2__ backward_refs; TYPE_1__ history; } ;
typedef int picture_t ;
typedef int VASurfaceID ;
struct TYPE_9__ {unsigned int num_backward_references; unsigned int num_forward_references; } ;
typedef TYPE_4__ VAProcPipelineCaps ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int const,int) ;
 scalar_t__ FUNC_1 (unsigned int const,int) ;

__attribute__((used)) static int
FUNC_2(void * VAR_2, VAProcPipelineCaps const * VAR_3)
{
    struct deint_data *const VAR_4 = VAR_2;
    unsigned int const VAR_5 =
        VAR_3->num_backward_references;
    unsigned int const VAR_6 =
        VAR_3->num_forward_references;
    unsigned int const VAR_7 =
        VAR_5 + 1 + VAR_6;

    VAR_4->history.pp_pics = FUNC_0(VAR_7, sizeof(picture_t *));
    if (!VAR_4->history.pp_pics)
        return VAR_0;

    VAR_4->history.pp_cur_pic =
        VAR_4->history.pp_pics + VAR_6;
    VAR_4->history.num_pics = 0;
    VAR_4->history.sz = VAR_7;

    if (VAR_7 - 1)
    {
        VAR_4->forward_refs.surfaces =
            FUNC_1(VAR_7 - 1, sizeof(VASurfaceID));
        if (!VAR_4->forward_refs.surfaces)
            return VAR_0;
    }

    VAR_4->backward_refs.surfaces =
        VAR_4->forward_refs.surfaces + VAR_6;

    VAR_4->backward_refs.sz = VAR_5;
    VAR_4->forward_refs.sz = VAR_6;

    return VAR_1;
}
