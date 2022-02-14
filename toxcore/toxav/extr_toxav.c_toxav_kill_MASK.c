
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ToxAVCall ;
struct TYPE_5__ {int mutex; int calls_head; scalar_t__ calls; scalar_t__ msi; } ;
typedef TYPE_1__ ToxAV ;


 int * FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

void FUNC_8(ToxAV *VAR_0)
{
    if (VAR_0 == ((void*)0))
        return;

    FUNC_6(VAR_0->mutex);


    while (VAR_0->msi && FUNC_4(VAR_0->msi) != 0) {
        FUNC_7(VAR_0->mutex);
        FUNC_6(VAR_0->mutex);
    }


    if (VAR_0->calls) {
        ToxAVCall *VAR_1 = FUNC_0(VAR_0, VAR_0->calls_head);

        while (VAR_1) {
            FUNC_1(VAR_1);
            VAR_1 = FUNC_2(VAR_1);
        }
    }

    FUNC_7(VAR_0->mutex);
    FUNC_5(VAR_0->mutex);

    FUNC_3(VAR_0);
}
