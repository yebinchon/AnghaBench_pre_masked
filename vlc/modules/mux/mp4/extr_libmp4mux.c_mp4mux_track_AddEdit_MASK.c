
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ i_edits_count; int * p_edits; } ;
typedef TYPE_1__ mp4mux_trackinfo_t ;
typedef int mp4mux_edit_t ;


 scalar_t__ FUNC_0 (int) ;
 int * FUNC_1 (int *,scalar_t__,int) ;

bool FUNC_2(mp4mux_trackinfo_t *VAR_0, const mp4mux_edit_t *VAR_1)
{
    if(VAR_0->i_edits_count + 1 < VAR_0->i_edits_count)
        return 0;
    mp4mux_edit_t *VAR_2 = FUNC_1( VAR_0->p_edits,
                                                 VAR_0->i_edits_count + 1,
                                                 sizeof(*VAR_2) );
    if(FUNC_0(!VAR_2))
        return 0;

    VAR_0->p_edits = VAR_2;
    VAR_0->p_edits[VAR_0->i_edits_count++] = *VAR_1;

    return 1;
}
