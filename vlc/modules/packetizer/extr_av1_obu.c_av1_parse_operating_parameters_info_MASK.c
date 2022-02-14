
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct av1_operating_parameters_info_s {int low_delay_mode_flag; void* encoder_buffer_delay; void* decoder_buffer_delay; } ;
typedef scalar_t__ obu_u8_t ;
typedef int bs_t ;


 void* FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(bs_t *VAR_0,
                                                struct av1_operating_parameters_info_s *VAR_1,
                                                obu_u8_t VAR_2)
{
    VAR_1->decoder_buffer_delay = FUNC_0(VAR_0, 1 + VAR_2);
    VAR_1->encoder_buffer_delay = FUNC_0(VAR_0, 1 + VAR_2);
    VAR_1->low_delay_mode_flag = FUNC_1(VAR_0);
    return 1;
}
