
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_8__ {int out; int s; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_9__ {unsigned int i_block_frames; scalar_t__ i_data_size; unsigned int i_frame_size; int pts; int p_es; } ;
typedef TYPE_2__ demux_sys_t ;
struct TYPE_10__ {unsigned int i_buffer; int i_pts; int i_dts; } ;
typedef TYPE_3__ block_t ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (int ,int ,TYPE_3__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 TYPE_3__* FUNC_5 (int ,unsigned int) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7( demux_t *VAR_4 )
{
    demux_sys_t *VAR_5 = VAR_4->p_sys;
    block_t *VAR_6;
    int64_t VAR_7 = FUNC_6( VAR_4->s );
    unsigned VAR_8 = VAR_5->i_block_frames;

    if( VAR_5->i_data_size > 0 &&
        (VAR_7 - VAR_1) >= VAR_5->i_data_size )
    {
        return VAR_2;
    }

    VAR_6 = FUNC_5( VAR_4->s, VAR_5->i_frame_size * VAR_8 );
    if( VAR_6 == ((void*)0) )
    {
        FUNC_4( VAR_4, "cannot read data" );
        return VAR_2;
    }

    VAR_8 = VAR_6->i_buffer / VAR_5->i_frame_size;
    VAR_6->i_dts = VAR_6->i_pts = FUNC_0( &VAR_5->pts );
    FUNC_3( VAR_4->out, VAR_6->i_pts );
    FUNC_2( VAR_4->out, VAR_5->p_es, VAR_6 );

    FUNC_1( &VAR_5->pts, VAR_8 * VAR_0 );

    return VAR_3;
}
