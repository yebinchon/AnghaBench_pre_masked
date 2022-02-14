
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ i_right_samples; scalar_t__ i_left_samples; } ;
typedef TYPE_1__ sdi_audio_t ;
struct TYPE_7__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_8__ {int i_width; int i_height; TYPE_1__* p_audios; scalar_t__ p_u; scalar_t__ p_v; scalar_t__ p_y; TYPE_4__* p_current_picture; int i_block_size; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_9__ {scalar_t__ p_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2( demux_t *VAR_3 )
{
    demux_sys_t *VAR_4 = VAR_3->p_sys;

    VAR_4->p_current_picture = FUNC_0( VAR_4->i_block_size );
    if( FUNC_1( !VAR_4->p_current_picture ) )
        return VAR_1;
    VAR_4->p_y = VAR_4->p_current_picture->p_buffer;
    VAR_4->p_u = VAR_4->p_y + VAR_4->i_width * VAR_4->i_height;
    VAR_4->p_v = VAR_4->p_u + VAR_4->i_width * VAR_4->i_height / 4;

    for ( int VAR_5 = 0; VAR_5 < VAR_0; VAR_5++ )
    {
        sdi_audio_t *VAR_6 = &VAR_4->p_audios[VAR_5];
        VAR_6->i_left_samples = VAR_6->i_right_samples = 0;
    }
    return VAR_2;
}
