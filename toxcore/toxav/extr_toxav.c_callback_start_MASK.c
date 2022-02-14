
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ToxAVCall ;
struct TYPE_7__ {int mutex; } ;
typedef TYPE_1__ ToxAV ;
struct TYPE_8__ {int peer_capabilities; int friend_number; } ;
typedef TYPE_2__ MSICall ;


 int * FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

int FUNC_6(void *VAR_0, MSICall *VAR_1)
{
    ToxAV *VAR_2 = VAR_0;
    FUNC_4(VAR_2->mutex);

    ToxAVCall *VAR_3 = FUNC_0(VAR_2, VAR_1->friend_number);

    if (VAR_3 == ((void*)0)) {

        FUNC_5(VAR_2->mutex);
        return -1;
    }

    if (!FUNC_1(VAR_3)) {
        FUNC_2(VAR_0, VAR_1);
        FUNC_5(VAR_2->mutex);
        return -1;
    }

    if (!FUNC_3(VAR_2, VAR_1->friend_number, VAR_1->peer_capabilities)) {
        FUNC_2(VAR_0, VAR_1);
        FUNC_5(VAR_2->mutex);
        return -1;
    }

    FUNC_5(VAR_2->mutex);
    return 0;
}
