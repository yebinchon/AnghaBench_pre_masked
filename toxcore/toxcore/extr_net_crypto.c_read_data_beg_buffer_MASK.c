
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int int64_t ;
struct TYPE_3__ {size_t buffer_end; size_t buffer_start; int ** buffer; } ;
typedef TYPE_1__ Packets_Array ;
typedef int Packet_Data ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static int64_t FUNC_2(Packets_Array *VAR_1, Packet_Data *VAR_2)
{
    if (VAR_1->buffer_end == VAR_1->buffer_start)
        return -1;

    uint32_t VAR_3 = VAR_1->buffer_start % VAR_0;

    if (!VAR_1->buffer[VAR_3])
        return -1;

    FUNC_1(VAR_2, VAR_1->buffer[VAR_3], sizeof(Packet_Data));
    uint32_t VAR_4 = VAR_1->buffer_start;
    ++VAR_1->buffer_start;
    FUNC_0(VAR_1->buffer[VAR_3]);
    VAR_1->buffer[VAR_3] = ((void*)0);
    return VAR_4;
}
