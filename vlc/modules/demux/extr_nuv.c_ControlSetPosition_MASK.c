
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int int64_t ;
struct TYPE_9__ {char i_type; scalar_t__ i_length; scalar_t__ i_timecode; int i_keyframe; } ;
typedef TYPE_1__ frame_header_t ;
struct TYPE_10__ {int s; TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_11__ {int idx; int b_index; scalar_t__ b_seekable; } ;
typedef TYPE_3__ demux_sys_t ;


 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_4 (int ,int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(demux_t *VAR_2, uint64_t VAR_3, bool VAR_4)
{
    demux_sys_t *VAR_5 = VAR_2->p_sys;


    if( VAR_5->b_seekable && !VAR_4 )
    {
        if (FUNC_5(VAR_2->s, VAR_3))
            return VAR_0;
    }
    else
    {

        if (VAR_3 > FUNC_6(VAR_2->s))
        {
            FUNC_2( VAR_2, "unable to seek, skipping frames (slow)" );
        }
        else
        {
            FUNC_3( VAR_2, "unable to seek, only forward seeking is possible" );

            return VAR_0;
        }
    }

    for( ;; )
    {
        frame_header_t VAR_6;
        uint64_t VAR_7;

        if ((VAR_7 = FUNC_6(VAR_2->s)) >= VAR_3)
            break;

        if( FUNC_0( VAR_2, &VAR_6 ) )
            return VAR_0;

        if( VAR_6.i_type == 'A' || VAR_6.i_type == 'V' )
        {
            if( !VAR_6.i_keyframe && !VAR_5->b_index )
                FUNC_1( &VAR_5->idx,(int64_t)VAR_6.i_timecode*1000, VAR_7 );
        }

        if( VAR_6.i_type != 'R' && VAR_6.i_length > 0 )
        {
            if( FUNC_4( VAR_2->s, ((void*)0),
                                 VAR_6.i_length ) != VAR_6.i_length )
                return VAR_0;
        }
    }

    return VAR_1;
}
