
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct av1_color_config_s {int color_primaries; int transfer_characteristics; int matrix_coefficients; int subsampling_x; void* separate_uv_delta_q; void* chroma_sample_position; void* subsampling_y; void* color_range; void* mono_chrome; void* color_description_present_flag; void* high_bitdepth; void* twelve_bit; } ;
typedef int obu_u3_t ;
typedef int bs_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* FUNC_0 (int *,int) ;
 void* FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(bs_t *VAR_2,
                                   struct av1_color_config_s *VAR_3,
                                   obu_u3_t VAR_4)
{
    VAR_3->high_bitdepth = FUNC_1(VAR_2);
    if(VAR_4 <= 2)
    {
        if(VAR_3->high_bitdepth)
            VAR_3->twelve_bit = FUNC_1(VAR_2);
        if(VAR_4 != 1)
            VAR_3->mono_chrome = FUNC_1(VAR_2);
    }
    const uint8_t VAR_5 = VAR_3->twelve_bit ? 12 : ((VAR_3->high_bitdepth) ? 10 : 8);

    VAR_3->color_description_present_flag = FUNC_1(VAR_2);
    if(VAR_3->color_description_present_flag)
    {
        VAR_3->color_primaries = FUNC_0(VAR_2, 8);
        VAR_3->transfer_characteristics = FUNC_0(VAR_2, 8);
        VAR_3->matrix_coefficients = FUNC_0(VAR_2, 8);
    }
    else
    {
        VAR_3->color_primaries = 2;
        VAR_3->transfer_characteristics = 2;
        VAR_3->matrix_coefficients = 2;
    }

    if(VAR_3->mono_chrome)
    {
        VAR_3->color_range = FUNC_1(VAR_2) ? VAR_0 : VAR_1;
    }
    else if( VAR_3->color_primaries == 1 &&
             VAR_3->transfer_characteristics == 13 &&
             VAR_3->matrix_coefficients == 0 )
    {
        VAR_3->color_range = VAR_0;
    }
    else
    {
        VAR_3->color_range = FUNC_1(VAR_2) ? VAR_0 : VAR_1;
        if(VAR_4 > 1)
        {
            if(VAR_5 == 12)
            {
                VAR_3->subsampling_x = FUNC_1(VAR_2);
                if(VAR_3->subsampling_x)
                    VAR_3->subsampling_y = FUNC_1(VAR_2);
            }
            else
            {
                VAR_3->subsampling_x = 1;
            }
        }
        if(VAR_3->subsampling_x && VAR_3->subsampling_y)
            VAR_3->chroma_sample_position = FUNC_0(VAR_2, 2);
    }

    VAR_3->separate_uv_delta_q = FUNC_1(VAR_2);

    return 1;
}
