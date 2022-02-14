
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int out; TYPE_4__* p_sys; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_10__ {int i_bitspersample; int i_channels; int i_rate; } ;
struct TYPE_11__ {TYPE_1__ audio; } ;
struct TYPE_13__ {int pts; int es; int f; TYPE_2__ fmt; } ;
typedef TYPE_4__ demux_sys_t ;
struct TYPE_14__ {int i_buffer; int i_pts; int i_dts; int p_buffer; } ;
typedef TYPE_5__ block_t ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int const) ;
 int FUNC_5 (int ,int ,TYPE_5__*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7( demux_t *VAR_3 )
{
    demux_sys_t *VAR_4 = VAR_3->p_sys;
    block_t *VAR_5;
    const int VAR_6 = ( VAR_4->fmt.audio.i_bitspersample / 8 ) *
                       VAR_4->fmt.audio.i_channels;

    VAR_5 = FUNC_1( VAR_4->fmt.audio.i_rate / 10 * VAR_6 );
    if( !VAR_5 )
        return VAR_0;

    const int VAR_7 = FUNC_0( VAR_4->f, VAR_5->p_buffer, VAR_5->i_buffer );
    if( VAR_7 <= 0 )
    {

        FUNC_2( VAR_5 );
        return VAR_1;
    }
    VAR_5->i_buffer = VAR_7;
    VAR_5->i_dts =
    VAR_5->i_pts = FUNC_3( &VAR_4->pts );

    FUNC_6( VAR_3->out, VAR_5->i_pts );
    FUNC_5( VAR_3->out, VAR_4->es, VAR_5 );
    FUNC_4( &VAR_4->pts, VAR_7 / VAR_6 );
    return VAR_2;
}
