
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvpair_t ;
typedef int nvlist_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int *,int *) ;
 int * FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int **) ;
 int * FUNC_6 (int *,int *) ;
 char const* FUNC_7 (int *) ;
 char* FUNC_8 (char const*,char) ;
 int FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (char const*,char const*,int) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (char*,int *,int *) ;
 scalar_t__ FUNC_13 (char const*,int ) ;
 int FUNC_14 (char const*,int ,int ) ;

__attribute__((used)) static int
FUNC_15(const char *VAR_5, nvlist_t *VAR_6, nvlist_t *VAR_7)
{
 nvlist_t *VAR_8;
 nvlist_t *VAR_9 = ((void*)0);
 int VAR_10, VAR_11;
 nvpair_t *VAR_12;

 (void) FUNC_5(VAR_6, "props", &VAR_9);
 if (!FUNC_4(VAR_9) &&
     FUNC_13(VAR_5, VAR_3))
  return (FUNC_1(VAR_1));
 if ((VAR_10 = FUNC_11(VAR_9)) != 0)
  return (VAR_10);

 VAR_8 = FUNC_3(VAR_6, "snaps");
 VAR_11 = FUNC_9(VAR_5);
 for (VAR_12 = FUNC_6(VAR_8, ((void*)0)); VAR_12 != ((void*)0);
     VAR_12 = FUNC_6(VAR_8, VAR_12)) {
  const char *VAR_13 = FUNC_7(VAR_12);
  char *VAR_14 = FUNC_8(VAR_13, '@');





  if (VAR_14 == ((void*)0) ||
      FUNC_12(VAR_14 + 1, ((void*)0), ((void*)0)) != 0)
   return (FUNC_1(VAR_0));




  if (FUNC_10(VAR_13, VAR_5, VAR_11) != 0 ||
      (VAR_13[VAR_11] != '/' && VAR_13[VAR_11] != '@'))
   return (FUNC_1(VAR_2));




  if (!FUNC_4(VAR_9)) {
   *VAR_14 = '\0';
   VAR_10 = FUNC_14(VAR_13,
       VAR_4, FUNC_0());
   *VAR_14 = '@';
   if (VAR_10 != 0)
    return (VAR_10);
  }


  for (nvpair_t *VAR_15 = FUNC_6(VAR_8, VAR_12);
      VAR_15 != ((void*)0); VAR_15 = FUNC_6(VAR_8, VAR_15)) {
   if (FUNC_10(VAR_13, FUNC_7(VAR_15), VAR_14 - VAR_13 + 1)
       == 0) {
    return (FUNC_1(VAR_2));
   }
  }
 }

 VAR_10 = FUNC_2(VAR_8, VAR_9, VAR_7);

 return (VAR_10);
}
