
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ timeout; scalar_t__ total_size; scalar_t__ last_added; scalar_t__ last_deleted; int * entries; } ;
typedef int Ping_Array_Entry ;
typedef TYPE_1__ Ping_Array ;


 int * FUNC_0 (scalar_t__,int) ;

int FUNC_1(Ping_Array *VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
    if (VAR_1 == 0 || VAR_2 == 0 || VAR_0 == ((void*)0))
        return -1;

    VAR_0->entries = FUNC_0(VAR_1, sizeof(Ping_Array_Entry));

    if (VAR_0->entries == ((void*)0))
        return -1;

    VAR_0->last_deleted = VAR_0->last_added = 0;
    VAR_0->total_size = VAR_1;
    VAR_0->timeout = VAR_2;
    return 0;
}
