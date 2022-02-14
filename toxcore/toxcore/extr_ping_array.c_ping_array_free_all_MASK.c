
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int last_deleted; int last_added; int total_size; int * entries; } ;
typedef TYPE_1__ Ping_Array ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *) ;

void FUNC_2(Ping_Array *VAR_0)
{
    while (VAR_0->last_deleted != VAR_0->last_added) {
        uint32_t VAR_1 = VAR_0->last_deleted % VAR_0->total_size;
        FUNC_0(VAR_0, VAR_1);
        ++VAR_0->last_deleted;
    }

    FUNC_1(VAR_0->entries);
    VAR_0->entries = ((void*)0);
}
