
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__ i_edits_count; scalar_t__ i_timescale; TYPE_1__* p_edits; } ;
typedef TYPE_2__ mp4mux_trackinfo_t ;
typedef int bo_t ;
struct TYPE_4__ {scalar_t__ i_start_offset; scalar_t__ i_duration; scalar_t__ i_start_time; } ;


 int FUNC_0 (int *,int,int,int) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,int,int ) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 (char*) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;

__attribute__((used)) static bo_t *FUNC_7( mp4mux_trackinfo_t *VAR_0, uint32_t VAR_1, bool VAR_2)
{
    if(VAR_0->i_edits_count == 0)
        return ((void*)0);

    bo_t *VAR_3 = FUNC_5("edts");
    bo_t *VAR_4 = FUNC_3("elst", VAR_2 ? 1 : 0, 0);
    if(!VAR_4 || !VAR_3)
    {
        FUNC_2(VAR_4);
        FUNC_2(VAR_3);
        return ((void*)0);
    }

    uint32_t VAR_5 = VAR_0->i_edits_count;
    for(unsigned VAR_6=0; VAR_6<VAR_0->i_edits_count; VAR_6++)
    {

        if(VAR_0->p_edits[VAR_6].i_start_offset != 0)
            VAR_5++;
    }

    FUNC_1(VAR_4, VAR_5);

    for(unsigned VAR_7=0; VAR_7<VAR_0->i_edits_count; VAR_7++)
    {
        if(VAR_0->p_edits[VAR_7].i_start_offset != 0)
        {
            FUNC_0(VAR_4,
                    FUNC_6(VAR_0->p_edits[VAR_7].i_start_offset, VAR_1),
                    -1,
                    VAR_2);
        }


        FUNC_0(VAR_4,
                FUNC_6(VAR_0->p_edits[VAR_7].i_duration, VAR_1),
                FUNC_6(VAR_0->p_edits[VAR_7].i_start_time, VAR_0->i_timescale),
                VAR_2);
    }

    FUNC_4(VAR_3, VAR_4);
    return VAR_3;
}
