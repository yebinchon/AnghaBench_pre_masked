
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_7__ {int num_pics; struct deint_data* const pp_pics; } ;
struct TYPE_8__ {struct deint_data* const surfaces; } ;
struct deint_data {TYPE_1__ history; TYPE_2__ forward_refs; } ;
struct TYPE_9__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_10__ {struct deint_data* p_data; } ;
typedef TYPE_4__ filter_sys_t ;


 int FUNC_0 (TYPE_3__* const,TYPE_4__* const) ;
 int FUNC_1 (struct deint_data* const) ;
 int FUNC_2 (struct deint_data) ;

__attribute__((used)) static void
FUNC_3(vlc_object_t * VAR_0)
{
    filter_t *const VAR_1 = (filter_t *)VAR_0;
    filter_sys_t *const VAR_2 = VAR_1->p_sys;
    struct deint_data *const VAR_3 = VAR_2->p_data;

    if (VAR_3->forward_refs.surfaces)
        FUNC_1(VAR_3->forward_refs.surfaces);
    if (VAR_3->history.pp_pics)
    {
        while (VAR_3->history.num_pics)
            FUNC_2(VAR_3->history.pp_pics[--VAR_3->history.num_pics]);
        FUNC_1(VAR_3->history.pp_pics);
    }
    FUNC_1(VAR_3);
    FUNC_0(VAR_1, VAR_2);
}
