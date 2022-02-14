
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef size_t uint32_t ;
typedef int uint16_t ;
struct File_Transfers {scalar_t__ status; int id; int paused; scalar_t__ slots_allocated; scalar_t__ requested; scalar_t__ transferred; int size; } ;
typedef size_t int32_t ;
struct TYPE_7__ {TYPE_1__* friendlist; } ;
struct TYPE_6__ {int num_sending_files; struct File_Transfers* file_sending; } ;
typedef TYPE_2__ Messenger ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_2__ const*,size_t,size_t,size_t,int ,int const*,int const*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__ const*,size_t) ;
 int FUNC_2 (int ,int const*,int ) ;

long int FUNC_3(const Messenger *VAR_6, int32_t VAR_7, uint32_t VAR_8, uint64_t VAR_9,
                        const uint8_t *VAR_10, const uint8_t *VAR_11, uint16_t VAR_12)
{
    if (FUNC_1(VAR_6, VAR_7))
        return -1;

    if (VAR_12 > VAR_5)
        return -2;

    uint32_t VAR_13;

    for (VAR_13 = 0; VAR_13 < VAR_4; ++VAR_13) {
        if (VAR_6->friendlist[VAR_7].file_sending[VAR_13].status == VAR_0)
            break;
    }

    if (VAR_13 == VAR_4)
        return -3;

    if (FUNC_0(VAR_6, VAR_7, VAR_13, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12) == 0)
        return -4;

    struct File_Transfers *VAR_14 = &VAR_6->friendlist[VAR_7].file_sending[VAR_13];
    VAR_14->status = VAR_1;
    VAR_14->size = VAR_9;
    VAR_14->transferred = 0;
    VAR_14->requested = 0;
    VAR_14->slots_allocated = 0;
    VAR_14->paused = VAR_3;
    FUNC_2(VAR_14->id, VAR_10, VAR_2);

    ++VAR_6->friendlist[VAR_7].num_sending_files;

    return VAR_13;
}
