
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int spa_sync_on; } ;
typedef TYPE_1__ spa_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static boolean_t
FUNC_3(spa_t *VAR_5)
{
 if (!FUNC_0(VAR_5, VAR_3))
  return (VAR_0);

 if (!FUNC_2(VAR_5))
  return (VAR_0);

 if (!VAR_5->spa_sync_on)
  return (VAR_0);

 if (FUNC_1(VAR_5) != VAR_2)
  return (VAR_0);

 if (VAR_4)
  return (VAR_0);

 return (VAR_1);
}
