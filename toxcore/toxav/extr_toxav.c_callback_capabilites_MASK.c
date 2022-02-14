
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int first; } ;
struct TYPE_8__ {int first; } ;
struct TYPE_10__ {TYPE_2__ video; TYPE_1__ audio; } ;
typedef TYPE_3__ ToxAVCall ;
struct TYPE_11__ {int mutex; } ;
typedef TYPE_4__ ToxAV ;
struct TYPE_12__ {int peer_capabilities; int friend_number; scalar_t__ av_call; } ;
typedef TYPE_5__ MSICall ;


 int FUNC_0 (TYPE_4__*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int FUNC_5(void *VAR_2, MSICall *VAR_3)
{
    ToxAV *VAR_4 = VAR_2;
    FUNC_1(VAR_4->mutex);

    if (VAR_3->peer_capabilities & VAR_0)
        FUNC_3(((ToxAVCall *)VAR_3->av_call)->audio.first);
    else
        FUNC_4(((ToxAVCall *)VAR_3->av_call)->audio.first);

    if (VAR_3->peer_capabilities & VAR_1)
        FUNC_3(((ToxAVCall *)VAR_3->av_call)->video.first);
    else
        FUNC_4(((ToxAVCall *)VAR_3->av_call)->video.first);

    FUNC_0(VAR_4, VAR_3->friend_number, VAR_3->peer_capabilities);

    FUNC_2(VAR_4->mutex);
    return 0;
}
