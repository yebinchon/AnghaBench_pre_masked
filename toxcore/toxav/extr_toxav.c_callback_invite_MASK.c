
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__* msi_call; } ;
typedef TYPE_2__ ToxAVCall ;
struct TYPE_9__ {int second; int (* first ) (TYPE_3__*,int ,int,int,int ) ;} ;
struct TYPE_11__ {int mutex; TYPE_1__ ccb; } ;
typedef TYPE_3__ ToxAV ;
struct TYPE_12__ {int peer_capabilities; int friend_number; TYPE_2__* av_call; } ;
typedef TYPE_4__ MSICall ;


 int FUNC_0 (char*) ;
 TYPE_2__* FUNC_1 (TYPE_3__*,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,int ,int,int,int ) ;

int FUNC_5(void *VAR_2, MSICall *VAR_3)
{
    ToxAV *VAR_4 = VAR_2;
    FUNC_2(VAR_4->mutex);

    ToxAVCall *VAR_5 = FUNC_1(VAR_4, VAR_3->friend_number, ((void*)0));

    if (VAR_5 == ((void*)0)) {
        FUNC_0("Failed to initialize call...");
        FUNC_3(VAR_4->mutex);
        return -1;
    }

    VAR_3->av_call = VAR_5;
    VAR_5->msi_call = VAR_3;

    if (VAR_4->ccb.first)
        VAR_4->ccb.first(VAR_4, VAR_3->friend_number, VAR_3->peer_capabilities & VAR_0,
                         VAR_3->peer_capabilities & VAR_1, VAR_4->ccb.second);
    else {

        FUNC_3(VAR_4->mutex);
        return -1;
    }

    FUNC_3(VAR_4->mutex);
    return 0;
}
