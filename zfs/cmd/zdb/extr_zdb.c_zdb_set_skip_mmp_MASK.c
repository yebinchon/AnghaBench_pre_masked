
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int spa_import_flags; } ;
typedef TYPE_1__ spa_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (char*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(char *VAR_2)
{
 spa_t *VAR_3;





 FUNC_0(&VAR_1);
 if ((VAR_3 = FUNC_2(VAR_2)) != ((void*)0)) {
  VAR_3->spa_import_flags |= VAR_0;
 }
 FUNC_1(&VAR_1);
}
