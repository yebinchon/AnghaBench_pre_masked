
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint16_t ;
struct File_Transfers {scalar_t__ status; scalar_t__ transferred; unsigned int slots_allocated; scalar_t__ paused; scalar_t__ size; scalar_t__ requested; int last_packet_number; } ;
typedef size_t int32_t ;
struct TYPE_9__ {int file_reqchunk_userdata; int (* file_reqchunk ) (TYPE_2__*,size_t,unsigned int,scalar_t__,scalar_t__,int ) ;TYPE_1__* friendlist; int fr_c; int net_crypto; } ;
struct TYPE_8__ {unsigned int num_sending_files; int friendcon_id; struct File_Transfers* file_sending; } ;
typedef TYPE_2__ Messenger ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*,size_t,unsigned int,int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,size_t,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_2__*,size_t,unsigned int,scalar_t__,scalar_t__,int ) ;
 int FUNC_6 (TYPE_2__*,size_t,unsigned int,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_7(Messenger *VAR_7, int32_t VAR_8)
{
    if (!VAR_7->friendlist[VAR_8].num_sending_files)
        return;

    int VAR_9 = FUNC_0(VAR_7->net_crypto, FUNC_2(VAR_7->fr_c,
                     VAR_7->friendlist[VAR_8].friendcon_id));

    if (VAR_9 < VAR_6) {
        VAR_9 = 0;
    } else {
        VAR_9 -= VAR_6;
    }

    unsigned int VAR_10, VAR_11 = VAR_7->friendlist[VAR_8].num_sending_files;

    for (VAR_10 = 0; VAR_10 < VAR_4; ++VAR_10) {
        struct File_Transfers *VAR_12 = &VAR_7->friendlist[VAR_8].file_sending[VAR_10];

        if (VAR_12->status != VAR_1) {
            --VAR_11;

            if (VAR_12->status == VAR_0) {

                if (FUNC_3(VAR_7, VAR_8, VAR_12->last_packet_number) == 0) {
                    if (VAR_7->file_reqchunk)
                        (*VAR_7->file_reqchunk)(VAR_7, VAR_8, VAR_10, VAR_12->transferred, 0, VAR_7->file_reqchunk_userdata);

                    VAR_12->status = VAR_1;
                    --VAR_7->friendlist[VAR_8].num_sending_files;
                }
            }


            if (VAR_12->slots_allocated > (unsigned int)VAR_9) {
                VAR_9 = 0;
            } else {
                VAR_9 -= VAR_12->slots_allocated;
            }
        }

        while (VAR_12->status == VAR_2 && (VAR_12->paused == VAR_3)) {
            if (FUNC_4(VAR_7->net_crypto, FUNC_2(VAR_7->fr_c,
                                  VAR_7->friendlist[VAR_8].friendcon_id))) {
                VAR_9 = 0;
            }

            if (VAR_9 == 0)
                break;

            uint16_t VAR_13 = VAR_5;

            if (VAR_12->size == 0) {

                FUNC_1(VAR_7, VAR_8, VAR_10, 0, 0, 0);
                break;
            }

            if (VAR_12->size == VAR_12->requested) {
                break;
            }

            if (VAR_12->size - VAR_12->requested < VAR_13) {
                VAR_13 = VAR_12->size - VAR_12->requested;
            }

            ++VAR_12->slots_allocated;

            uint64_t VAR_14 = VAR_12->requested;
            VAR_12->requested += VAR_13;

            if (VAR_7->file_reqchunk)
                (*VAR_7->file_reqchunk)(VAR_7, VAR_8, VAR_10, VAR_14, VAR_13, VAR_7->file_reqchunk_userdata);

            --VAR_9;

        }

        if (VAR_11 == 0)
            break;
    }
}
