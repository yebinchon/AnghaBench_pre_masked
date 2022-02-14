
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct TYPE_2__ {struct kobject kobj; } ;
struct module {TYPE_1__ mkobj; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct kobject* FUNC_0 (char*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,struct kobject*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct kobject*) ;
 int FUNC_4 (int *,struct kobject*,int ) ;

void
FUNC_5(void)
{
 struct kobject *VAR_8;



 VAR_8 = &(((struct module *)(VAR_0))->mkobj).kobj;

 int VAR_9;

 if (VAR_8 == ((void*)0))
  return;

 VAR_9 = FUNC_1(&VAR_5, VAR_8);
 if (VAR_9)
  return;

 VAR_9 = FUNC_3(&VAR_6, VAR_8);
 if (VAR_9) {
  FUNC_2(&VAR_5);
  return;
 }

 VAR_9 = FUNC_4(&VAR_7, VAR_8,
     VAR_2);
 if (VAR_9) {
  FUNC_2(&VAR_5);
  FUNC_2(&VAR_6);
  return;
 }

 VAR_9 = FUNC_4(&VAR_3, VAR_8,
     VAR_1);
 if (VAR_9) {
  FUNC_2(&VAR_5);
  FUNC_2(&VAR_6);
  FUNC_2(&VAR_7);
  return;
 }
}
