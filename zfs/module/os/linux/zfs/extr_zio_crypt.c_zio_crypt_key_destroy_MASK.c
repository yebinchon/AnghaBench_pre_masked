
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zk_hmac_tmpl; int zk_current_tmpl; int zk_salt_lock; } ;
typedef TYPE_1__ zio_crypt_key_t ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

void
FUNC_3(zio_crypt_key_t *VAR_0)
{
 FUNC_2(&VAR_0->zk_salt_lock);


 FUNC_1(VAR_0->zk_current_tmpl);
 FUNC_1(VAR_0->zk_hmac_tmpl);


 FUNC_0(VAR_0, sizeof (zio_crypt_key_t));
}
