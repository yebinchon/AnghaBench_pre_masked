
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct audio_buf_info {scalar_t__ bytes; } ;
struct TYPE_8__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_9__ {int i_sample_rate; scalar_t__ b_stereo; int i_fd; TYPE_3__* p_block; int i_max_frame_size; } ;
typedef TYPE_2__ demux_sys_t ;
struct TYPE_10__ {int i_buffer; scalar_t__ i_dts; scalar_t__ i_pts; int p_buffer; } ;
typedef TYPE_3__ block_t ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,struct audio_buf_info*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (int,int) ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static block_t* FUNC_6( demux_t *VAR_1 )
{
    demux_sys_t *VAR_2 = VAR_1->p_sys;
    struct audio_buf_info VAR_3;
    int VAR_4 = 0, VAR_5;
    block_t *VAR_6;

    if( VAR_2->p_block ) VAR_6 = VAR_2->p_block;
    else VAR_6 = FUNC_0( VAR_2->i_max_frame_size );

    if( !VAR_6 )
    {
        FUNC_2( VAR_1, "cannot get block" );
        return ((void*)0);
    }

    VAR_2->p_block = VAR_6;

    VAR_4 = FUNC_3( VAR_2->i_fd, VAR_6->p_buffer,
                VAR_2->i_max_frame_size );

    if( VAR_4 <= 0 ) return ((void*)0);

    VAR_6->i_buffer = VAR_4;
    VAR_2->p_block = ((void*)0);


    VAR_5 = VAR_4;
    if( FUNC_1( VAR_2->i_fd, VAR_0, &VAR_3 ) == 0 )
    {
        VAR_5 += VAR_3.bytes;
    }


    VAR_6->i_pts = VAR_6->i_dts =
        FUNC_5() - FUNC_4(VAR_5,
                        2 * ( VAR_2->b_stereo ? 2 : 1) * VAR_2->i_sample_rate);

    return VAR_6;
}
