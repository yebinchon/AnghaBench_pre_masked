
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int zbookmark_phys_t ;
typedef int uint32_t ;
struct TYPE_12__ {int os_spa; scalar_t__ os_raw_receive; int os_encrypted; } ;
typedef TYPE_2__ objset_t ;
struct TYPE_13__ {int dn_bonustype; int dn_type; TYPE_1__* dn_dbuf; } ;
typedef TYPE_3__ dnode_t ;
struct TYPE_14__ {scalar_t__ db_blkid; int db_mtx; TYPE_2__* db_objset; } ;
typedef TYPE_4__ dmu_buf_impl_t ;
typedef int arc_buf_t ;
struct TYPE_11__ {int db_blkid; int * db_buf; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_3__* FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int *,int ) ;
 int FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_10(dmu_buf_impl_t *VAR_5, uint32_t VAR_6)
{
 int VAR_7 = 0;
 objset_t *VAR_8 = VAR_5->db_objset;
 arc_buf_t *VAR_9;
 dnode_t *VAR_10;
 zbookmark_phys_t VAR_11;

 FUNC_0(FUNC_5(&VAR_5->db_mtx));

 if (!VAR_8->os_encrypted || VAR_8->os_raw_receive ||
     (VAR_6 & VAR_1) != 0)
  return (0);

 FUNC_2(VAR_5);
 VAR_10 = FUNC_1(VAR_5);
 VAR_9 = (VAR_10->dn_dbuf != ((void*)0)) ? VAR_10->dn_dbuf->db_buf : ((void*)0);

 if (VAR_9 == ((void*)0) || !FUNC_7(VAR_9)) {
  FUNC_3(VAR_5);
  return (0);
 }

 FUNC_6(&VAR_11, FUNC_9(VAR_8),
     VAR_3, 0, VAR_10->dn_dbuf->db_blkid);
 VAR_7 = FUNC_8(VAR_9, VAR_8->os_spa, &VAR_11, VAR_0);






 if (VAR_7 == VAR_4 && ((VAR_5->db_blkid != VAR_2 &&
     !FUNC_4(VAR_10->dn_type)) ||
     (VAR_5->db_blkid == VAR_2 &&
     !FUNC_4(VAR_10->dn_bonustype))))
  VAR_7 = 0;

 FUNC_3(VAR_5);

 return (VAR_7);
}
