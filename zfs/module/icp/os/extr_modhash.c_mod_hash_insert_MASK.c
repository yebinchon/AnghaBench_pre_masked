
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int mod_hash_val_t ;
struct TYPE_6__ {int mhs_coll; } ;
struct TYPE_7__ {int mh_contents; TYPE_1__ mh_stat; } ;
typedef TYPE_2__ mod_hash_t ;
typedef int mod_hash_key_t ;
typedef int mod_hash_hndl_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ,int *) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

int
FUNC_4(mod_hash_t *VAR_2, mod_hash_key_t VAR_3, mod_hash_val_t VAR_4)
{
 int VAR_5;
 mod_hash_val_t VAR_6;

 FUNC_2(&VAR_2->mh_contents, VAR_1);




 if (FUNC_0(VAR_2, VAR_3, &VAR_6) == 0) {
  FUNC_3(&VAR_2->mh_contents);
  VAR_2->mh_stat.mhs_coll++;
  return (VAR_0);
 }

 VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4, (mod_hash_hndl_t)0);
 FUNC_3(&VAR_2->mh_contents);

 return (VAR_5);
}
