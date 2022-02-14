
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint64_t ;
typedef int uint32_t ;
typedef int objset_t ;
struct TYPE_9__ {size_t db_object; } ;
struct TYPE_10__ {int db_level; size_t db_blkid; scalar_t__ db_state; struct TYPE_10__* db_hash_next; int db_mtx; TYPE_1__ db; int * db_objset; } ;
typedef TYPE_2__ dmu_buf_impl_t ;
struct TYPE_11__ {size_t hash_table_mask; TYPE_2__** hash_table; } ;
typedef TYPE_3__ dbuf_hash_table_t ;


 scalar_t__ FUNC_0 (TYPE_2__*,int *,size_t,int,size_t) ;
 int * FUNC_1 (TYPE_3__*,size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int*) ;
 size_t FUNC_5 (int *,size_t,int,size_t) ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static dmu_buf_impl_t *
FUNC_8(dmu_buf_impl_t *VAR_7)
{
 dbuf_hash_table_t *VAR_8 = &VAR_2;
 objset_t *VAR_9 = VAR_7->db_objset;
 uint64_t VAR_10 = VAR_7->db.db_object;
 int VAR_11 = VAR_7->db_level;
 uint64_t VAR_12, VAR_13, VAR_14;
 dmu_buf_impl_t *VAR_15;
 uint32_t VAR_16;

 VAR_12 = VAR_7->db_blkid;
 VAR_13 = FUNC_5(VAR_9, VAR_10, VAR_11, VAR_12);
 VAR_14 = VAR_13 & VAR_8->hash_table_mask;

 FUNC_6(FUNC_1(VAR_8, VAR_14));
 for (VAR_15 = VAR_8->hash_table[VAR_14], VAR_16 = 0; VAR_15 != ((void*)0);
     VAR_15 = VAR_15->db_hash_next, VAR_16++) {
  if (FUNC_0(VAR_15, VAR_9, VAR_10, VAR_11, VAR_12)) {
   FUNC_6(&VAR_15->db_mtx);
   if (VAR_15->db_state != VAR_0) {
    FUNC_7(FUNC_1(VAR_8, VAR_14));
    return (VAR_15);
   }
   FUNC_7(&VAR_15->db_mtx);
  }
 }

 if (VAR_16 > 0) {
  FUNC_2(VAR_5);
  if (VAR_16 == 1)
   FUNC_2(VAR_4);

  FUNC_3(VAR_3, VAR_16);
 }

 FUNC_6(&VAR_7->db_mtx);
 VAR_7->db_hash_next = VAR_8->hash_table[VAR_14];
 VAR_8->hash_table[VAR_14] = VAR_7;
 FUNC_7(FUNC_1(VAR_8, VAR_14));
 FUNC_4(&VAR_1);
 FUNC_3(VAR_6, VAR_1);

 return (((void*)0));
}
