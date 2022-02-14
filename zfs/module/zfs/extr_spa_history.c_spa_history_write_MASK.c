
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_8__ {int spa_history; int spa_history_lock; int * spa_meta_objset; } ;
typedef TYPE_1__ spa_t ;
struct TYPE_9__ {int sh_phys_max_off; int sh_pool_create_len; int sh_eof; int sh_bof; } ;
typedef TYPE_2__ spa_history_phys_t ;
typedef int objset_t ;
typedef int dmu_tx_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int,int,char*,int *) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_5 (int,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_6(spa_t *VAR_0, void *VAR_1, uint64_t VAR_2, spa_history_phys_t *VAR_3,
    dmu_tx_t *VAR_4)
{
 uint64_t VAR_5, VAR_6;
 objset_t *VAR_7 = VAR_0->spa_meta_objset;
 int VAR_8;

 FUNC_0(FUNC_2(&VAR_0->spa_history_lock));


 while (VAR_3->sh_phys_max_off - VAR_3->sh_pool_create_len -
     (VAR_3->sh_eof - VAR_3->sh_bof) <= VAR_2) {
  if ((VAR_8 = FUNC_4(VAR_0, VAR_3)) != 0) {
   return (VAR_8);
  }
 }

 VAR_6 = FUNC_5(VAR_3->sh_eof, VAR_3);
 VAR_5 = FUNC_1(VAR_2, VAR_3->sh_phys_max_off - VAR_6);
 VAR_3->sh_eof += VAR_2;
 FUNC_3(VAR_7, VAR_0->spa_history, VAR_6, VAR_5, VAR_1, VAR_4);

 VAR_2 -= VAR_5;
 if (VAR_2 > 0) {

  FUNC_3(VAR_7, VAR_0->spa_history, VAR_3->sh_pool_create_len,
      VAR_2, (char *)VAR_1 + VAR_5, VAR_4);
 }

 return (0);
}
