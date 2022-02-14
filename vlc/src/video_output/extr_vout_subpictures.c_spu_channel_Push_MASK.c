
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_5__ {int i_stop; int i_start; } ;
typedef TYPE_1__ subpicture_t ;
struct spu_channel {int entries; } ;
struct TYPE_6__ {int stop; int start; int orgstop; int orgstart; TYPE_1__* subpic; } ;
typedef TYPE_2__ spu_render_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,TYPE_2__ const) ;

__attribute__((used)) static int FUNC_1(struct spu_channel *VAR_2, subpicture_t *VAR_3,
                            vlc_tick_t VAR_4, vlc_tick_t VAR_5)
{
    const spu_render_entry_t VAR_6 = {
        .subpic = VAR_3,
        .orgstart = VAR_4,
        .orgstop = VAR_5,
        .start = VAR_3->i_start,
        .stop = VAR_3->i_stop,
    };
    return FUNC_0(&VAR_2->entries, VAR_6) ? VAR_1 : VAR_0;
}
