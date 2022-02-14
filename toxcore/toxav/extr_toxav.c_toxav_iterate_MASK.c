
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ int32_t ;
struct TYPE_14__ {TYPE_6__* second; } ;
struct TYPE_12__ {TYPE_10__* second; } ;
struct TYPE_15__ {scalar_t__ friend_number; int mutex; TYPE_3__ video; TYPE_2__* msi_call; TYPE_1__ audio; scalar_t__ active; struct TYPE_15__* next; } ;
typedef TYPE_4__ ToxAVCall ;
struct TYPE_16__ {size_t calls_head; scalar_t__ dmssa; int dmsst; int dmssc; scalar_t__ interval; int mutex; TYPE_4__** calls; } ;
typedef TYPE_5__ ToxAV ;
struct TYPE_17__ {int lcfd; } ;
struct TYPE_13__ {int self_capabilities; int peer_capabilities; } ;
struct TYPE_11__ {int lp_frame_duration; } ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (TYPE_10__*) ;
 TYPE_4__* FUNC_2 (TYPE_5__*,scalar_t__) ;
 scalar_t__ FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_6__*) ;

void FUNC_7(ToxAV *VAR_4)
{
    FUNC_4(VAR_4->mutex);

    if (VAR_4->calls == ((void*)0)) {
        FUNC_5(VAR_4->mutex);
        return;
    }

    uint64_t VAR_5 = FUNC_3();
    int32_t VAR_6 = 500;

    ToxAVCall *VAR_7 = VAR_4->calls[VAR_4->calls_head];

    for (; VAR_7; VAR_7 = VAR_7->next) {
        if (VAR_7->active) {
            FUNC_4(VAR_7->mutex);
            FUNC_5(VAR_4->mutex);

            FUNC_1(VAR_7->audio.second);
            FUNC_6(VAR_7->video.second);

            if (VAR_7->msi_call->self_capabilities & VAR_0 &&
                    VAR_7->msi_call->peer_capabilities & VAR_2)
                VAR_6 = FUNC_0(VAR_7->audio.second->lp_frame_duration, VAR_6);

            if (VAR_7->msi_call->self_capabilities & VAR_1 &&
                    VAR_7->msi_call->peer_capabilities & VAR_3)
                VAR_6 = FUNC_0(VAR_7->video.second->lcfd, (uint32_t) VAR_6);

            uint32_t VAR_8 = VAR_7->friend_number;

            FUNC_5(VAR_7->mutex);
            FUNC_4(VAR_4->mutex);


            if (FUNC_2(VAR_4, VAR_8) != VAR_7)
                break;
        }
    }

    FUNC_5(VAR_4->mutex);

    VAR_4->interval = VAR_6 < VAR_4->dmssa ? 0 : (VAR_6 - VAR_4->dmssa);
    VAR_4->dmsst += FUNC_3() - VAR_5;

    if (++VAR_4->dmssc == 3) {
        VAR_4->dmssa = VAR_4->dmsst / 3 + 5 ;
        VAR_4->dmssc = 0;
        VAR_4->dmsst = 0;
    }
}
