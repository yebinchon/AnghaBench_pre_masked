
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int zio_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int longlong_t ;
struct TYPE_14__ {int dn_datablkshift; scalar_t__ dn_datablksz; int dn_struct_rwlock; int dn_zfetch; TYPE_2__* dn_objset; scalar_t__ dn_object; } ;
typedef TYPE_3__ dnode_t ;
typedef int dmu_buf_t ;
struct TYPE_15__ {scalar_t__ db_state; int db_mtx; int db_changed; int db; } ;
typedef TYPE_4__ dmu_buf_impl_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_13__ {int os_spa; TYPE_1__* os_dsl_dataset; } ;
struct TYPE_12__ {scalar_t__ ds_object; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (scalar_t__,unsigned long long) ;
 int FUNC_4 (scalar_t__,unsigned long long) ;
 int VAR_12 ;
 int FUNC_5 (int ) ;
 int VAR_13 ;
 int FUNC_6 (int *,int *) ;
 TYPE_4__* FUNC_7 (TYPE_3__*,scalar_t__,void*) ;
 int FUNC_8 (TYPE_4__*,int *,int) ;
 scalar_t__ FUNC_9 (TYPE_3__*,int ,scalar_t__) ;
 int FUNC_10 (int **,scalar_t__,void*) ;
 int FUNC_11 (int *,scalar_t__,scalar_t__,int,int ) ;
 int ** FUNC_12 (int,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *) ;
 scalar_t__ VAR_14 ;
 int FUNC_17 (char*,int ,int ,scalar_t__,int ,int ) ;
 int FUNC_18 (int *) ;
 int * FUNC_19 (int ,int *,int *,int ) ;
 int FUNC_20 (int *) ;

int
FUNC_21(dnode_t *VAR_15, uint64_t VAR_16, uint64_t VAR_17,
    boolean_t VAR_18, void *VAR_19, int *VAR_20, dmu_buf_t ***VAR_21, uint32_t VAR_22)
{
 dmu_buf_t **VAR_23;
 uint64_t VAR_24, VAR_25, VAR_26;
 uint32_t VAR_27;
 int VAR_28;
 zio_t *VAR_29;

 FUNC_0(VAR_17 <= VAR_8);






 VAR_27 = VAR_3 | VAR_5 | VAR_4 |
     VAR_6;

 FUNC_15(&VAR_15->dn_struct_rwlock, VAR_12);
 if (VAR_15->dn_datablkshift) {
  int VAR_30 = VAR_15->dn_datablkshift;
  VAR_25 = (FUNC_4(VAR_16 + VAR_17, 1ULL << VAR_30) -
      FUNC_3(VAR_16, 1ULL << VAR_30)) >> VAR_30;
 } else {
  if (VAR_16 + VAR_17 > VAR_15->dn_datablksz) {
   FUNC_17("zfs: accessing past end of object "
       "%llx/%llx (size=%u access=%llu+%llu)",
       (longlong_t)VAR_15->dn_objset->
       os_dsl_dataset->ds_object,
       (longlong_t)VAR_15->dn_object, VAR_15->dn_datablksz,
       (longlong_t)VAR_16, (longlong_t)VAR_17);
   FUNC_16(&VAR_15->dn_struct_rwlock);
   return (FUNC_5(VAR_10));
  }
  VAR_25 = 1;
 }
 VAR_23 = FUNC_12(sizeof (dmu_buf_t *) * VAR_25, VAR_11);

 VAR_29 = FUNC_19(VAR_15->dn_objset->os_spa, ((void*)0), ((void*)0), VAR_13);
 VAR_24 = FUNC_9(VAR_15, 0, VAR_16);
 for (VAR_26 = 0; VAR_26 < VAR_25; VAR_26++) {
  dmu_buf_impl_t *VAR_31 = FUNC_7(VAR_15, VAR_24 + VAR_26, VAR_19);
  if (VAR_31 == ((void*)0)) {
   FUNC_16(&VAR_15->dn_struct_rwlock);
   FUNC_10(VAR_23, VAR_25, VAR_19);
   FUNC_18(VAR_29);
   return (FUNC_5(VAR_10));
  }


  if (VAR_18)
   (void) FUNC_8(VAR_31, VAR_29, VAR_27);
  VAR_23[VAR_26] = &VAR_31->db;
 }

 if ((VAR_22 & VAR_9) == 0 &&
     FUNC_2(VAR_15) && VAR_17 <= VAR_14) {
  FUNC_11(&VAR_15->dn_zfetch, VAR_24, VAR_25,
      VAR_18 && FUNC_1(VAR_15), VAR_0);
 }
 FUNC_16(&VAR_15->dn_struct_rwlock);


 VAR_28 = FUNC_20(VAR_29);
 if (VAR_28) {
  FUNC_10(VAR_23, VAR_25, VAR_19);
  return (VAR_28);
 }


 if (VAR_18) {
  for (VAR_26 = 0; VAR_26 < VAR_25; VAR_26++) {
   dmu_buf_impl_t *VAR_32 = (dmu_buf_impl_t *)VAR_23[VAR_26];
   FUNC_13(&VAR_32->db_mtx);
   while (VAR_32->db_state == VAR_2 ||
       VAR_32->db_state == VAR_1)
    FUNC_6(&VAR_32->db_changed, &VAR_32->db_mtx);
   if (VAR_32->db_state == VAR_7)
    VAR_28 = FUNC_5(VAR_10);
   FUNC_14(&VAR_32->db_mtx);
   if (VAR_28) {
    FUNC_10(VAR_23, VAR_25, VAR_19);
    return (VAR_28);
   }
  }
 }

 *VAR_20 = VAR_25;
 *VAR_21 = VAR_23;
 return (0);
}
