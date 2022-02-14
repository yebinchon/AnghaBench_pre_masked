
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint64_t ;
typedef size_t uint32_t ;
struct TYPE_6__ {size_t total_size; TYPE_1__* entries; int timeout; } ;
struct TYPE_5__ {size_t ping_id; size_t length; int * data; int time; } ;
typedef TYPE_2__ Ping_Array ;


 int FUNC_0 (TYPE_2__*,size_t) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *,size_t) ;

int FUNC_3(uint8_t *VAR_0, uint32_t VAR_1, Ping_Array *VAR_2, uint64_t VAR_3)
{
    if (VAR_3 == 0)
        return -1;

    uint32_t VAR_4 = VAR_3 % VAR_2->total_size;

    if (VAR_2->entries[VAR_4].ping_id != VAR_3)
        return -1;

    if (FUNC_1(VAR_2->entries[VAR_4].time, VAR_2->timeout))
        return -1;

    if (VAR_2->entries[VAR_4].length > VAR_1)
        return -1;

    if (VAR_2->entries[VAR_4].data == ((void*)0))
        return -1;

    FUNC_2(VAR_0, VAR_2->entries[VAR_4].data, VAR_2->entries[VAR_4].length);
    uint32_t VAR_5 = VAR_2->entries[VAR_4].length;
    FUNC_0(VAR_2, VAR_4);
    return VAR_5;
}
