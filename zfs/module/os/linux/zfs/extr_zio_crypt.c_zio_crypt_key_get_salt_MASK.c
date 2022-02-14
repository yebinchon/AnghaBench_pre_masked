
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zk_salt_lock; int zk_salt_count; int zk_salt; } ;
typedef TYPE_1__ zio_crypt_key_t ;
typedef int uint8_t ;
typedef int boolean_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;

int
FUNC_5(zio_crypt_key_t *VAR_3, uint8_t *VAR_4)
{
 int VAR_5;
 boolean_t VAR_6;

 FUNC_2(&VAR_3->zk_salt_lock, VAR_0);

 FUNC_1(VAR_3->zk_salt, VAR_4, VAR_2);
 VAR_6 = (FUNC_0(&VAR_3->zk_salt_count) >=
     VAR_1);

 FUNC_3(&VAR_3->zk_salt_lock);

 if (VAR_6) {
  VAR_5 = FUNC_4(VAR_3);
  if (VAR_5 != 0)
   goto error;
 }

 return (0);

error:
 return (VAR_5);
}
