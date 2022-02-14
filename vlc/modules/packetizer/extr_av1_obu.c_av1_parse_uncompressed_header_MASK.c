
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct av1_uncompressed_header_s {int show_frame; void* frame_type; void* frame_presentation_time; void* show_existing_frame; } ;
typedef void* obu_u3_t ;
typedef void* obu_u32_t ;
typedef int bs_t ;
struct TYPE_6__ {int frame_presentation_time_length_minus_1; } ;
struct TYPE_5__ {int equal_picture_interval; } ;
struct TYPE_7__ {int additional_frame_id_length_minus_1; int delta_frame_id_length_minus_2; scalar_t__ film_grain_params_present; scalar_t__ frame_id_numbers_present_flag; TYPE_2__ decoder_model_info; TYPE_1__ timing_info; scalar_t__ decoder_model_info_present_flag; scalar_t__ reduced_still_picture_header; } ;
typedef TYPE_3__ av1_OBU_sequence_header_t ;


 void* VAR_0 ;
 int FUNC_0 (void* const) ;
 void* FUNC_1 (int *,int const) ;
 void* FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(bs_t *VAR_1, struct av1_uncompressed_header_s *VAR_2,
                                          const av1_OBU_sequence_header_t *VAR_3)
{
    if(VAR_3->reduced_still_picture_header)
    {
        VAR_2->frame_type = VAR_0;
        VAR_2->show_frame = 1;
    }
    else
    {
        VAR_2->show_existing_frame = FUNC_2(VAR_1);
        if(VAR_2->show_existing_frame)
        {
            const obu_u3_t VAR_4 = FUNC_1(VAR_1, 3);
            FUNC_0(VAR_4);
            if(VAR_3->decoder_model_info_present_flag && !VAR_3->timing_info.equal_picture_interval)
            {

                VAR_2->frame_presentation_time =
                        FUNC_1(VAR_1, 1 + VAR_3->decoder_model_info.frame_presentation_time_length_minus_1);
            }
            if(VAR_3->frame_id_numbers_present_flag)
            {
                const uint8_t VAR_5 = VAR_3->additional_frame_id_length_minus_1 +
                                      VAR_3->delta_frame_id_length_minus_2 + 3;
                const obu_u32_t VAR_6 = FUNC_1(VAR_1, VAR_5);
                FUNC_0(VAR_6);
            }
            if(VAR_3->film_grain_params_present)
            {

            }
        }
        VAR_2->frame_type = FUNC_1(VAR_1, 2);
        VAR_2->show_frame = FUNC_2(VAR_1);
    }

    return 1;
}
