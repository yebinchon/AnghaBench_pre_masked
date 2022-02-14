
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * second; int * first; } ;
struct TYPE_5__ {int * second; int * first; } ;
struct TYPE_7__ {scalar_t__ active; int mutex; int mutex_video; int mutex_audio; TYPE_2__ video; TYPE_1__ audio; int bwc; } ;
typedef TYPE_3__ ToxAVCall ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(ToxAVCall *VAR_0)
{
    if (VAR_0 == ((void*)0) || VAR_0->active == 0)
        return;

    VAR_0->active = 0;

    FUNC_3(VAR_0->mutex_audio);
    FUNC_4(VAR_0->mutex_audio);
    FUNC_3(VAR_0->mutex_video);
    FUNC_4(VAR_0->mutex_video);
    FUNC_3(VAR_0->mutex);
    FUNC_4(VAR_0->mutex);

    FUNC_1(VAR_0->bwc);

    FUNC_5(VAR_0->audio.first);
    FUNC_0(VAR_0->audio.second);
    VAR_0->audio.first = ((void*)0);
    VAR_0->audio.second = ((void*)0);

    FUNC_5(VAR_0->video.first);
    FUNC_6(VAR_0->video.second);
    VAR_0->video.first = ((void*)0);
    VAR_0->video.second = ((void*)0);

    FUNC_2(VAR_0->mutex_audio);
    FUNC_2(VAR_0->mutex_video);
    FUNC_2(VAR_0->mutex);
}
