
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int spa_inject_ref; } ;
typedef TYPE_1__ spa_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (char*) ;
 int VAR_0 ;

spa_t *
FUNC_3(char *VAR_1)
{
 spa_t *VAR_2;

 FUNC_0(&VAR_0);
 if ((VAR_2 = FUNC_2(VAR_1)) == ((void*)0)) {
  FUNC_1(&VAR_0);
  return (((void*)0));
 }
 VAR_2->spa_inject_ref++;
 FUNC_1(&VAR_0);

 return (VAR_2);
}
