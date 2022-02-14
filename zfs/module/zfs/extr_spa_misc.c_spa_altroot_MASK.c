
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * spa_root; } ;
typedef TYPE_1__ spa_t ;


 int FUNC_0 (char*,int *,size_t) ;

void
FUNC_1(spa_t *VAR_0, char *VAR_1, size_t VAR_2)
{
 if (VAR_0->spa_root == ((void*)0))
  VAR_1[0] = '\0';
 else
  (void) FUNC_0(VAR_1, VAR_0->spa_root, VAR_2);
}
