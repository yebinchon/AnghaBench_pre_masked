
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ buffer_start; scalar_t__ buffer_end; } ;
typedef TYPE_1__ Packets_Array ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(Packets_Array *VAR_1, uint32_t VAR_2)
{
    if ((VAR_2 - VAR_1->buffer_start) > VAR_0)
        return -1;

    if ((VAR_2 - VAR_1->buffer_end) > VAR_0)
        return -1;

    VAR_1->buffer_end = VAR_2;
    return 0;
}
