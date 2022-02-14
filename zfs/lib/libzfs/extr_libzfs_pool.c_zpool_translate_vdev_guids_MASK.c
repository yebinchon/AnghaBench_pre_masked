
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_handle_t ;
typedef scalar_t__ uint64_t ;
typedef int u_longlong_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int msg ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (int *,char*,scalar_t__) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int * FUNC_6 (int *,int *) ;
 char* FUNC_7 (int *) ;
 int FUNC_8 (char*,int,char*,int ) ;
 int FUNC_9 (int ) ;
 int * FUNC_10 (int *,char*,scalar_t__*,scalar_t__*,int *) ;

__attribute__((used)) static int
FUNC_11(zpool_handle_t *VAR_6, nvlist_t *VAR_7,
    nvlist_t *VAR_8, nvlist_t *VAR_9, nvlist_t **VAR_10)
{
 nvlist_t *VAR_11 = ((void*)0);
 int VAR_12 = 0;

 for (nvpair_t *VAR_13 = FUNC_6(VAR_7, ((void*)0)); VAR_13 != ((void*)0);
     VAR_13 = FUNC_6(VAR_7, VAR_13)) {
  boolean_t VAR_14, VAR_15;

  char *VAR_16 = FUNC_7(VAR_13);
  nvlist_t *VAR_17 = FUNC_10(VAR_6, VAR_16, &VAR_14, &VAR_15,
      ((void*)0));

  if ((VAR_17 == ((void*)0)) || VAR_15 || VAR_14) {
   if (VAR_11 == ((void*)0)) {
    VAR_11 = FUNC_3();
    VAR_12 = VAR_0;
   }

   uint64_t VAR_18 = (VAR_17 == ((void*)0)) ? VAR_3 :
       (VAR_14 ? VAR_2 : VAR_1);
   FUNC_0(VAR_11, VAR_16, VAR_18);
   continue;
  }

  uint64_t VAR_19 = FUNC_5(VAR_17, VAR_5);
  FUNC_2(VAR_8, VAR_16, VAR_19);

  char VAR_20[VAR_4];
  (void) FUNC_8(VAR_20, sizeof (VAR_20), "%llu", (u_longlong_t)VAR_19);
  FUNC_1(VAR_9, VAR_20, VAR_16);
 }

 if (VAR_12 != 0) {
  FUNC_9(VAR_11 != ((void*)0));
  if (VAR_10 != ((void*)0))
   *VAR_10 = VAR_11;
  else
   FUNC_4(VAR_11);
 }

 return (VAR_12);
}
