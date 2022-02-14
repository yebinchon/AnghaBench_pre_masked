
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int spa_t ;
struct TYPE_5__ {int dp_meta_objset; int dp_meta_rootbp; } ;
typedef TYPE_1__ dsl_pool_t ;


 int FUNC_0 (int *,int *,int *,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int *,int ) ;

int
FUNC_3(spa_t *VAR_0, uint64_t VAR_1, dsl_pool_t **VAR_2)
{
 int VAR_3;
 dsl_pool_t *VAR_4 = FUNC_2(VAR_0, VAR_1);







 *VAR_2 = VAR_4;

 VAR_3 = FUNC_0(VAR_0, ((void*)0), &VAR_4->dp_meta_rootbp,
     &VAR_4->dp_meta_objset);
 if (VAR_3 != 0) {
  FUNC_1(VAR_4);
  *VAR_2 = ((void*)0);
 }

 return (VAR_3);
}
