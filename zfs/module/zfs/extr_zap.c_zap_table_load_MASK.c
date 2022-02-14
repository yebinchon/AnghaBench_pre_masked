
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int zt_blk; int zt_nextblk; } ;
typedef TYPE_1__ zap_table_phys_t ;
struct TYPE_10__ {int zap_dbuf; int zap_rwlock; } ;
typedef TYPE_2__ zap_t ;
typedef int uint64_t ;
typedef int dnode_t ;
struct TYPE_11__ {scalar_t__ db_data; } ;
typedef TYPE_3__ dmu_buf_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int,int ,TYPE_3__**,int ) ;
 int FUNC_6 (TYPE_3__*,int ) ;

__attribute__((used)) static int
FUNC_7(zap_t *VAR_2, zap_table_phys_t *VAR_3, uint64_t VAR_4, uint64_t *VAR_5)
{
 int VAR_6 = FUNC_1(VAR_2);

 FUNC_0(FUNC_2(&VAR_2->zap_rwlock));

 uint64_t VAR_7 = VAR_4 >> (VAR_6-3);
 uint64_t VAR_8 = VAR_4 & ((1<<(VAR_6-3))-1);






 dnode_t *VAR_9 = FUNC_3(VAR_2->zap_dbuf);
 dmu_buf_t *VAR_10;
 int VAR_11 = FUNC_5(VAR_9,
     (VAR_3->zt_blk + VAR_7) << VAR_6, VAR_1, &VAR_10, VAR_0);
 FUNC_4(VAR_2->zap_dbuf);
 if (VAR_11 != 0)
  return (VAR_11);
 *VAR_5 = ((uint64_t *)VAR_10->db_data)[VAR_8];
 FUNC_6(VAR_10, VAR_1);

 if (VAR_3->zt_nextblk != 0) {





  VAR_7 = (VAR_4*2) >> (VAR_6-3);

  VAR_9 = FUNC_3(VAR_2->zap_dbuf);
  VAR_11 = FUNC_5(VAR_9,
      (VAR_3->zt_nextblk + VAR_7) << VAR_6, VAR_1, &VAR_10,
      VAR_0);
  FUNC_4(VAR_2->zap_dbuf);
  if (VAR_11 == 0)
   FUNC_6(VAR_10, VAR_1);
 }
 return (VAR_11);
}
