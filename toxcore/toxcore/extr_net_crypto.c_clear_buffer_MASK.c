
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_3__ {size_t buffer_start; size_t buffer_end; int ** buffer; } ;
typedef TYPE_1__ Packets_Array ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(Packets_Array *VAR_1)
{
    uint32_t VAR_2;

    for (VAR_2 = VAR_1->buffer_start; VAR_2 != VAR_1->buffer_end; ++VAR_2) {
        uint32_t VAR_3 = VAR_2 % VAR_0;

        if (VAR_1->buffer[VAR_3]) {
            FUNC_0(VAR_1->buffer[VAR_3]);
            VAR_1->buffer[VAR_3] = ((void*)0);
        }
    }

    VAR_1->buffer_start = VAR_2;
    return 0;
}
