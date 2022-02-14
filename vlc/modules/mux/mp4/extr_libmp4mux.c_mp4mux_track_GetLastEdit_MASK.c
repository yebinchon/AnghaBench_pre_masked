
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_edits_count; int const* p_edits; } ;
typedef TYPE_1__ mp4mux_trackinfo_t ;
typedef int mp4mux_edit_t ;



const mp4mux_edit_t *FUNC_0(const mp4mux_trackinfo_t *VAR_0)
{
    if(VAR_0->i_edits_count)
        return &VAR_0->p_edits[VAR_0->i_edits_count - 1];
    else return ((void*)0);
}
