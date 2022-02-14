
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint_t ;
struct TYPE_3__ {int mh_nchains; int (* mh_hashalg ) (int ,int ) ;int mh_hashalg_data; } ;
typedef TYPE_1__ mod_hash_t ;
typedef int mod_hash_key_t ;


 int FUNC_0 (int ,int ) ;

uint_t
FUNC_1(mod_hash_t *VAR_0, mod_hash_key_t VAR_1)
{
 uint_t VAR_2;




 if (VAR_0->mh_nchains == 1)
  return (0);

 VAR_2 = (VAR_0->mh_hashalg)(VAR_0->mh_hashalg_data, VAR_1);
 return (VAR_2 % (VAR_0->mh_nchains - 1));
}
