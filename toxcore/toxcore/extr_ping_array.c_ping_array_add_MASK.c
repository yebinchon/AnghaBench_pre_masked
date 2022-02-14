
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint64_t ;
typedef size_t uint32_t ;
struct TYPE_7__ {size_t last_added; size_t total_size; size_t last_deleted; TYPE_1__* entries; } ;
struct TYPE_6__ {size_t length; size_t ping_id; int time; int * data; } ;
typedef TYPE_2__ Ping_Array ;


 int FUNC_0 (TYPE_2__*,size_t) ;
 int * FUNC_1 (size_t) ;
 int FUNC_2 (int *,int const*,size_t) ;
 int FUNC_3 (TYPE_2__*) ;
 size_t FUNC_4 () ;
 int FUNC_5 () ;

uint64_t FUNC_6(Ping_Array *VAR_0, const uint8_t *VAR_1, uint32_t VAR_2)
{
    FUNC_3(VAR_0);
    uint32_t VAR_3 = VAR_0->last_added % VAR_0->total_size;

    if (VAR_0->entries[VAR_3].data != ((void*)0)) {
        VAR_0->last_deleted = VAR_0->last_added - VAR_0->total_size;
        FUNC_0(VAR_0, VAR_3);
    }

    VAR_0->entries[VAR_3].data = FUNC_1(VAR_2);

    if (VAR_0->entries[VAR_3].data == ((void*)0))
        return 0;

    FUNC_2(VAR_0->entries[VAR_3].data, VAR_1, VAR_2);
    VAR_0->entries[VAR_3].length = VAR_2;
    VAR_0->entries[VAR_3].time = FUNC_5();
    ++VAR_0->last_added;
    uint64_t VAR_4 = FUNC_4();
    VAR_4 /= VAR_0->total_size;
    VAR_4 *= VAR_0->total_size;
    VAR_4 += VAR_3;

    if (VAR_4 == 0)
        VAR_4 += VAR_0->total_size;

    VAR_0->entries[VAR_3].ping_id = VAR_4;
    return VAR_4;
}
