
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ** spa_ddt; } ;
typedef TYPE_1__ spa_t ;
typedef enum ddt_type { ____Placeholder_ddt_type } ddt_type ;
typedef enum ddt_class { ____Placeholder_ddt_class } ddt_class ;
typedef int ddt_t ;
struct TYPE_8__ {int dde_key; } ;
typedef TYPE_2__ ddt_entry_t ;
typedef int boolean_t ;
typedef int blkptr_t ;


 size_t FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int const*) ;
 scalar_t__ FUNC_3 (int *,int,int,TYPE_2__*) ;
 TYPE_2__* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,TYPE_2__*) ;

boolean_t
FUNC_6(spa_t *VAR_6, enum ddt_class VAR_7, const blkptr_t *VAR_8)
{
 ddt_t *VAR_9;
 ddt_entry_t *VAR_10;

 if (!FUNC_1(VAR_8))
  return (VAR_0);

 if (VAR_7 == VAR_2)
  return (VAR_1);

 VAR_9 = VAR_6->spa_ddt[FUNC_0(VAR_8)];
 VAR_10 = FUNC_4(VAR_5, VAR_4);

 FUNC_2(&(VAR_10->dde_key), VAR_8);

 for (enum ddt_type VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
  for (enum ddt_class VAR_12 = 0; VAR_12 <= VAR_7; VAR_12++) {
   if (FUNC_3(VAR_9, VAR_11, VAR_12, VAR_10) == 0) {
    FUNC_5(VAR_5, VAR_10);
    return (VAR_1);
   }
  }
 }

 FUNC_5(VAR_5, VAR_10);
 return (VAR_0);
}
