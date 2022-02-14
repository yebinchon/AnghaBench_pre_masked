
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint64_t ;
struct TYPE_7__ {int db_object; } ;
struct TYPE_8__ {scalar_t__ db_state; struct TYPE_8__* db_hash_next; int db_mtx; int db_holds; int db_blkid; int db_level; TYPE_1__ db; int db_objset; } ;
typedef TYPE_2__ dmu_buf_impl_t ;
struct TYPE_9__ {size_t hash_table_mask; TYPE_2__** hash_table; } ;
typedef TYPE_3__ dbuf_hash_table_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,size_t) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 size_t FUNC_5 (int ,int ,int ,int ) ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(dmu_buf_impl_t *VAR_4)
{
 dbuf_hash_table_t *VAR_5 = &VAR_2;
 uint64_t VAR_6, VAR_7;
 dmu_buf_impl_t *VAR_8, **VAR_9;

 VAR_6 = FUNC_5(VAR_4->db_objset, VAR_4->db.db_object,
     VAR_4->db_level, VAR_4->db_blkid);
 VAR_7 = VAR_6 & VAR_5->hash_table_mask;





 FUNC_0(FUNC_8(&VAR_4->db_holds));
 FUNC_0(VAR_4->db_state == VAR_0);
 FUNC_0(!FUNC_3(&VAR_4->db_mtx));

 FUNC_6(FUNC_1(VAR_5, VAR_7));
 VAR_9 = &VAR_5->hash_table[VAR_7];
 while ((VAR_8 = *VAR_9) != VAR_4) {
  VAR_9 = &VAR_8->db_hash_next;
  FUNC_0(VAR_8 != ((void*)0));
 }
 *VAR_9 = VAR_4->db_hash_next;
 VAR_4->db_hash_next = ((void*)0);
 if (VAR_5->hash_table[VAR_7] &&
     VAR_5->hash_table[VAR_7]->db_hash_next == ((void*)0))
  FUNC_2(VAR_3);
 FUNC_7(FUNC_1(VAR_5, VAR_7));
 FUNC_4(&VAR_1);
}
