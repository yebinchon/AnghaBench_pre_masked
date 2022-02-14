
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;
typedef int libpc_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ,int ***,size_t*) ;
 int FUNC_1 (int *,int ,char**) ;
 int FUNC_2 (int *,int ,scalar_t__*) ;

__attribute__((used)) static int
FUNC_3(libpc_handle_t *VAR_4, nvlist_t *VAR_5, uint64_t VAR_6,
    uint64_t VAR_7, char **VAR_8, char **VAR_9)
{
 nvlist_t **VAR_10;
 uint_t VAR_11, VAR_12;
 uint64_t VAR_13;
 char *VAR_14;
 int VAR_15;

 if (FUNC_0(VAR_5, VAR_0,
     &VAR_10, &VAR_12) == 0) {
  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
   VAR_15 = FUNC_3(VAR_4, VAR_10[VAR_11],
       VAR_6, VAR_7, VAR_8, VAR_9);
   if (VAR_15)
    return (VAR_15);
  }
  return (0);
 }

 if (VAR_5 == ((void*)0))
  return (0);

 VAR_15 = FUNC_2(VAR_5, VAR_2, &VAR_13);
 if ((VAR_15 != 0) || (VAR_13 != VAR_7))
  return (0);

 VAR_15 = FUNC_1(VAR_5, VAR_3, &VAR_14);
 if (VAR_15 == 0)
  *VAR_8 = VAR_14;

 VAR_15 = FUNC_1(VAR_5, VAR_1, &VAR_14);
 if (VAR_15 == 0)
  *VAR_9 = VAR_14;

 return (0);
}
