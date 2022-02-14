
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int sk_wkeys_lock; } ;
struct TYPE_6__ {TYPE_1__ spa_keystore; } ;
typedef TYPE_2__ spa_t ;
typedef int dsl_wrapping_key_t ;
typedef int dsl_dir_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int ,void*,int **) ;

__attribute__((used)) static int
FUNC_5(spa_t *VAR_3, dsl_dir_t *VAR_4, void *VAR_5,
    dsl_wrapping_key_t **VAR_6)
{
 int VAR_7;
 dsl_wrapping_key_t *VAR_8;
 uint64_t VAR_9;
 boolean_t VAR_10 = VAR_0;

 if (!FUNC_0(&VAR_3->spa_keystore.sk_wkeys_lock)) {
  FUNC_2(&VAR_3->spa_keystore.sk_wkeys_lock, VAR_2);
  VAR_10 = VAR_1;
 }


 VAR_7 = FUNC_1(VAR_4, &VAR_9);
 if (VAR_7 != 0)
  goto error;


 VAR_7 = FUNC_4(VAR_3, VAR_9, VAR_5, &VAR_8);
 if (VAR_7 != 0)
  goto error;


 if (VAR_10)
  FUNC_3(&VAR_3->spa_keystore.sk_wkeys_lock);

 *VAR_6 = VAR_8;
 return (0);

error:
 if (VAR_10)
  FUNC_3(&VAR_3->spa_keystore.sk_wkeys_lock);

 *VAR_6 = ((void*)0);
 return (VAR_7);
}
