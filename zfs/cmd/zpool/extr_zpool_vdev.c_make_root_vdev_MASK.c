
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_handle_t ;
typedef int nvlist_t ;
typedef int boolean_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int,char**) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *,int *,int,int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (int *,int *) ;

nvlist_t *
FUNC_9(zpool_handle_t *VAR_2, nvlist_t *VAR_3, int VAR_4, int VAR_5,
    boolean_t VAR_6, boolean_t VAR_7, int VAR_8, char **VAR_9)
{
 nvlist_t *VAR_10;
 nvlist_t *VAR_11 = ((void*)0);
 VAR_1 = VAR_4;






 if ((VAR_10 = FUNC_1(VAR_3, VAR_8, VAR_9)) == ((void*)0))
  return (((void*)0));

 if (VAR_2 && ((VAR_11 = FUNC_8(VAR_2, ((void*)0))) == ((void*)0))) {
  FUNC_6(VAR_10);
  return (((void*)0));
 }







 if (FUNC_3(VAR_11, VAR_10, VAR_4, VAR_6, VAR_0)) {
  FUNC_6(VAR_10);
  return (((void*)0));
 }






 if (VAR_5 && FUNC_0(VAR_11, VAR_10) != 0) {
  FUNC_6(VAR_10);
  return (((void*)0));
 }




 if (VAR_11 == ((void*)0) && FUNC_5(VAR_10) == 0) {
  FUNC_7(FUNC_2("at least one general top-level vdev must "
      "be specified\n"));
  FUNC_6(VAR_10);
  return (((void*)0));
 }




 if (!VAR_7 && FUNC_4(VAR_2, VAR_10) != 0) {
  FUNC_6(VAR_10);
  return (((void*)0));
 }

 return (VAR_10);
}
