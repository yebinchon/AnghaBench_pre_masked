
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int num_pics; int ** pp_pics; } ;
struct deint_data {TYPE_1__* meta; TYPE_2__ history; } ;
typedef int picture_t ;
struct TYPE_8__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_9__ {struct deint_data* p_data; } ;
typedef TYPE_4__ filter_sys_t ;
struct TYPE_6__ {int i_nb_fields; int date; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(filter_t *VAR_2)
{
    filter_sys_t *VAR_3 = VAR_2->p_sys;
    struct deint_data *const VAR_4 = VAR_3->p_data;

    while (VAR_4->history.num_pics)
    {
        picture_t * VAR_5 =
            VAR_4->history.pp_pics[--VAR_4->history.num_pics];
        FUNC_0(VAR_5);
    }

    for (unsigned int VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6)
    {
        VAR_4->meta[VAR_6].date = VAR_1;
        VAR_4->meta[VAR_6].i_nb_fields = 2;
    }
}
