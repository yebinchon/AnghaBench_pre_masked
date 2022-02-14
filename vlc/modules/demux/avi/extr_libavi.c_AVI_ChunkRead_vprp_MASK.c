
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int stream_t ;
struct TYPE_4__ {int i_video_standard; int i_video_format_token; TYPE_1__* field_info; int i_nb_fields_per_frame; int i_frame_height_in_pixels; int i_frame_width_in_pixels; int i_frame_aspect_ratio; int i_v_total_in_lines; int i_h_total_in_t; int i_vertical_refresh; } ;
typedef TYPE_2__ avi_chunk_vprp_t ;
typedef int avi_chunk_t ;
struct TYPE_3__ {int i_video_y_valid_start_line; int i_video_x_offset_in_t; int i_valid_bm_y_offset; int i_valid_bm_x_offset; int i_valid_bm_width; int i_valid_bm_height; int i_compressed_bm_width; int i_compressed_bm_height; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 unsigned int FUNC_2 (int ,int) ;
 int FUNC_3 (int *,char*,int ,int ) ;

__attribute__((used)) static int FUNC_4( stream_t *VAR_2, avi_chunk_t *VAR_3 )
{
    avi_chunk_vprp_t *VAR_4 = (avi_chunk_vprp_t*)VAR_3;

    VAR_0;

    FUNC_0( VAR_4->i_video_format_token );
    FUNC_0( VAR_4->i_video_standard );
    FUNC_0( VAR_4->i_vertical_refresh );
    FUNC_0( VAR_4->i_h_total_in_t );
    FUNC_0( VAR_4->i_v_total_in_lines );
    FUNC_0( VAR_4->i_frame_aspect_ratio );
    FUNC_0( VAR_4->i_frame_width_in_pixels );
    FUNC_0( VAR_4->i_frame_height_in_pixels );
    FUNC_0( VAR_4->i_nb_fields_per_frame );
    for( unsigned VAR_5 = 0; VAR_5 < FUNC_2( VAR_4->i_nb_fields_per_frame, 2 ); VAR_5++ )
    {
        FUNC_0( VAR_4->field_info[VAR_5].i_compressed_bm_height );
        FUNC_0( VAR_4->field_info[VAR_5].i_compressed_bm_width );
        FUNC_0( VAR_4->field_info[VAR_5].i_valid_bm_height );
        FUNC_0( VAR_4->field_info[VAR_5].i_valid_bm_width );
        FUNC_0( VAR_4->field_info[VAR_5].i_valid_bm_x_offset );
        FUNC_0( VAR_4->field_info[VAR_5].i_valid_bm_y_offset );
        FUNC_0( VAR_4->field_info[VAR_5].i_video_x_offset_in_t );
        FUNC_0( VAR_4->field_info[VAR_5].i_video_y_valid_start_line );
    }





    FUNC_1( VAR_1 );
}
