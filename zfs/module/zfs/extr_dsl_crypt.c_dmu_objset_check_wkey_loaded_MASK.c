
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int dsl_wrapping_key_t ;
struct TYPE_6__ {TYPE_1__* dd_pool; } ;
typedef TYPE_2__ dsl_dir_t ;
struct TYPE_5__ {int dp_spa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,TYPE_2__*,int ,int **) ;

__attribute__((used)) static int
FUNC_3(dsl_dir_t *VAR_2)
{
 int VAR_3;
 dsl_wrapping_key_t *VAR_4 = ((void*)0);

 VAR_3 = FUNC_2(VAR_2->dd_pool->dp_spa, VAR_2, VAR_1,
     &VAR_4);
 if (VAR_3 != 0)
  return (FUNC_0(VAR_0));

 FUNC_1(VAR_4, VAR_1);

 return (0);
}
