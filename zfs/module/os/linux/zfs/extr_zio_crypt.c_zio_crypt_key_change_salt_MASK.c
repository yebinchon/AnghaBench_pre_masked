
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t zk_crypt; scalar_t__ zk_salt_count; int zk_salt_lock; int * zk_current_tmpl; int zk_current_key; int zk_salt; int zk_current_keydata; int zk_master_keydata; } ;
typedef TYPE_1__ zio_crypt_key_t ;
typedef int uint_t ;
typedef int uint8_t ;
typedef int crypto_mechanism_t ;
struct TYPE_5__ {int ci_keylen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int *,int **,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int *,int ,int *,int,int ,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 TYPE_2__* VAR_5 ;

__attribute__((used)) static int
FUNC_7(zio_crypt_key_t *VAR_6)
{
 int VAR_7 = 0;
 uint8_t VAR_8[VAR_4];
 crypto_mechanism_t VAR_9;
 uint_t VAR_10 = VAR_5[VAR_6->zk_crypt].ci_keylen;


 VAR_7 = FUNC_4(VAR_8, VAR_4);
 if (VAR_7 != 0)
  goto error;

 FUNC_5(&VAR_6->zk_salt_lock, VAR_2);


 if (VAR_6->zk_salt_count < VAR_3)
  goto out_unlock;


 VAR_7 = FUNC_3(VAR_6->zk_master_keydata, VAR_10, ((void*)0), 0,
     VAR_8, VAR_4, VAR_6->zk_current_keydata, VAR_10);
 if (VAR_7 != 0)
  goto out_unlock;


 FUNC_0(VAR_8, VAR_6->zk_salt, VAR_4);
 VAR_6->zk_salt_count = 0;


 FUNC_2(VAR_6->zk_current_tmpl);
 VAR_7 = FUNC_1(&VAR_9, &VAR_6->zk_current_key,
     &VAR_6->zk_current_tmpl, VAR_1);
 if (VAR_7 != VAR_0)
  VAR_6->zk_current_tmpl = ((void*)0);

 FUNC_6(&VAR_6->zk_salt_lock);

 return (0);

out_unlock:
 FUNC_6(&VAR_6->zk_salt_lock);
error:
 return (VAR_7);
}
