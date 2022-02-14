
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {scalar_t__ d_fps; void* i_keyframe_distance; void* i_text_blocks; void* i_audio_blocks; void* i_video_blocks; scalar_t__ d_aspect; void* i_height; void* i_width; int version; int id; int i_mode; void* i_height_desired; void* i_width_desired; } ;
typedef TYPE_1__ header_t ;
struct TYPE_7__ {int s; } ;
typedef TYPE_2__ demux_t ;


 void* FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (TYPE_2__*,char*,int ,int ,void*,void*,scalar_t__,scalar_t__,void*,void*,void*,void*) ;
 int FUNC_4 (int ,int *,int) ;

__attribute__((used)) static int FUNC_5( demux_t *VAR_2, header_t *VAR_3 )
{
    uint8_t VAR_4[72];

    if( FUNC_4( VAR_2->s, VAR_4, 72 ) != 72 )
        return VAR_0;


    FUNC_2( VAR_3->id, &VAR_4[ 0], 12 );
    FUNC_2( VAR_3->version, &VAR_4[12], 5 );
    VAR_3->i_width = FUNC_0( &VAR_4[20] );
    VAR_3->i_height = FUNC_0( &VAR_4[24] );
    VAR_3->i_width_desired = FUNC_0( &VAR_4[28] );
    VAR_3->i_height_desired = FUNC_0( &VAR_4[32] );
    VAR_3->i_mode = VAR_4[36];
    FUNC_1( &VAR_3->d_aspect, &VAR_4[40] );
    FUNC_1( &VAR_3->d_fps, &VAR_4[48] );
    VAR_3->i_video_blocks = FUNC_0( &VAR_4[56] );
    VAR_3->i_audio_blocks = FUNC_0( &VAR_4[60] );
    VAR_3->i_text_blocks = FUNC_0( &VAR_4[64] );
    VAR_3->i_keyframe_distance = FUNC_0( &VAR_4[68] );







    return (VAR_3->d_fps) ? VAR_1 : VAR_0;
}
