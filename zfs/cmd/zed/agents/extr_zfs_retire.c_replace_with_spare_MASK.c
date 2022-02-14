
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zprop_source_t ;
typedef int zpool_handle_t ;
typedef size_t uint_t ;
typedef int nvlist_t ;
typedef int fmd_hdl_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,char*,int ) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int ,int **,int) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int ,int **) ;
 scalar_t__ FUNC_9 (int *,int ,int ***,size_t*) ;
 scalar_t__ FUNC_10 (int *,int ,char**) ;
 int * FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int ,scalar_t__*) ;
 scalar_t__ FUNC_13 (int *,char*,char*,int *,int ) ;
 char* FUNC_14 (int *,int *,int *,int ) ;

__attribute__((used)) static boolean_t
FUNC_15(fmd_hdl_t *VAR_12, zpool_handle_t *VAR_13, nvlist_t *VAR_14)
{
 nvlist_t *VAR_15, *VAR_16, *VAR_17;
 nvlist_t **VAR_18;
 uint_t VAR_19, VAR_20;
 char *VAR_21;
 zprop_source_t VAR_22;
 int VAR_23;

 VAR_15 = FUNC_11(VAR_13, ((void*)0));
 if (FUNC_8(VAR_15, VAR_9,
     &VAR_16) != 0)
  return (VAR_0);




 if (FUNC_9(VAR_16, VAR_7,
     &VAR_18, &VAR_20) != 0)
  return (VAR_0);




 VAR_23 = FUNC_12(VAR_13, VAR_10, &VAR_22);

 VAR_17 = FUNC_2(VAR_12, VAR_2);

 (void) FUNC_5(VAR_17, VAR_8,
     VAR_3);

 VAR_21 = FUNC_14(((void*)0), VAR_13, VAR_14, VAR_0);





 for (VAR_19 = 0; VAR_19 < VAR_20; VAR_19++) {
  char *VAR_24;

  if (FUNC_10(VAR_18[VAR_19], VAR_6,
      &VAR_24) != 0)
   continue;


  if (VAR_22 != VAR_11)
   (void) FUNC_6(VAR_18[VAR_19],
       VAR_4, VAR_23);

  (void) FUNC_4(VAR_17,
      VAR_5, &VAR_18[VAR_19], 1);

  FUNC_1(VAR_12, "zpool_vdev_replace '%s' with spare '%s'",
      VAR_21, FUNC_0(VAR_24));

  if (FUNC_13(VAR_13, VAR_21, VAR_24,
      VAR_17, VAR_1) == 0) {
   FUNC_3(VAR_21);
   FUNC_7(VAR_17);
   return (VAR_1);
  }
 }

 FUNC_3(VAR_21);
 FUNC_7(VAR_17);

 return (VAR_0);
}
