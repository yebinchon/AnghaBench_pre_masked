
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_3__ {size_t buffer_start; size_t buffer_end; int ** buffer; } ;
typedef TYPE_1__ Packets_Array ;
typedef int Packet_Data ;


 size_t VAR_0 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_2(Packets_Array *VAR_1, uint32_t VAR_2, const Packet_Data *VAR_3)
{
    if (VAR_2 - VAR_1->buffer_start > VAR_0)
        return -1;

    uint32_t VAR_4 = VAR_2 % VAR_0;

    if (VAR_1->buffer[VAR_4])
        return -1;

    Packet_Data *VAR_5 = FUNC_0(sizeof(Packet_Data));

    if (VAR_5 == ((void*)0))
        return -1;

    FUNC_1(VAR_5, VAR_3, sizeof(Packet_Data));
    VAR_1->buffer[VAR_4] = VAR_5;

    if ((VAR_2 - VAR_1->buffer_start) >= (VAR_1->buffer_end - VAR_1->buffer_start))
        VAR_1->buffer_end = VAR_2 + 1;

    return 0;
}
