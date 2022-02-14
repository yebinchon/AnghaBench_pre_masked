
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ushort_t ;
struct TYPE_7__ {int vimContainer; int vimWindow; } ;
struct TYPE_6__ {int event_f; int event_state; } ;
struct TYPE_5__ {TYPE_2__* cbdata; } ;
typedef int PtWidget_t ;
typedef TYPE_1__ PtCallbackInfo_t ;
typedef TYPE_2__ PhWindowEvent_t ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int **,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_4__ VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 () ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;

__attribute__((used)) static int
FUNC_10(PtWidget_t *VAR_14, void *VAR_15, PtCallbackInfo_t *VAR_16)
{
    PhWindowEvent_t *VAR_17 = VAR_16->cbdata;
    ushort_t *VAR_18, *VAR_19;

    switch (VAR_17->event_f) {
 case 130:
     FUNC_9();
     break;

 case 129:

     FUNC_4(VAR_1);

     if (VAR_17->event_state == VAR_2)
     {
  FUNC_3(VAR_7);
  FUNC_5();
     }
     else
     {
  FUNC_3(VAR_0);
  FUNC_6();
     }
     break;

 case 128:
     FUNC_2(VAR_8.vimWindow, VAR_4, &VAR_18, 0);
     FUNC_2(VAR_8.vimWindow, VAR_3, &VAR_19, 0);




     FUNC_7(*VAR_18, *VAR_19);
     FUNC_8(VAR_0, VAR_0, VAR_6);
     VAR_9 = VAR_0;
     FUNC_1(VAR_8.vimContainer);
     FUNC_0(VAR_8.vimContainer);
     break;

 default:
     break;
    }

    return VAR_5;
}
