
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zpool_status_t ;
typedef scalar_t__ zpool_errata_t ;
struct TYPE_5__ {int fi_guid; } ;
typedef TYPE_1__ zfeature_info_t ;
struct TYPE_6__ {scalar_t__ vs_state; scalar_t__ vs_aux; } ;
typedef TYPE_2__ vdev_stat_t ;
typedef int uint_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_7__ {scalar_t__ pss_func; scalar_t__ pss_state; } ;
typedef TYPE_3__ pool_scan_stat_t ;
typedef int nvlist_t ;
typedef scalar_t__ mmp_state_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 unsigned long FUNC_4 () ;
 scalar_t__ FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *,int ,int **) ;
 scalar_t__ FUNC_7 (int *,int ,scalar_t__*) ;
 scalar_t__ FUNC_8 (int *,int ,scalar_t__**,int *) ;
 TYPE_1__* VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int FUNC_9 (int) ;

__attribute__((used)) static zpool_status_t
FUNC_10(nvlist_t *VAR_66, boolean_t VAR_67, zpool_errata_t *VAR_68)
{
 nvlist_t *VAR_69;
 vdev_stat_t *VAR_70;
 pool_scan_stat_t *VAR_71 = ((void*)0);
 uint_t VAR_72, VAR_73;
 uint64_t VAR_74;
 uint64_t VAR_75;
 uint64_t VAR_76;
 uint64_t VAR_77;
 uint64_t VAR_78 = 0;
 uint64_t VAR_79 = 0;
 unsigned long VAR_80 = FUNC_4();

 FUNC_9(FUNC_7(VAR_66, VAR_31,
     &VAR_75) == 0);
 FUNC_9(FUNC_6(VAR_66, VAR_30,
     &VAR_69) == 0);
 FUNC_9(FUNC_8(VAR_69, VAR_29,
     (uint64_t **)&VAR_70, &VAR_72) == 0);
 FUNC_9(FUNC_7(VAR_66, VAR_25,
     &VAR_76) == 0);




 (void) FUNC_8(VAR_69, VAR_26,
     (uint64_t **)&VAR_71, &VAR_73);
 if (VAR_71 != ((void*)0) && VAR_71->pss_func == VAR_3 &&
     VAR_71->pss_state == VAR_0)
  return (VAR_54);




 if (VAR_70->vs_state == VAR_14 &&
     VAR_70->vs_aux == VAR_8) {
  mmp_state_t VAR_81;
  nvlist_t *VAR_82;

  VAR_82 = FUNC_2(VAR_66, VAR_23);
  VAR_81 = FUNC_3(VAR_82,
      VAR_24);

  if (VAR_81 == VAR_1)
   return (VAR_43);
  else if (VAR_81 == VAR_2)
   return (VAR_45);
  else
   return (VAR_44);
 }




 (void) FUNC_7(VAR_66, VAR_22, &VAR_78);
 if (VAR_78 != 0 && (unsigned long)VAR_78 != VAR_80 &&
     VAR_76 == VAR_4)
  return (VAR_44);




 if (VAR_70->vs_state == VAR_14 &&
     VAR_70->vs_aux == VAR_13)
  return (VAR_57);




 if (VAR_70->vs_state == VAR_14 &&
     VAR_70->vs_aux == VAR_12) {
  nvlist_t *VAR_83;

  FUNC_9(FUNC_6(VAR_66, VAR_23,
      &VAR_83) == 0);
  if (FUNC_5(VAR_83, VAR_17))
   return (VAR_56);
  return (VAR_55);
 }




 if (VAR_70->vs_state == VAR_14 &&
     VAR_70->vs_aux == VAR_9)
  return (VAR_32);




 if (FUNC_7(VAR_66, VAR_27,
     &VAR_77) == 0) {
  uint64_t VAR_84;

  if (FUNC_7(VAR_66, VAR_28,
      &VAR_84) == 0 && VAR_84 == VAR_16)
   return (VAR_47);

  if (VAR_77 == VAR_15)
   return (VAR_46);
  return (VAR_48);
 }




 if (VAR_70->vs_state == VAR_14 &&
     VAR_70->vs_aux == VAR_10) {
  return (VAR_33);
 }




 if (VAR_70->vs_state == VAR_14 &&
     FUNC_1(VAR_69, VAR_62))
  return (VAR_40);

 if (VAR_70->vs_state == VAR_14 &&
     FUNC_1(VAR_69, VAR_63))
  return (VAR_49);

 if (VAR_70->vs_state == VAR_14 &&
     FUNC_1(VAR_69, VAR_60))
  return (VAR_35);




 if (VAR_70->vs_state == VAR_14 &&
     VAR_70->vs_aux == VAR_11)
  return (VAR_37);




 if (!VAR_67) {
  if (FUNC_7(VAR_66, VAR_20,
      &VAR_74) == 0 && VAR_74 != 0)
   return (VAR_34);
 }




 if (FUNC_1(VAR_69, VAR_62))
  return (VAR_41);
 if (FUNC_1(VAR_69, VAR_63))
  return (VAR_50);
 if (FUNC_1(VAR_69, VAR_60))
  return (VAR_36);




 if (!VAR_67 && FUNC_1(VAR_69, VAR_61))
  return (VAR_39);




 if (FUNC_1(VAR_69, VAR_64))
  return (VAR_51);




 if (FUNC_1(VAR_69, VAR_65))
  return (VAR_53);




 (void) FUNC_7(VAR_66, VAR_19, &VAR_79);
 if (VAR_79) {
  *VAR_68 = VAR_79;
  return (VAR_38);
 }




 if (FUNC_0(VAR_75) && VAR_75 != VAR_6)
  return (VAR_58);




 if (VAR_75 >= VAR_7) {
  int VAR_85;
  nvlist_t *VAR_86;

  if (VAR_67) {
   VAR_86 = FUNC_2(VAR_66,
       VAR_23);
   if (FUNC_5(VAR_86, VAR_18))
    VAR_86 = FUNC_2(VAR_86,
        VAR_18);
  } else {
   VAR_86 = FUNC_2(VAR_66,
       VAR_21);
  }

  for (VAR_85 = 0; VAR_85 < VAR_5; VAR_85++) {
   zfeature_info_t *VAR_87 = &VAR_59[VAR_85];
   if (!FUNC_5(VAR_86, VAR_87->fi_guid))
    return (VAR_42);
  }
 }

 return (VAR_52);
}
