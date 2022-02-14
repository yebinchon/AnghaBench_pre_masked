
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int out; TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_10__ {int channels; int sample_freq; } ;
struct TYPE_12__ {int i_position; int p_es; TYPE_1__ info; int decoder; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_13__ {int i_buffer; scalar_t__ i_dts; scalar_t__ i_pts; scalar_t__ p_buffer; } ;
typedef TYPE_4__ block_t ;
typedef int MPC_SAMPLE_FORMAT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_4__* FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,int ,TYPE_4__*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int *,int *,int *,int *) ;
 scalar_t__ FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6( demux_t *VAR_5 )
{
    demux_sys_t *VAR_6 = VAR_5->p_sys;
    block_t *VAR_7;
    int VAR_8;

    VAR_7 = FUNC_0( VAR_5,
                        VAR_0*sizeof(MPC_SAMPLE_FORMAT) );
    if( !VAR_7 )
        return VAR_1;

    VAR_8 = FUNC_4( &VAR_6->decoder,
                                (MPC_SAMPLE_FORMAT*)VAR_7->p_buffer,
                                ((void*)0), ((void*)0) );
    if( VAR_8 <= 0 )
    {
        FUNC_1( VAR_7 );
        return VAR_8 < 0 ? VAR_1 : VAR_2;
    }


    VAR_7->i_buffer = VAR_8 * sizeof(MPC_SAMPLE_FORMAT) * VAR_6->info.channels;
    VAR_7->i_dts = VAR_7->i_pts =
            VAR_4 + FUNC_5(VAR_6->i_position, VAR_6->info.sample_freq);

    FUNC_3( VAR_5->out, VAR_7->i_dts );

    FUNC_2( VAR_5->out, VAR_6->p_es, VAR_7 );


    VAR_6->i_position += VAR_8;

    return VAR_3;
}
