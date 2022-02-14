
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_6__ {int i_idx; int i_idx_max; TYPE_2__* idx; } ;
typedef TYPE_1__ demux_index_t ;
struct TYPE_7__ {scalar_t__ i_time; scalar_t__ i_offset; } ;
typedef TYPE_2__ demux_index_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (TYPE_2__*,size_t) ;

__attribute__((used)) static void FUNC_1( demux_index_t *VAR_3,
                               int64_t VAR_4, int64_t VAR_5 )
{

    if( VAR_3->i_idx > 0 && VAR_3->idx[VAR_3->i_idx-1].i_time >= VAR_4 )
        return;


    if( VAR_3->i_idx >= VAR_3->i_idx_max )
    {
        if( VAR_3->i_idx >= VAR_0 )
        {

            const int64_t VAR_6 = VAR_3->idx[VAR_3->i_idx-1].i_time -
                                                        VAR_3->idx[0].i_time;
            const int VAR_7 = VAR_0/2;
            int VAR_8, VAR_9;


            for( VAR_8 = 1, VAR_9 = 1; VAR_8 < VAR_3->i_idx; VAR_8++ )
            {
                if( VAR_3->idx[VAR_8].i_time < VAR_9 * VAR_6 / VAR_7 )
                    continue;

                VAR_3->idx[VAR_9++] = VAR_3->idx[VAR_8];
            }
            VAR_3->i_idx = VAR_9;

            if( VAR_3->i_idx > 3 * VAR_0 / 4 )
            {


                for( VAR_8 = 0; VAR_8 < VAR_3->i_idx/2; VAR_8++ )
                    VAR_3->idx[VAR_8] = VAR_3->idx[2*VAR_8];
                VAR_3->i_idx /= 2;
            }
        }
        else
        {
            if(VAR_1 - 1000 < VAR_3->i_idx_max ||
               (VAR_2 / sizeof(demux_index_entry_t)) - VAR_3->i_idx_max < 1000)
                return;
            size_t VAR_10 = (1000 + VAR_3->i_idx_max) * sizeof(demux_index_entry_t);
            demux_index_entry_t *VAR_11 = FUNC_0( VAR_3->idx, VAR_10 );
            if( !VAR_11 )
                return;
            VAR_3->i_idx_max += 1000;
            VAR_3->idx = VAR_11;
        }
    }


    VAR_3->idx[VAR_3->i_idx].i_time = VAR_4;
    VAR_3->idx[VAR_3->i_idx].i_offset = VAR_5;

    VAR_3->i_idx++;
}
