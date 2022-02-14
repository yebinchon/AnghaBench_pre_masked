
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mhs_nomem; } ;
struct TYPE_5__ {TYPE_1__ mh_stat; int mh_sleep; } ;
typedef TYPE_2__ mod_hash_t ;
typedef int * mod_hash_hndl_t ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ) ;
 int VAR_1 ;

int
FUNC_1(mod_hash_t *VAR_2, mod_hash_hndl_t *VAR_3)
{
 *VAR_3 = FUNC_0(VAR_1, VAR_2->mh_sleep);
 if (*VAR_3 == ((void*)0)) {
  VAR_2->mh_stat.mhs_nomem++;
  return (VAR_0);
 }

 return (0);
}
