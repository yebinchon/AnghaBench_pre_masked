
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mutex; } ;
typedef TYPE_1__ ToxAV ;
struct TYPE_6__ {scalar_t__ av_call; int friend_number; } ;
typedef TYPE_2__ MSICall ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int FUNC_5(void *VAR_1, MSICall *VAR_2)
{
    ToxAV *VAR_3 = VAR_1;
    FUNC_3(VAR_3->mutex);

    FUNC_2(VAR_3, VAR_2->friend_number, VAR_0);

    if (VAR_2->av_call) {
        FUNC_0(VAR_2->av_call);
        FUNC_1(VAR_2->av_call);
    }

    FUNC_4(VAR_3->mutex);
    return 0;
}
