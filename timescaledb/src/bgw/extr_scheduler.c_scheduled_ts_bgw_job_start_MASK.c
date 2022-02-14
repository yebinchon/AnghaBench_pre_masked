
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int (* register_background_worker_callback_type ) (int *) ;
typedef int pid_t ;
struct TYPE_4__ {scalar_t__ state; int * handle; } ;
typedef TYPE_1__ ScheduledBgwJob ;
typedef int BgwHandleStatus ;


 int FUNC_0 (int ) ;




 int FUNC_1 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void
FUNC_7(ScheduledBgwJob *VAR_3,
         register_background_worker_callback_type VAR_4)
{
 pid_t VAR_5;
 BgwHandleStatus VAR_6;

 FUNC_6(VAR_3, VAR_2);

 if (VAR_3->state != VAR_2)
  return;

 FUNC_0(VAR_3->handle != ((void*)0));
 if (VAR_4 != ((void*)0))
  VAR_4(VAR_3->handle);

 VAR_6 = FUNC_3(VAR_3->handle, &VAR_5);
 switch (VAR_6)
 {
  case 130:
   FUNC_4();
   break;
  case 129:

   break;
  case 128:
   FUNC_2();
   FUNC_6(VAR_3, VAR_1);
   FUNC_1();
   break;
  case 131:

   FUNC_5(VAR_0, "unexpected bgworker state %d", VAR_6);
   break;
 }
}
