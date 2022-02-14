
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,int ,int ***,size_t*) ;
 scalar_t__ FUNC_3 (int *,int ,scalar_t__*) ;

__attribute__((used)) static nvlist_t *
FUNC_4(libzfs_handle_t *VAR_4, nvlist_t *VAR_5, uint64_t VAR_6)
{
 uint64_t VAR_7;
 nvlist_t **VAR_8;
 uint_t VAR_9, VAR_10;
 nvlist_t *VAR_11;

 if (FUNC_3(VAR_5, VAR_1, &VAR_7) == 0 &&
     VAR_7 == VAR_6) {
  FUNC_0(FUNC_1("zfs-retire"),
      "matched vdev %llu", VAR_7);
  return (VAR_5);
 }

 if (FUNC_2(VAR_5, VAR_0,
     &VAR_8, &VAR_10) != 0)
  return (((void*)0));

 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  if ((VAR_11 = FUNC_4(VAR_4, VAR_8[VAR_9], VAR_6)) != ((void*)0))
   return (VAR_11);
 }

 if (FUNC_2(VAR_5, VAR_2,
     &VAR_8, &VAR_10) != 0)
  return (((void*)0));

 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  if ((VAR_11 = FUNC_4(VAR_4, VAR_8[VAR_9], VAR_6)) != ((void*)0))
   return (VAR_11);
 }

 if (FUNC_2(VAR_5, VAR_3,
     &VAR_8, &VAR_10) != 0)
  return (((void*)0));

 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  if ((VAR_11 = FUNC_4(VAR_4, VAR_8[VAR_9], VAR_6)) != ((void*)0))
   return (VAR_11);
 }

 return (((void*)0));
}
