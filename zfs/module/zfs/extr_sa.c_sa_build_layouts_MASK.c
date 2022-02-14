
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_6__ ;
typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_12__ ;


typedef unsigned long long uint64_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_30__ {int sa_force_spill; TYPE_1__* sa_attr_table; } ;
typedef TYPE_2__ sa_os_t ;
struct TYPE_31__ {int lot_num; } ;
typedef TYPE_3__ sa_lot_t ;
struct TYPE_32__ {scalar_t__* sa_lengths; int sa_magic; } ;
typedef TYPE_4__ sa_hdr_phys_t ;
struct TYPE_33__ {TYPE_8__* sa_os; int * sa_spill_tab; TYPE_12__* sa_spill; int * sa_bonus_tab; TYPE_12__* sa_bonus; } ;
typedef TYPE_5__ sa_handle_t ;
struct TYPE_34__ {size_t sa_attr; scalar_t__ sa_length; int sa_data; int sa_data_func; scalar_t__ sa_size; void* sa_addr; } ;
typedef TYPE_6__ sa_bulk_attr_t ;
typedef scalar_t__ sa_buf_type_t ;
typedef size_t sa_attr_type_t ;
typedef int dmu_tx_t ;
typedef scalar_t__ dmu_object_type_t ;
typedef scalar_t__ boolean_t ;
typedef int blkptr_t ;
struct TYPE_35__ {TYPE_2__* os_sa; } ;
struct TYPE_29__ {scalar_t__ sa_length; } ;
struct TYPE_28__ {int db_size; scalar_t__ db_data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (void*,int) ;
 int VAR_3 ;
 int FUNC_4 (int,int) ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;
 unsigned long long FUNC_6 (size_t) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_7 (TYPE_12__*) ;
 int FUNC_8 (int ,int ,void*,scalar_t__) ;
 int VAR_5 ;
 scalar_t__ FUNC_9 (TYPE_2__*,size_t) ;
 int FUNC_10 (TYPE_4__*,int,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_11 (int ) ;
 int VAR_7 ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (TYPE_12__*,int *) ;
 int FUNC_15 (TYPE_12__*,int *) ;
 int FUNC_16 (TYPE_12__*,int*) ;
 scalar_t__ FUNC_17 (TYPE_8__*,int ,int *) ;
 int FUNC_18 (TYPE_12__*,int,int *) ;
 scalar_t__ FUNC_19 (TYPE_12__*,int ,int *,TYPE_12__**) ;
 size_t* FUNC_20 (int,int ) ;
 int FUNC_21 (size_t*,int) ;
 scalar_t__ FUNC_22 (TYPE_5__*,scalar_t__) ;
 int FUNC_23 (TYPE_8__*,unsigned long long,size_t*,int,int *,TYPE_3__**) ;
 int FUNC_24 (TYPE_2__*,TYPE_6__*,int,TYPE_12__*,scalar_t__,int,int*,int*,scalar_t__*) ;
 int FUNC_25 (TYPE_5__*) ;
 int FUNC_26 (TYPE_8__*,int *) ;
 scalar_t__ FUNC_27 (TYPE_5__*,int,int *) ;

__attribute__((used)) static int
FUNC_28(sa_handle_t *VAR_8, sa_bulk_attr_t *VAR_9, int VAR_10,
    dmu_tx_t *VAR_11)
{
 sa_os_t *VAR_12 = VAR_8->sa_os->os_sa;
 uint64_t VAR_13;
 sa_buf_type_t VAR_14;
 sa_hdr_phys_t *VAR_15;
 void *VAR_16;
 sa_attr_type_t *VAR_17, *VAR_18;
 int VAR_19, VAR_20;
 int VAR_21;
 int VAR_22;
 int VAR_23;
 int VAR_24 = 0;
 int VAR_25;
 dmu_object_type_t VAR_26;
 sa_lot_t *VAR_27;
 int VAR_28;
 int VAR_29;
 int VAR_30;
 boolean_t VAR_31;

 FUNC_15(VAR_8->sa_bonus, VAR_11);
 VAR_26 = FUNC_7(VAR_8->sa_bonus);
 FUNC_16(VAR_8->sa_bonus, &VAR_21);
 VAR_30 = FUNC_2(VAR_21);


 VAR_23 = FUNC_24(VAR_12, VAR_9, VAR_10, VAR_8->sa_bonus,
     VAR_4, VAR_30, &VAR_22, &VAR_25, &VAR_31);

 if (VAR_25 > VAR_7)
  return (FUNC_11(VAR_2));

 FUNC_13(FUNC_18(VAR_8->sa_bonus, VAR_31 ?
     FUNC_4(VAR_30 - sizeof (blkptr_t), VAR_25 + VAR_23) :
     VAR_25 + VAR_23, VAR_11));

 FUNC_0((VAR_26 == VAR_1 && VAR_31 == 0) ||
     VAR_26 == VAR_0);


 if (VAR_31) {
  boolean_t VAR_32;

  if (VAR_8->sa_spill == ((void*)0)) {
   FUNC_12(FUNC_19(VAR_8->sa_bonus, 0, ((void*)0),
       &VAR_8->sa_spill) == 0);
  }
  FUNC_15(VAR_8->sa_spill, VAR_11);

  VAR_24 = FUNC_24(VAR_12, &VAR_9[VAR_22],
      VAR_10 - VAR_22, VAR_8->sa_spill, VAR_6,
      VAR_8->sa_spill->db_size, &VAR_19, &VAR_29, &VAR_32);

  if (VAR_29 > VAR_7)
   return (FUNC_11(VAR_2));

  if (FUNC_1(VAR_29, VAR_24) >
      VAR_8->sa_spill->db_size)
   FUNC_12(0 == FUNC_27(VAR_8,
       FUNC_1(VAR_29, VAR_24), VAR_11));
 }


 VAR_16 = (void *)((uintptr_t)VAR_8->sa_bonus->db_data + VAR_23);
 VAR_15 = (sa_hdr_phys_t *)VAR_8->sa_bonus->db_data;
 VAR_14 = VAR_4;

 VAR_18 = VAR_17 = FUNC_20(sizeof (sa_attr_type_t) * VAR_10,
     VAR_3);
 VAR_20 = 0;

 for (VAR_19 = 0, VAR_28 = 0, VAR_13 = -1ULL; VAR_19 != VAR_10; VAR_19++) {
  uint16_t VAR_33;

  FUNC_0(FUNC_3(VAR_16, 8));
  VAR_17[VAR_19] = VAR_9[VAR_19].sa_attr;
  VAR_33 = FUNC_9(VAR_12, VAR_17[VAR_19]);
  if (VAR_33 == 0)
   VAR_33 = VAR_9[VAR_19].sa_length;

  if (VAR_31 && VAR_19 == VAR_22) {
   FUNC_12(VAR_26 == VAR_0);
   if (VAR_14 == VAR_4 && !VAR_12->sa_force_spill) {
    FUNC_23(VAR_8->sa_os, VAR_13, VAR_18,
        VAR_20, VAR_11, &VAR_27);
    FUNC_10(VAR_15, VAR_27->lot_num, VAR_23);
   }

   VAR_14 = VAR_6;
   VAR_13 = -1ULL;
   VAR_28 = 0;

   VAR_15 = (sa_hdr_phys_t *)VAR_8->sa_spill->db_data;
   VAR_15->sa_magic = VAR_5;
   VAR_16 = (void *)((uintptr_t)VAR_15 +
       VAR_24);
   VAR_18 = &VAR_17[VAR_19];
   VAR_20 = 0;
  }
  VAR_13 ^= FUNC_6(VAR_17[VAR_19]);
  VAR_9[VAR_19].sa_addr = VAR_16;
  VAR_9[VAR_19].sa_size = VAR_33;
  FUNC_8(VAR_9[VAR_19].sa_data_func, VAR_9[VAR_19].sa_data,
      VAR_16, VAR_33);
  if (VAR_12->sa_attr_table[VAR_17[VAR_19]].sa_length == 0) {
   VAR_15->sa_lengths[VAR_28++] = VAR_33;
  }
  VAR_16 = (void *)FUNC_5(((uintptr_t)VAR_16 +
      VAR_33), 8);
  VAR_20++;
 }

 FUNC_23(VAR_8->sa_os, VAR_13, VAR_18, VAR_20, VAR_11, &VAR_27);





 FUNC_12((VAR_26 == VAR_1 && VAR_27->lot_num == 0) ||
     (VAR_26 == VAR_0 && VAR_27->lot_num > 1));

 if (VAR_26 == VAR_0) {
  FUNC_10(VAR_15, VAR_27->lot_num,
      VAR_14 == VAR_4 ? VAR_23 : VAR_24);
 }

 FUNC_21(VAR_17, sizeof (sa_attr_type_t) * VAR_10);
 if (VAR_8->sa_bonus_tab) {
  FUNC_26(VAR_8->sa_os, VAR_8->sa_bonus_tab);
  VAR_8->sa_bonus_tab = ((void*)0);
 }
 if (!VAR_12->sa_force_spill)
  FUNC_12(0 == FUNC_22(VAR_8, VAR_4));
 if (VAR_8->sa_spill) {
  FUNC_26(VAR_8->sa_os, VAR_8->sa_spill_tab);
  if (!VAR_31) {



   FUNC_14(VAR_8->sa_spill, ((void*)0));
   VAR_8->sa_spill = ((void*)0);
   VAR_8->sa_spill_tab = ((void*)0);
   FUNC_12(0 == FUNC_17(VAR_8->sa_os,
       FUNC_25(VAR_8), VAR_11));
  } else {
   FUNC_12(0 == FUNC_22(VAR_8, VAR_6));
  }
 }

 return (0);
}
