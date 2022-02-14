
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tq_lock_class; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 void* FUNC_2 (char*,int,int ,int ,int ,int) ;
 int FUNC_3 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int *,int *) ;

int
FUNC_5(void)
{
 FUNC_1(&VAR_10);
 FUNC_4(&VAR_9, ((void*)0));

 VAR_8 = FUNC_2("spl_system_taskq", FUNC_0(VAR_4, 64),
     VAR_6, VAR_4, VAR_0, VAR_2|VAR_1);
 if (VAR_8 == ((void*)0))
  return (1);

 VAR_7 = FUNC_2("spl_delay_taskq", FUNC_0(VAR_4, 4),
     VAR_6, VAR_4, VAR_0, VAR_2|VAR_1);
 if (VAR_7 == ((void*)0)) {
  FUNC_3(VAR_8);
  return (1);
 }

 VAR_5 = FUNC_2("spl_dynamic_taskq", 1,
     VAR_6, VAR_4, VAR_0, VAR_2);
 if (VAR_5 == ((void*)0)) {
  FUNC_3(VAR_8);
  FUNC_3(VAR_7);
  return (1);
 }






 VAR_5->tq_lock_class = VAR_3;

 return (0);
}
