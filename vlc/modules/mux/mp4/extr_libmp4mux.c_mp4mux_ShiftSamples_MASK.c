
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned int i_samples_count; TYPE_2__* samples; } ;
typedef TYPE_1__ mp4mux_trackinfo_t ;
struct TYPE_7__ {int i_pos; } ;
typedef TYPE_2__ mp4mux_sample_t ;
struct TYPE_8__ {int tracks; } ;
typedef TYPE_3__ mp4mux_handle_t ;
typedef scalar_t__ int64_t ;


 size_t FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *,size_t) ;

void FUNC_2(mp4mux_handle_t *VAR_0, int64_t VAR_1)
{
    for(size_t VAR_2 = 0; VAR_2 < FUNC_0(&VAR_0->tracks); VAR_2++)
    {
        mp4mux_trackinfo_t *VAR_3 = FUNC_1(&VAR_0->tracks, VAR_2);
        for (unsigned VAR_4 = 0; VAR_4 < VAR_3->i_samples_count; VAR_4++)
        {
            mp4mux_sample_t *VAR_5 = VAR_3->samples;
            VAR_5[VAR_4].i_pos += VAR_1;
        }
    }
}
