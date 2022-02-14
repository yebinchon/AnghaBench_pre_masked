
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int spa_scrub_reopen; int spa_root_vdev; int spa_dsl_pool; } ;
typedef TYPE_1__ spa_t ;
typedef int nvlist_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int *) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (char const*,TYPE_1__**,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int *,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(const char *VAR_4, nvlist_t *VAR_5, nvlist_t *VAR_6)
{
 spa_t *VAR_7;
 int VAR_8;
 boolean_t VAR_9, VAR_10 = VAR_1;

 if (VAR_5) {
  VAR_8 = FUNC_1(VAR_5,
      "scrub_restart", &VAR_9);
  if (VAR_8 == 0)
   VAR_10 = VAR_9;
 }

 VAR_8 = FUNC_3(VAR_4, &VAR_7, VAR_2);
 if (VAR_8 != 0)
  return (VAR_8);

 FUNC_4(VAR_7, VAR_3);
 VAR_7->spa_scrub_reopen = (!VAR_10 &&
     FUNC_0(VAR_7->spa_dsl_pool));
 FUNC_6(VAR_7->spa_root_vdev);
 VAR_7->spa_scrub_reopen = VAR_0;

 (void) FUNC_5(VAR_7, ((void*)0), 0);
 FUNC_2(VAR_7, VAR_2);
 return (0);
}
