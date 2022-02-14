
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mhs_nomem; } ;
struct TYPE_5__ {TYPE_1__ mh_stat; } ;
typedef TYPE_2__ mod_hash_t ;
typedef int * mod_hash_hndl_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int ) ;
 int VAR_2 ;

int
FUNC_1(mod_hash_t *VAR_3, mod_hash_hndl_t *VAR_4)
{
 *VAR_4 = FUNC_0(VAR_2, VAR_0);
 if (*VAR_4 == ((void*)0)) {
  VAR_3->mh_stat.mhs_nomem++;
  return (VAR_1);
 }

 return (0);

}
