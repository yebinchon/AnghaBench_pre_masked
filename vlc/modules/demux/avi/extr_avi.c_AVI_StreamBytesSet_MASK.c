
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_10__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_11__ {TYPE_5__** track; } ;
typedef TYPE_4__ demux_sys_t ;
struct TYPE_9__ {int i_size; TYPE_1__* p_entry; } ;
struct TYPE_12__ {int i_idxposc; TYPE_2__ idx; scalar_t__ i_idxposb; } ;
typedef TYPE_5__ avi_track_t ;
struct TYPE_8__ {scalar_t__ i_lengthtotal; scalar_t__ i_length; } ;


 scalar_t__ FUNC_0 (TYPE_3__*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2( demux_t *VAR_2,
                               unsigned int VAR_3,
                               uint64_t VAR_4 )
{
    demux_sys_t *VAR_5 = VAR_2->p_sys;
    avi_track_t *VAR_6 = VAR_5->track[VAR_3];

    if( ( VAR_6->idx.i_size > 0 )
        &&( VAR_4 < VAR_6->idx.p_entry[VAR_6->idx.i_size - 1].i_lengthtotal +
                VAR_6->idx.p_entry[VAR_6->idx.i_size - 1].i_length ) )
    {


        int VAR_7 = FUNC_1( VAR_6->i_idxposc, VAR_6->idx.i_size - 1 );
        int VAR_8 = VAR_6->idx.i_size;
        int VAR_9 = 0;
        for( ;; )
        {
            if( VAR_6->idx.p_entry[VAR_7].i_lengthtotal > VAR_4 )
            {
                VAR_8 = VAR_7 ;
                VAR_7 = ( VAR_9 + VAR_7 ) / 2 ;
            }
            else
            {
                if( VAR_6->idx.p_entry[VAR_7].i_lengthtotal +
                        VAR_6->idx.p_entry[VAR_7].i_length <= VAR_4)
                {
                    VAR_9 = VAR_7 ;
                    VAR_7 = (VAR_8 + VAR_7 ) / 2 ;
                }
                else
                {
                    VAR_6->i_idxposc = VAR_7;
                    VAR_6->i_idxposb = VAR_4 -
                            VAR_6->idx.p_entry[VAR_7].i_lengthtotal;
                    return VAR_1;
                }
            }
        }

    }
    else
    {
        VAR_6->i_idxposc = VAR_6->idx.i_size - 1;
        VAR_6->i_idxposb = 0;
        do
        {
            VAR_6->i_idxposc++;
            if( FUNC_0( VAR_2, VAR_3 ) )
            {
                return VAR_0;
            }

        } while( VAR_6->idx.p_entry[VAR_6->i_idxposc].i_lengthtotal +
                    VAR_6->idx.p_entry[VAR_6->i_idxposc].i_length <= VAR_4 );

        VAR_6->i_idxposb = VAR_4 -
                       VAR_6->idx.p_entry[VAR_6->i_idxposc].i_lengthtotal;
        return VAR_1;
    }
}
