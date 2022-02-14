
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_6__ {size_t last_deleted; size_t last_added; size_t total_size; int timeout; TYPE_1__* entries; } ;
struct TYPE_5__ {int time; } ;
typedef TYPE_2__ Ping_Array ;


 int FUNC_0 (TYPE_2__*,size_t) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(Ping_Array *VAR_0)
{
    while (VAR_0->last_deleted != VAR_0->last_added) {
        uint32_t VAR_1 = VAR_0->last_deleted % VAR_0->total_size;

        if (!FUNC_1(VAR_0->entries[VAR_1].time, VAR_0->timeout))
            break;

        FUNC_0(VAR_0, VAR_1);
        ++VAR_0->last_deleted;
    }
}
