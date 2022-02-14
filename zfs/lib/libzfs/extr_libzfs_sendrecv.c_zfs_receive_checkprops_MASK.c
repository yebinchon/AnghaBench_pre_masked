
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zfs_prop_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int *,int *) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,char const*) ;
 scalar_t__ FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static boolean_t
FUNC_8(libzfs_handle_t *VAR_8, nvlist_t *VAR_9,
    const char *VAR_10)
{
 nvpair_t *VAR_11;
 zfs_prop_t VAR_12;
 const char *VAR_13;

 VAR_11 = ((void*)0);
 while ((VAR_11 = FUNC_1(VAR_9, VAR_11)) != ((void*)0)) {
  VAR_13 = FUNC_2(VAR_11);
  VAR_12 = FUNC_4(VAR_13);

  if (VAR_12 == VAR_7) {
   if (!FUNC_7(VAR_13)) {
    FUNC_3(VAR_8, FUNC_0(VAR_2,
        "invalid property '%s'"), VAR_13);
    return (VAR_0);
   }
   continue;
  }




  if (VAR_12 == VAR_4)
   continue;


  if (VAR_12 == VAR_3 ||
      FUNC_5(VAR_12))
   continue;





  if (FUNC_6(VAR_12) || VAR_12 == VAR_5 ||
      VAR_12 == VAR_6) {
   FUNC_3(VAR_8, FUNC_0(VAR_2,
       "invalid property '%s'"), VAR_13);
   return (VAR_0);
  }
 }

 return (VAR_1);
}
