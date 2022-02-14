
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int h264_slice_t ;
typedef int h264_sequence_parameter_set_t ;


 int FUNC_0 (int const*,int const*,int,int,int) ;

uint8_t FUNC_1( const h264_sequence_parameter_set_t *VAR_0,
                         const h264_slice_t *VAR_1, uint8_t VAR_2,
                         int VAR_3, int VAR_4 )
{
    VAR_2 = FUNC_0( VAR_0, VAR_1, VAR_2, VAR_3, VAR_4 );

    const uint8_t VAR_5[9] = { 2, 1, 1, 2, 2, 3, 3, 4, 6 };
    return VAR_5[ VAR_2 ];
}
