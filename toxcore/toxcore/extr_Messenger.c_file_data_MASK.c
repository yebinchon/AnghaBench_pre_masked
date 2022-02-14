
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef size_t uint32_t ;
typedef scalar_t__ uint16_t ;
struct File_Transfers {scalar_t__ status; scalar_t__ size; scalar_t__ transferred; scalar_t__ requested; int last_packet_number; scalar_t__ slots_allocated; } ;
typedef int int64_t ;
typedef size_t int32_t ;
struct TYPE_7__ {TYPE_1__* friendlist; int fr_c; int net_crypto; } ;
struct TYPE_6__ {scalar_t__ status; int friendcon_id; struct File_Transfers* file_sending; } ;
typedef TYPE_2__ Messenger ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__ const*,size_t) ;
 int FUNC_3 (TYPE_2__ const*,size_t,size_t,int const*,scalar_t__) ;

int FUNC_4(const Messenger *VAR_7, int32_t VAR_8, uint32_t VAR_9, uint64_t VAR_10, const uint8_t *VAR_11,
              uint16_t VAR_12)
{
    if (FUNC_2(VAR_7, VAR_8))
        return -1;

    if (VAR_7->friendlist[VAR_8].status != VAR_2)
        return -2;

    if (VAR_9 >= VAR_3)
        return -3;

    struct File_Transfers *VAR_13 = &VAR_7->friendlist[VAR_8].file_sending[VAR_9];

    if (VAR_13->status != VAR_1)
        return -4;

    if (VAR_12 > VAR_4)
        return -5;

    if (VAR_13->size - VAR_13->transferred < VAR_12) {
        return -5;
    }

    if (VAR_13->size != VAR_6 && VAR_12 != VAR_4 && (VAR_13->transferred + VAR_12) != VAR_13->size) {
        return -5;
    }

    if (VAR_10 != VAR_13->transferred || (VAR_13->requested <= VAR_10 && VAR_13->size != 0)) {
        return -7;
    }


    if (FUNC_0(VAR_7->net_crypto, FUNC_1(VAR_7->fr_c,
                                        VAR_7->friendlist[VAR_8].friendcon_id)) < VAR_5)
        return -6;

    int64_t VAR_14 = FUNC_3(VAR_7, VAR_8, VAR_9, VAR_11, VAR_12);

    if (VAR_14 != -1) {

        VAR_13->transferred += VAR_12;

        if (VAR_13->slots_allocated) {
            --VAR_13->slots_allocated;
        }

        if (VAR_12 != VAR_4 || VAR_13->size == VAR_13->transferred) {
            VAR_13->status = VAR_0;
            VAR_13->last_packet_number = VAR_14;
        }

        return 0;
    }

    return -6;

}
