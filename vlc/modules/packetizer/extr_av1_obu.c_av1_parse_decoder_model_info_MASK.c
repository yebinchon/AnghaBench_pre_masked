
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct av1_decoder_model_info_s {void* frame_presentation_time_length_minus_1; void* buffer_removal_time_length_minus_1; void* num_units_in_decoding_tick; void* buffer_delay_length_minus_1; } ;
typedef int bs_t ;


 void* FUNC_0 (int *,int) ;

__attribute__((used)) static bool FUNC_1(bs_t *VAR_0, struct av1_decoder_model_info_s *VAR_1)
{
    VAR_1->buffer_delay_length_minus_1 = FUNC_0(VAR_0, 5);
    VAR_1->num_units_in_decoding_tick = FUNC_0(VAR_0, 32);
    VAR_1->buffer_removal_time_length_minus_1 = FUNC_0(VAR_0, 5);
    VAR_1->frame_presentation_time_length_minus_1 = FUNC_0(VAR_0, 5);
    return 1;
}
