
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int fmd_hdl_t ;
struct TYPE_5__ {int ae_nvl; } ;
typedef TYPE_1__ agent_event_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (int *) ;
 int FUNC_7 (int *,TYPE_1__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 () ;

void
FUNC_13(void)
{
 fmd_hdl_t *VAR_6;
 agent_event_t *VAR_7;

 VAR_3 = 1;
 (void) FUNC_9(&VAR_1);


 (void) FUNC_10(VAR_4, ((void*)0));


 while ((VAR_7 = (FUNC_6(&VAR_2))) != ((void*)0)) {
  FUNC_7(&VAR_2, VAR_7);
  FUNC_8(VAR_7->ae_nvl);
  FUNC_4(VAR_7);
 }

 FUNC_5(&VAR_2);

 if ((VAR_6 = FUNC_3("zfs-retire")) != ((void*)0)) {
  FUNC_1(VAR_6);
  FUNC_2(VAR_6);
 }
 if ((VAR_6 = FUNC_3("zfs-diagnosis")) != ((void*)0)) {
  FUNC_0(VAR_6);
  FUNC_2(VAR_6);
 }

 FUNC_11(VAR_0, "Add Agent: fini");
 FUNC_12();

 VAR_5 = ((void*)0);
}
