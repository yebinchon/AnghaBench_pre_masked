
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__** pp_cur_pic; } ;
struct deint_data {int cur_frame; TYPE_1__ history; } ;
struct TYPE_6__ {int flags; } ;
typedef TYPE_3__ VAProcFilterParameterBufferDeinterlacing ;
struct TYPE_5__ {scalar_t__ b_top_field_first; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(void * VAR_2, void * VAR_3)
{
    struct deint_data *const VAR_4 = VAR_2;
    VAProcFilterParameterBufferDeinterlacing *const VAR_5 = VAR_3;

    VAR_5->flags =
        VAR_4->history.pp_cur_pic[0]->b_top_field_first ?
        0 : VAR_1;
    if (VAR_4->cur_frame ==
        (VAR_4->history.pp_cur_pic[0]->b_top_field_first ? 1 : 0))
        VAR_5->flags |= VAR_0;
}
