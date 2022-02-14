
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int spa_dsl_pool; } ;
typedef TYPE_1__ spa_t ;
struct TYPE_13__ {int dp_spa; } ;
typedef TYPE_2__ dsl_pool_t ;
struct TYPE_14__ {int dd_object; } ;
typedef TYPE_3__ dsl_dir_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,char const*,int ,TYPE_3__**,int *) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (char const*,int ,TYPE_2__**) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (char const*,TYPE_1__**,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,char const*,int ) ;

int
FUNC_12(const char *VAR_5)
{
 int VAR_6 = 0;
 dsl_dir_t *VAR_7 = ((void*)0);
 dsl_pool_t *VAR_8 = ((void*)0);
 spa_t *VAR_9 = ((void*)0);

 VAR_6 = FUNC_9(VAR_5, &VAR_9, VAR_3);
 if (VAR_6 != 0)
  return (VAR_6);





 if (FUNC_8(VAR_9) != VAR_2)
  FUNC_10(VAR_9->spa_dsl_pool, 0);

 FUNC_5(VAR_9, VAR_3);


 VAR_6 = FUNC_3(VAR_5, VAR_3, &VAR_8);
 if (VAR_6 != 0)
  goto error;

 if (!FUNC_6(VAR_8->dp_spa, VAR_4)) {
  VAR_6 = (FUNC_0(VAR_1));
  goto error;
 }

 VAR_6 = FUNC_1(VAR_8, VAR_5, VAR_3, &VAR_7, ((void*)0));
 if (VAR_6 != 0) {
  VAR_7 = ((void*)0);
  goto error;
 }


 VAR_6 = FUNC_7(VAR_8->dp_spa, VAR_7->dd_object);
 if (VAR_6 != 0)
  goto error;

 FUNC_2(VAR_7, VAR_3);
 FUNC_4(VAR_8, VAR_3);


 FUNC_11(VAR_8->dp_spa, VAR_5, VAR_0);

 return (0);

error:
 if (VAR_7 != ((void*)0))
  FUNC_2(VAR_7, VAR_3);
 if (VAR_8 != ((void*)0))
  FUNC_4(VAR_8, VAR_3);

 return (VAR_6);
}
