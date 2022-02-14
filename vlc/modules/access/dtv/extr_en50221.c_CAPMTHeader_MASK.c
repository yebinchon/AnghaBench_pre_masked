
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int system_ids_t ;
struct TYPE_3__ {int i_program_number; int i_version; int i_program_descriptors; int p_program_descriptors; } ;
typedef TYPE_1__ en50221_capmt_info_t ;


 int FUNC_0 (int ,int ,int const*,int*) ;
 int* FUNC_1 (int) ;

__attribute__((used)) static uint8_t *FUNC_2( const en50221_capmt_info_t *VAR_0,
                             const system_ids_t *VAR_1, uint8_t VAR_2,
                             size_t VAR_3, uint8_t VAR_4 )
{
    uint8_t *VAR_5;

    if ( VAR_3 )
        VAR_5 = FUNC_1( 7 + VAR_3 );
    else
        VAR_5 = FUNC_1( 6 );

    VAR_5[0] = VAR_2;
    VAR_5[1] = VAR_0->i_program_number >> 8;
    VAR_5[2] = VAR_0->i_program_number & 0xff;
    VAR_5[3] = ((VAR_0->i_version & 0x1f) << 1) | 0x1;

    if ( VAR_3 )
    {
        VAR_5[4] = (VAR_3 + 1) >> 8;
        VAR_5[5] = (VAR_3 + 1) & 0xff;
        VAR_5[6] = VAR_4;

        FUNC_0( VAR_0->p_program_descriptors,
                         VAR_0->i_program_descriptors,
                         VAR_1, &VAR_5[7] );
    }
    else
    {
        VAR_5[4] = 0;
        VAR_5[5] = 0;
    }

    return VAR_5;
}
