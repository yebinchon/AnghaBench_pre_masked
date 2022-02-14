
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int zprop_source_t ;
typedef int zfsvfs_t ;
typedef int zfs_prop_t ;
struct TYPE_6__ {int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int uint64_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (char const*,int ,int ) ;
 int FUNC_3 (char const*,int ,int ) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char const*,int ,int ) ;
 int FUNC_6 (char const*,int ,int ) ;
 char* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_10 (int,int ) ;
 scalar_t__ FUNC_11 (int *,int ,int **) ;
 char* FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *,int **) ;
 int FUNC_15 (int ,char const*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (char const*) ;
 scalar_t__ FUNC_19 (int) ;
 int FUNC_20 (char const*,int *) ;
 scalar_t__ FUNC_21 (char const*) ;
 int FUNC_22 (int *,int ) ;
 int FUNC_23 (char const*,int ,int **,int ) ;
 int FUNC_24 (int *,int ) ;
 int FUNC_25 (char const*,int ,int ) ;
 int FUNC_26 (char const*,int ,int ) ;
 int FUNC_27 (char const*,int ) ;

__attribute__((used)) static int
FUNC_28(const char *VAR_9, zprop_source_t VAR_10,
    nvpair_t *VAR_11)
{
 const char *VAR_12 = FUNC_12(VAR_11);
 zfs_prop_t VAR_13 = FUNC_18(VAR_12);
 uint64_t VAR_14 = 0;
 char *VAR_15 = ((void*)0);
 int VAR_16 = -1;

 if (VAR_13 == VAR_7) {
  if (FUNC_21(VAR_12))
   return (FUNC_20(VAR_9, VAR_11));
  return (-1);
 }

 if (FUNC_13(VAR_11) == VAR_1) {
  nvlist_t *VAR_17;
  FUNC_0(FUNC_14(VAR_11, &VAR_17) == 0);
  FUNC_0(FUNC_11(VAR_17, VAR_8,
      &VAR_11) == 0);
 }


 if (FUNC_19(VAR_13) == VAR_4) {
  VAR_15 = FUNC_7(VAR_11);
 } else {
  VAR_14 = FUNC_8(VAR_11);
 }

 switch (VAR_13) {
 case 136:
  VAR_16 = FUNC_5(VAR_9, VAR_10, VAR_14);
  break;
 case 135:
  VAR_16 = FUNC_2(VAR_9, VAR_10, VAR_14);
  break;
 case 138:
 case 131:
  if (VAR_14 == VAR_5) {

   VAR_16 = 0;
  } else {
   VAR_16 = FUNC_4(VAR_9);
  }




  if (VAR_16 == 0)
   VAR_16 = -1;
  break;
 case 137:
  VAR_16 = FUNC_1(VAR_9, VAR_15);





  if (VAR_16 == 0)
   VAR_16 = -1;
  break;
 case 133:
  VAR_16 = FUNC_6(VAR_9, VAR_10, VAR_14);
  break;
 case 134:
  VAR_16 = FUNC_3(VAR_9, VAR_10, VAR_14);
  break;
 case 128:
  VAR_16 = FUNC_27(VAR_9, VAR_14);
  break;
 case 132:
  VAR_16 = FUNC_25(VAR_9, VAR_10, VAR_14);
  break;
 case 129:
  VAR_16 = FUNC_26(VAR_9, VAR_10, VAR_14);
  break;
 case 130:
 {
  zfsvfs_t *VAR_18;

  if ((VAR_16 = FUNC_23(VAR_9, VAR_2, &VAR_18, VAR_0)) != 0)
   break;

  VAR_16 = FUNC_22(VAR_18, VAR_14);
  FUNC_24(VAR_18, VAR_2);

  if (VAR_16 == 0 && VAR_14 >= VAR_6) {
   zfs_cmd_t *VAR_19;

   VAR_19 = FUNC_10(sizeof (zfs_cmd_t), VAR_3);
   (void) FUNC_15(VAR_19->zc_name, VAR_9);
   (void) FUNC_17(VAR_19);
   (void) FUNC_16(VAR_19);
   FUNC_9(VAR_19, sizeof (zfs_cmd_t));
  }
  break;
 }
 default:
  VAR_16 = -1;
 }

 return (VAR_16);
}
