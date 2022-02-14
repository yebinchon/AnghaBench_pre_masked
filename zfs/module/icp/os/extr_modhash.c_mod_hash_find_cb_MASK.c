
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mod_hash_val_t ;
struct TYPE_4__ {int mh_contents; } ;
typedef TYPE_1__ mod_hash_t ;
typedef int mod_hash_key_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

int
FUNC_3(mod_hash_t *VAR_1, mod_hash_key_t VAR_2, mod_hash_val_t *VAR_3,
    void (*VAR_4)(mod_hash_key_t, mod_hash_val_t))
{
 int VAR_5;

 FUNC_1(&VAR_1->mh_contents, VAR_0);
 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_5 == 0) {
  VAR_4(VAR_2, *VAR_3);
 }
 FUNC_2(&VAR_1->mh_contents);

 return (VAR_5);
}
