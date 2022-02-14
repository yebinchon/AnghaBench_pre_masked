
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int int64_t ;
struct TYPE_4__ {size_t buffer_end; int ** buffer; } ;
typedef TYPE_1__ Packets_Array ;
typedef int Packet_Data ;


 size_t VAR_0 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (int *,int const*,int) ;
 size_t FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int64_t FUNC_3(Packets_Array *VAR_1, const Packet_Data *VAR_2)
{
    if (FUNC_2(VAR_1) >= VAR_0)
        return -1;

    Packet_Data *VAR_3 = FUNC_0(sizeof(Packet_Data));

    if (VAR_3 == ((void*)0))
        return -1;

    FUNC_1(VAR_3, VAR_2, sizeof(Packet_Data));
    uint32_t VAR_4 = VAR_1->buffer_end;
    VAR_1->buffer[VAR_4 % VAR_0] = VAR_3;
    ++VAR_1->buffer_end;
    return VAR_4;
}
