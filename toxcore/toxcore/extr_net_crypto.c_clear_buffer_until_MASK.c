
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ buffer_end; scalar_t__ buffer_start; int ** buffer; } ;
typedef TYPE_1__ Packets_Array ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(Packets_Array *VAR_1, uint32_t VAR_2)
{
    uint32_t VAR_3 = VAR_1->buffer_end - VAR_1->buffer_start;

    if (VAR_1->buffer_end - VAR_2 >= VAR_3 || VAR_2 - VAR_1->buffer_start > VAR_3)
        return -1;

    uint32_t VAR_4;

    for (VAR_4 = VAR_1->buffer_start; VAR_4 != VAR_2; ++VAR_4) {
        uint32_t VAR_5 = VAR_4 % VAR_0;

        if (VAR_1->buffer[VAR_5]) {
            FUNC_0(VAR_1->buffer[VAR_5]);
            VAR_1->buffer[VAR_5] = ((void*)0);
        }
    }

    VAR_1->buffer_start = VAR_4;
    return 0;
}
