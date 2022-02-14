
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int mod_hash_val_t ;
struct TYPE_5__ {int mh_contents; } ;
typedef TYPE_1__ mod_hash_t ;
typedef int mod_hash_key_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

int
FUNC_4(mod_hash_t *VAR_1, mod_hash_key_t VAR_2)
{
 mod_hash_val_t VAR_3;
 int VAR_4;

 FUNC_2(&VAR_1->mh_contents, VAR_0);

 if ((VAR_4 = FUNC_1(VAR_1, VAR_2, &VAR_3)) == 0) {



  FUNC_0(VAR_1, VAR_3);
 }

 FUNC_3(&VAR_1->mh_contents);
 return (VAR_4);
}
