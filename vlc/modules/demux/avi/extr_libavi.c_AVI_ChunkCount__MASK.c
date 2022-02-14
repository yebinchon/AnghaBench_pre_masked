
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vlc_fourcc_t ;
struct TYPE_6__ {scalar_t__ i_type; } ;
struct TYPE_5__ {scalar_t__ i_chunk_fourcc; TYPE_3__* p_next; TYPE_3__* p_first; } ;
struct TYPE_7__ {TYPE_2__ list; TYPE_1__ common; } ;
typedef TYPE_3__ avi_chunk_t ;



int FUNC_0( avi_chunk_t *VAR_0, vlc_fourcc_t VAR_1, bool VAR_2 )
{
    if( !VAR_0 )
        return 0;

    int VAR_3 = 0;
    for( avi_chunk_t *VAR_4 = VAR_0->common.p_first;
                      VAR_4; VAR_4 = VAR_4->common.p_next )
    {
        if( VAR_2 && VAR_4->list.i_type == 0 )
            continue;

        if( VAR_4->common.i_chunk_fourcc != VAR_1 &&
            (!VAR_2 || VAR_4->list.i_type != VAR_1) )
            continue;

        VAR_3++;
    }

    return VAR_3;
}
