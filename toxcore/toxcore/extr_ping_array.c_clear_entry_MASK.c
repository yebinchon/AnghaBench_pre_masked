
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_5__ {TYPE_1__* entries; } ;
struct TYPE_4__ {scalar_t__ ping_id; scalar_t__ time; scalar_t__ length; int * data; } ;
typedef TYPE_2__ Ping_Array ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(Ping_Array *VAR_0, uint32_t VAR_1)
{
    FUNC_0(VAR_0->entries[VAR_1].data);
    VAR_0->entries[VAR_1].data = ((void*)0);
    VAR_0->entries[VAR_1].length =
        VAR_0->entries[VAR_1].time =
            VAR_0->entries[VAR_1].ping_id = 0;
}
