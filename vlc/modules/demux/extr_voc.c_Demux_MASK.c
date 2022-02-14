
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_14__ {int out; int s; TYPE_4__* p_sys; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_12__ {scalar_t__ i_bytes_per_frame; scalar_t__ i_frame_length; } ;
struct TYPE_13__ {TYPE_1__ audio; } ;
struct TYPE_15__ {scalar_t__ i_silence_countdown; scalar_t__ i_block_end; int * p_es; int pts; TYPE_2__ fmt; } ;
typedef TYPE_4__ demux_sys_t ;
struct TYPE_16__ {scalar_t__ i_pts; scalar_t__ i_nb_samples; scalar_t__ i_dts; int p_buffer; } ;
typedef TYPE_5__ block_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ) ;
 TYPE_5__* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int ,int *,TYPE_5__*) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ,int ,scalar_t__) ;
 int FUNC_8 (TYPE_3__*,char*) ;
 TYPE_5__* FUNC_9 (int ,scalar_t__) ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11( demux_t *VAR_6 )
{
    demux_sys_t *VAR_7 = VAR_6->p_sys;
    block_t *VAR_8;
    int64_t VAR_9;

    if( VAR_7->i_silence_countdown == 0 )
    {
        int64_t VAR_10 = FUNC_10( VAR_6->s );
        if( VAR_10 >= VAR_7->i_block_end )
        {
            if( FUNC_0( VAR_6 ) != VAR_4 )
                return VAR_1;
            return VAR_2;
        }

        VAR_9 = ( VAR_7->i_block_end - VAR_10 )
                      / VAR_7->fmt.audio.i_bytes_per_frame;

        if( VAR_9 > VAR_0 )
            VAR_9 = VAR_0;

        VAR_8 = FUNC_9( VAR_6->s,
                                    VAR_7->fmt.audio.i_bytes_per_frame
                                    * VAR_9 );
        if( VAR_8 == ((void*)0) )
        {
            FUNC_8( VAR_6, "cannot read data" );
            return VAR_1;
        }
    }
    else
    {
        VAR_9 = VAR_7->i_silence_countdown;
        if( VAR_9 > VAR_0 )
            VAR_9 = VAR_0;

        VAR_8 = FUNC_2( VAR_9 );
        if( VAR_8 == ((void*)0) )
            return VAR_3;

        FUNC_7( VAR_8->p_buffer, 0, VAR_9 );
        VAR_7->i_silence_countdown -= VAR_9;
    }

    VAR_8->i_dts = VAR_8->i_pts = VAR_5 + FUNC_3( &VAR_7->pts );
    VAR_8->i_nb_samples = VAR_9 * VAR_7->fmt.audio.i_frame_length;
    FUNC_4( &VAR_7->pts, VAR_8->i_nb_samples );
    FUNC_6( VAR_6->out, VAR_8->i_pts );
    FUNC_1(VAR_7->p_es != ((void*)0));
    FUNC_5( VAR_6->out, VAR_7->p_es, VAR_8 );

    return VAR_2;
}
