
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_14__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ sout_stream_t ;
struct TYPE_15__ {int (* pf_audio_postrender_callback ) (int ,int *,int,int ,int,int,int,int ) ;int (* pf_audio_prerender_callback ) (int ,int **,int) ;} ;
typedef TYPE_4__ sout_stream_sys_t ;
struct TYPE_12__ {int i_channels; int i_bitspersample; int i_rate; } ;
struct TYPE_13__ {TYPE_1__ audio; } ;
struct TYPE_16__ {TYPE_2__ format; int p_data; } ;
typedef TYPE_5__ sout_stream_id_sys_t ;
struct TYPE_17__ {int i_buffer; int i_pts; int p_buffer; } ;
typedef TYPE_6__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 int FUNC_4 (int ,int **,int) ;
 int FUNC_5 (int ,int *,int,int ,int,int,int,int ) ;

__attribute__((used)) static int FUNC_6( sout_stream_t *VAR_2, void *VAR_3, block_t *VAR_4 )
{
    sout_stream_sys_t *VAR_5 = VAR_2->p_sys;
    sout_stream_id_sys_t *VAR_6 = (sout_stream_id_sys_t *)VAR_3;
    int VAR_7;
    uint8_t* VAR_8 = ((void*)0);
    int VAR_9 = 0;

    VAR_7 = VAR_4->i_buffer;
    if (VAR_6->format.audio.i_channels == 0)
    {
        FUNC_3( VAR_2, "No buffer given!" );
        FUNC_0( VAR_4 );
        return VAR_0;
    }

    VAR_9 = VAR_7 / ( ( VAR_6->format.audio.i_bitspersample / 8 ) * VAR_6->format.audio.i_channels );

    VAR_5->pf_audio_prerender_callback( VAR_6->p_data, &VAR_8, VAR_7 );
    if (!VAR_8)
    {
        FUNC_2( VAR_2, "No buffer given!" );
        FUNC_0( VAR_4 );
        return VAR_0;
    }


    FUNC_1( VAR_8, VAR_4->p_buffer, VAR_7 );

    VAR_5->pf_audio_postrender_callback( VAR_6->p_data, VAR_8,
                                         VAR_6->format.audio.i_channels, VAR_6->format.audio.i_rate, VAR_9,
                                         VAR_6->format.audio.i_bitspersample, VAR_7, VAR_4->i_pts );
    FUNC_0( VAR_4 );
    return VAR_1;
}
