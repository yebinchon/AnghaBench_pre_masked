
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef size_t uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {scalar_t__ buffer_start; scalar_t__ buffer_end; int * buffer; } ;
typedef TYPE_1__ Packets_Array ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static int FUNC_0(uint8_t *VAR_2, uint16_t VAR_3, const Packets_Array *VAR_4)
{
    if (VAR_3 == 0)
        return -1;

    VAR_2[0] = VAR_1;

    uint16_t VAR_5 = 1;

    if (VAR_4->buffer_start == VAR_4->buffer_end)
        return VAR_5;

    if (VAR_3 <= VAR_5)
        return VAR_5;

    uint32_t VAR_6, VAR_7 = 1;

    for (VAR_6 = VAR_4->buffer_start; VAR_6 != VAR_4->buffer_end; ++VAR_6) {
        uint32_t VAR_8 = VAR_6 % VAR_0;

        if (!VAR_4->buffer[VAR_8]) {
            VAR_2[VAR_5] = VAR_7;
            VAR_7 = 0;
            ++VAR_5;

            if (VAR_3 <= VAR_5)
                return VAR_5;

        } else if (VAR_7 == 255) {
            VAR_2[VAR_5] = 0;
            VAR_7 = 0;
            ++VAR_5;

            if (VAR_3 <= VAR_5)
                return VAR_5;
        }

        ++VAR_7;
    }

    return VAR_5;
}
