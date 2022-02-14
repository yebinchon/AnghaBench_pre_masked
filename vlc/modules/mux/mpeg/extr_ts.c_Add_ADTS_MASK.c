
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int* p_extra; int i_extra; } ;
typedef TYPE_1__ es_format_t ;
struct TYPE_9__ {size_t i_buffer; int* p_buffer; } ;
typedef TYPE_2__ block_t ;


 size_t VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_2__*,size_t,size_t) ;

__attribute__((used)) static block_t *FUNC_1( block_t *VAR_1, const es_format_t *VAR_2 )
{


    const uint8_t *VAR_3 = VAR_2->p_extra;

    if( !VAR_1 || VAR_2->i_extra < 2 || !VAR_3 )
        return VAR_1;

    size_t VAR_4 = VAR_1->i_buffer + 7;
    int VAR_5 = ( (VAR_3[0] << 1) | (VAR_3[1] >> 7) ) & 0x0f;
    int VAR_6 = (VAR_3[0] >> 3) - 1;

    if( VAR_5 == 0x0f && VAR_2->i_extra < 5 )
        return VAR_1;

    int VAR_7 = (VAR_3[VAR_5 == 0x0f ? 4 : 1] >> 3) & 0x0f;

    block_t *VAR_8 = FUNC_0( VAR_1, 7,
                                            VAR_1->i_buffer );
    uint8_t *VAR_9 = VAR_8->p_buffer;


    VAR_9[0] = 0xff;
    VAR_9[1] = 0xf1;
    VAR_9[2] = (VAR_6 << 6) | ((VAR_5 & 0x0f) << 2) | ((VAR_7 >> 2) & 0x01) ;
    VAR_9[3] = (VAR_7 << 6) | ((VAR_4 >> 11) & 0x03);



    int VAR_10 = 0x7ff;



    VAR_9[4] = VAR_4 >> 3;
    VAR_9[5] = ((VAR_4 & 0x07) << 5) | ((VAR_10 >> 6) & 0x1f);
    VAR_9[6] = ((VAR_10 & 0x3f) << 2) ;

    return VAR_8;
}
