
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ zc_nvlist_src_size; scalar_t__ zc_name; scalar_t__ zc_simple; int zc_obj; int zc_cookie; int zc_iflags; int zc_nvlist_src; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef scalar_t__ uint64_t ;
typedef int objset_t ;
typedef int nvlist_t ;
typedef int dsl_dataset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int *,int **) ;
 int FUNC_2 (scalar_t__,int ,int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,scalar_t__,scalar_t__,int *,int *,int *) ;
 int FUNC_6 (int ,int ,int ,int **) ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int ,scalar_t__,int ,int **) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ,scalar_t__*) ;
 char* FUNC_13 (scalar_t__,char) ;
 scalar_t__ FUNC_14 (scalar_t__,char*,int) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 int FUNC_16 (TYPE_1__*,int *) ;

__attribute__((used)) static int
FUNC_17(zfs_cmd_t *VAR_9)
{
 int VAR_10;
 objset_t *VAR_11, *VAR_12;
 dsl_dataset_t *VAR_13;
 uint64_t VAR_14 = 0, VAR_15 = 0;

 if (VAR_9->zc_nvlist_src_size != 0) {
  nvlist_t *VAR_16 = ((void*)0);
  VAR_10 = FUNC_9(VAR_9->zc_nvlist_src, VAR_9->zc_nvlist_src_size,
      VAR_9->zc_iflags, &VAR_16);
  if (VAR_10 != 0)
   return (VAR_10);
  (void) FUNC_12(VAR_16, VAR_7,
      &VAR_14);
  (void) FUNC_12(VAR_16, VAR_6,
      &VAR_15);
  FUNC_11(VAR_16);
 }

 VAR_10 = FUNC_2(VAR_9->zc_name, VAR_4, &VAR_11);
 if (VAR_10 != 0) {
  return (VAR_10 == VAR_1 ? VAR_2 : VAR_10);
 }





 if (FUNC_14(VAR_9->zc_name, "@", sizeof (VAR_9->zc_name)) >=
     VAR_8) {
  FUNC_4(VAR_11, VAR_4);
  return (FUNC_0(VAR_2));
 }

 while (VAR_10 == 0) {
  if (FUNC_10(VAR_5) && FUNC_10(VAR_3)) {
   VAR_10 = FUNC_0(VAR_0);
   break;
  }

  VAR_10 = FUNC_5(VAR_11,
      sizeof (VAR_9->zc_name) - FUNC_15(VAR_9->zc_name),
      VAR_9->zc_name + FUNC_15(VAR_9->zc_name), &VAR_9->zc_obj,
      &VAR_9->zc_cookie, ((void*)0));
  if (VAR_10 == VAR_1) {
   VAR_10 = FUNC_0(VAR_2);
   break;
  } else if (VAR_10 != 0) {
   break;
  }

  VAR_10 = FUNC_6(FUNC_3(VAR_11), VAR_9->zc_obj,
      VAR_4, &VAR_13);
  if (VAR_10 != 0)
   break;

  if ((VAR_14 != 0 && FUNC_8(VAR_13) < VAR_14) ||
      (VAR_15 != 0 && FUNC_8(VAR_13) > VAR_15)) {
   FUNC_7(VAR_13, VAR_4);

   *(FUNC_13(VAR_9->zc_name, '@') + 1) = '\0';

   continue;
  }

  if (VAR_9->zc_simple) {
   FUNC_7(VAR_13, VAR_4);
   break;
  }

  if ((VAR_10 = FUNC_1(VAR_13, &VAR_12)) != 0) {
   FUNC_7(VAR_13, VAR_4);
   break;
  }
  if ((VAR_10 = FUNC_16(VAR_9, VAR_12)) != 0) {
   FUNC_7(VAR_13, VAR_4);
   break;
  }
  FUNC_7(VAR_13, VAR_4);
  break;
 }

 FUNC_4(VAR_11, VAR_4);

 if (VAR_10 != 0)
  *FUNC_13(VAR_9->zc_name, '@') = '\0';
 return (VAR_10);
}
