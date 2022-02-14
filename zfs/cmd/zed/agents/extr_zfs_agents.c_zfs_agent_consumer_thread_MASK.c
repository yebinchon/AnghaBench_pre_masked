
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ae_nvl; int ae_subclass; int ae_class; } ;
typedef TYPE_1__ agent_event_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static void *
FUNC_10(void *VAR_5)
{
 for (;;) {
  agent_event_t *VAR_6;

  (void) FUNC_6(&VAR_4);


  while (!VAR_3 && FUNC_2(&VAR_2))
   (void) FUNC_5(&VAR_1, &VAR_4);

  if (VAR_3) {
   (void) FUNC_7(&VAR_4);
   FUNC_8(VAR_0, "zfs_agent_consumer_thread: "
       "exiting");
   return (((void*)0));
  }

  if ((VAR_6 = (FUNC_1(&VAR_2))) != ((void*)0)) {
   FUNC_3(&VAR_2, VAR_6);

   (void) FUNC_7(&VAR_4);


   FUNC_9(VAR_6->ae_class, VAR_6->ae_subclass,
       VAR_6->ae_nvl);

   FUNC_4(VAR_6->ae_nvl);
   FUNC_0(VAR_6);
   continue;
  }

  (void) FUNC_7(&VAR_4);
 }

 return (((void*)0));
}
