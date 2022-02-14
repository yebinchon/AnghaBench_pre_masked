
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int toxav_call_cb ;
struct TYPE_4__ {void* second; int * first; } ;
struct TYPE_5__ {int mutex; TYPE_1__ ccb; } ;
typedef TYPE_2__ ToxAV ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(ToxAV *VAR_0, toxav_call_cb *VAR_1, void *VAR_2)
{
    FUNC_0(VAR_0->mutex);
    VAR_0->ccb.first = VAR_1;
    VAR_0->ccb.second = VAR_2;
    FUNC_1(VAR_0->mutex);
}
