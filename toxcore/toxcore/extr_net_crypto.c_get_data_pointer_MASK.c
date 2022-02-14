
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ buffer_end; scalar_t__ buffer_start; int ** buffer; } ;
typedef TYPE_1__ Packets_Array ;
typedef int Packet_Data ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(const Packets_Array *VAR_1, Packet_Data **VAR_2, uint32_t VAR_3)
{
    uint32_t VAR_4 = VAR_1->buffer_end - VAR_1->buffer_start;

    if (VAR_1->buffer_end - VAR_3 > VAR_4 || VAR_3 - VAR_1->buffer_start >= VAR_4)
        return -1;

    uint32_t VAR_5 = VAR_3 % VAR_0;

    if (!VAR_1->buffer[VAR_5])
        return 0;

    *VAR_2 = VAR_1->buffer[VAR_5];
    return 1;
}
