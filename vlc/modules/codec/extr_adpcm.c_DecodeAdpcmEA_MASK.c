
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int int_fast8_t ;
typedef int int_fast32_t ;
typedef int int32_t ;
typedef int int16_t ;
struct TYPE_6__ {unsigned int i_channels; } ;
struct TYPE_7__ {TYPE_1__ audio; } ;
struct TYPE_8__ {TYPE_2__ fmt_out; TYPE_4__* p_sys; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_9__ {size_t i_block; int* prev; } ;
typedef TYPE_4__ decoder_sys_t ;


 int FUNC_0 (int,int,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1( decoder_t *VAR_1, int16_t *VAR_2,
                           uint8_t *VAR_3 )
{
    static const int16_t VAR_4[]=
    {
        0x0000, 0x00F0, 0x01CC, 0x0188, 0x0000, 0x0000, 0xFF30, 0xFF24,
        0x0000, 0x0001, 0x0003, 0x0004, 0x0007, 0x0008, 0x000A, 0x000B,
        0x0000, 0xFFFF, 0xFFFD, 0xFFFC,
    };
    decoder_sys_t *VAR_5 = VAR_1->p_sys;
    int_fast32_t VAR_6[VAR_0], VAR_7[VAR_0];
    int_fast8_t VAR_8[VAR_0];

    unsigned VAR_9 = VAR_1->fmt_out.audio.i_channels;
    const uint8_t *VAR_10 = &VAR_3[VAR_5->i_block];
    int16_t *VAR_11 = VAR_5->prev;
    int16_t *VAR_12 = VAR_11 + VAR_9;

    for (unsigned VAR_13 = 0; VAR_13 < VAR_9; VAR_13++)
    {
        uint8_t VAR_14 = VAR_3[VAR_13];

        VAR_6[VAR_13] = VAR_4[VAR_14 >> 4];
        VAR_7[VAR_13] = VAR_4[(VAR_14 >> 4) + 4];
        VAR_8[VAR_13] = (VAR_14 & 0xf) + 8;
    }

    for (VAR_3 += VAR_9; VAR_3 < VAR_10; VAR_3 += VAR_9)
    {
        union { uint32_t u; int32_t i; } VAR_15;

        for (unsigned VAR_16 = 0; VAR_16 < VAR_9; VAR_16++)
        {
            VAR_15.u = (VAR_3[VAR_16] & 0xf0u) << 24u;
            VAR_15.i >>= VAR_8[VAR_16];
            VAR_15.i = (VAR_15.i + VAR_12[VAR_16] * VAR_6[VAR_16] + VAR_11[VAR_16] * VAR_7[VAR_16] + 0x80) >> 8;
            FUNC_0(VAR_15.i, -32768, 32767);
            VAR_11[VAR_16] = VAR_12[VAR_16];
            VAR_12[VAR_16] = VAR_15.i;

            *(VAR_2++) = VAR_15.i;
        }

        for (unsigned VAR_17 = 0; VAR_17 < VAR_9; VAR_17++)
        {
            VAR_15.u = (VAR_3[VAR_17] & 0x0fu) << 28u;
            VAR_15.i >>= VAR_8[VAR_17];
            VAR_15.i = (VAR_15.i + VAR_12[VAR_17] * VAR_6[VAR_17] + VAR_11[VAR_17] * VAR_7[VAR_17] + 0x80) >> 8;
            FUNC_0(VAR_15.i, -32768, 32767);
            VAR_11[VAR_17] = VAR_12[VAR_17];
            VAR_12[VAR_17] = VAR_15.i;

            *(VAR_2++) = VAR_15.i;
        }
    }
}
