
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rows_minus_one; int columns_minus_one; void* output_height; void* output_width; } ;
union heif_derivation_data {TYPE_1__ ImageGrid; } ;
typedef int uint8_t ;


 void* FUNC_0 (int const*) ;
 void* FUNC_1 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2( const uint8_t *VAR_2, size_t VAR_3,
                                    union heif_derivation_data *VAR_4 )
{
    if( VAR_3 < 8 || VAR_2[0] != 0x00 )
        return VAR_0;

    uint8_t VAR_5 = ((VAR_2[1] & 0x01) + 1) << 1;

    VAR_4->ImageGrid.rows_minus_one = VAR_2[2];
    VAR_4->ImageGrid.columns_minus_one = VAR_2[3];
    if(VAR_5 == 2)
    {
        VAR_4->ImageGrid.output_width = FUNC_1(&VAR_2[4]);
        VAR_4->ImageGrid.output_height = FUNC_1(&VAR_2[6]);
    }
    else
    {
        if(VAR_3 < 12)
            return VAR_0;
        VAR_4->ImageGrid.output_width = FUNC_0(&VAR_2[4]);
        VAR_4->ImageGrid.output_height = FUNC_0(&VAR_2[8]);
    }
    return VAR_1;
}
