
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_6__ {scalar_t__ p_sys; } ;
typedef TYPE_1__ sout_mux_t ;
struct TYPE_7__ {unsigned int i_nb_streams; TYPE_3__** pp_streams; } ;
typedef TYPE_2__ sout_mux_sys_t ;
struct TYPE_8__ {int i_indexentries; TYPE_4__* p_indexentries; int tinfo; } ;
typedef TYPE_3__ mp4_stream_t ;
struct TYPE_9__ {int i_time; int i_moofoffset; int i_sample; int i_trun; int i_traf; } ;
typedef TYPE_4__ mp4_fragindex_t ;
typedef int bo_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int *,int *) ;
 int * FUNC_6 (char*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static bo_t *FUNC_8(sout_mux_t *VAR_0)
{
    sout_mux_sys_t *VAR_1 = (sout_mux_sys_t*) VAR_0->p_sys;
    bo_t *VAR_2 = ((void*)0);
    for (unsigned int VAR_3 = 0; VAR_3 < VAR_1->i_nb_streams; VAR_3++)
    {
        mp4_stream_t *VAR_4 = VAR_1->pp_streams[VAR_3];
        if (VAR_4->i_indexentries)
        {
            bo_t *VAR_5 = FUNC_4("tfra", 0, 0x0);
            if (!VAR_5) continue;
            FUNC_1(VAR_5, FUNC_7(VAR_4->tinfo));
            FUNC_1(VAR_5, 0x3);
            FUNC_1(VAR_5, VAR_4->i_indexentries);
            for(uint32_t VAR_6=0; VAR_6<VAR_4->i_indexentries; VAR_6++)
            {
                const mp4_fragindex_t *VAR_7 = &VAR_4->p_indexentries[VAR_6];
                FUNC_1(VAR_5, VAR_7->i_time);
                FUNC_1(VAR_5, VAR_7->i_moofoffset);
                FUNC_0(sizeof(VAR_7->i_traf)==1);
                FUNC_0(sizeof(VAR_7->i_trun)==1);
                FUNC_0(sizeof(VAR_7->i_sample)==4);
                FUNC_2(VAR_5, VAR_7->i_traf);
                FUNC_2(VAR_5, VAR_7->i_trun);
                FUNC_1(VAR_5, VAR_7->i_sample);
            }

            if (!VAR_2 && !(VAR_2 = FUNC_6("mfra")))
            {
                FUNC_3(VAR_5);
                return ((void*)0);
            }

            FUNC_5(VAR_2,VAR_5);
        }
    }
    return VAR_2;
}
