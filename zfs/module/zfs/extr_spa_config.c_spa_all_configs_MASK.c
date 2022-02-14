
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_5__ {int spa_props_lock; int spa_config; } ;
typedef TYPE_1__ spa_t ;
typedef int nvlist_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int ) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_2 ;
 TYPE_1__* FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (int ,int *) ;

nvlist_t *
FUNC_8(uint64_t *VAR_3)
{
 nvlist_t *VAR_4;
 spa_t *VAR_5 = ((void*)0);

 if (*VAR_3 == VAR_1)
  return (((void*)0));

 VAR_4 = FUNC_2();

 FUNC_3(&VAR_2);
 while ((VAR_5 = FUNC_6(VAR_5)) != ((void*)0)) {
  if (FUNC_0(VAR_0) ||
      FUNC_7(FUNC_5(VAR_5), ((void*)0))) {
   FUNC_3(&VAR_5->spa_props_lock);
   FUNC_1(VAR_4, FUNC_5(VAR_5),
       VAR_5->spa_config);
   FUNC_4(&VAR_5->spa_props_lock);
  }
 }
 *VAR_3 = VAR_1;
 FUNC_4(&VAR_2);

 return (VAR_4);
}
