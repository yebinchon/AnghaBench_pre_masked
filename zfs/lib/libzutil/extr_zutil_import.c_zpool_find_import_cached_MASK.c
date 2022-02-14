
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct stat64 {scalar_t__ st_size; } ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int libpc_handle_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_6 ;
 char* FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int,struct stat64*) ;
 scalar_t__ FUNC_7 (int *,int ,int *) ;
 scalar_t__ FUNC_8 (int *,int ,char const*) ;
 scalar_t__ FUNC_9 (int **,int ,int ) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *,int *) ;
 scalar_t__ FUNC_12 (char*,scalar_t__,int **,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (char const*,int ) ;
 scalar_t__ FUNC_15 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_16 (char const*,char*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int) ;
 char* FUNC_19 (int *,scalar_t__) ;
 int FUNC_20 (int *,int ,int ) ;
 int FUNC_21 (int *,char*,int ) ;
 int FUNC_22 (int *) ;
 scalar_t__ FUNC_23 (int *,char*,scalar_t__,scalar_t__*) ;
 int * FUNC_24 (int *,int *) ;

__attribute__((used)) static nvlist_t *
FUNC_25(libpc_handle_t *VAR_7, const char *VAR_8,
    const char *VAR_9, uint64_t VAR_10)
{
 char *VAR_11;
 int VAR_12;
 struct stat64 VAR_13;
 nvlist_t *VAR_14, *VAR_15, *VAR_16;
 nvlist_t *VAR_17;
 nvpair_t *VAR_18;
 char *VAR_19;
 uint64_t VAR_20;
 boolean_t VAR_21;

 FUNC_18(VAR_9 == ((void*)0) || VAR_10 == 0);

 if ((VAR_12 = FUNC_14(VAR_8, VAR_1)) < 0) {
  FUNC_21(VAR_7, "%s", FUNC_17(VAR_6));
  (void) FUNC_20(VAR_7, VAR_0,
      FUNC_1(VAR_2, "failed to open cache file"));
  return (((void*)0));
 }

 if (FUNC_6(VAR_12, &VAR_13) != 0) {
  FUNC_21(VAR_7, "%s", FUNC_17(VAR_6));
  (void) FUNC_0(VAR_12);
  (void) FUNC_20(VAR_7, VAR_0,
      FUNC_1(VAR_2, "failed to get size of cache file"));
  return (((void*)0));
 }

 if ((VAR_11 = FUNC_19(VAR_7, VAR_13.st_size)) == ((void*)0)) {
  (void) FUNC_0(VAR_12);
  return (((void*)0));
 }

 if (FUNC_15(VAR_12, VAR_11, VAR_13.st_size) != VAR_13.st_size) {
  (void) FUNC_0(VAR_12);
  FUNC_5(VAR_11);
  (void) FUNC_20(VAR_7, VAR_0,
      FUNC_1(VAR_2,
      "failed to read cache file contents"));
  return (((void*)0));
 }

 (void) FUNC_0(VAR_12);

 if (FUNC_12(VAR_11, VAR_13.st_size, &VAR_14, 0) != 0) {
  FUNC_5(VAR_11);
  (void) FUNC_20(VAR_7, VAR_0,
      FUNC_1(VAR_2,
      "invalid or corrupt cache file contents"));
  return (((void*)0));
 }

 FUNC_5(VAR_11);





 if (FUNC_9(&VAR_17, 0, 0) != 0) {
  (void) FUNC_22(VAR_7);
  FUNC_10(VAR_14);
  return (((void*)0));
 }

 VAR_18 = ((void*)0);
 while ((VAR_18 = FUNC_11(VAR_14, VAR_18)) != ((void*)0)) {
  VAR_15 = FUNC_4(VAR_18);

  VAR_19 = FUNC_2(VAR_15, VAR_5);
  if (VAR_9 != ((void*)0) && FUNC_16(VAR_9, VAR_19) != 0)
   continue;

  VAR_20 = FUNC_3(VAR_15, VAR_4);
  if (VAR_10 != 0 && VAR_10 != VAR_20)
   continue;

  if (FUNC_23(VAR_7, VAR_19, VAR_20, &VAR_21) != 0) {
   FUNC_10(VAR_14);
   FUNC_10(VAR_17);
   return (((void*)0));
  }

  if (VAR_21)
   continue;

  if (FUNC_8(VAR_15, VAR_3,
      VAR_8) != 0) {
   (void) FUNC_22(VAR_7);
   FUNC_10(VAR_14);
   FUNC_10(VAR_17);
   return (((void*)0));
  }

  if ((VAR_16 = FUNC_24(VAR_7, VAR_15)) == ((void*)0)) {
   FUNC_10(VAR_14);
   FUNC_10(VAR_17);
   return (((void*)0));
  }

  if (FUNC_7(VAR_17, FUNC_13(VAR_18), VAR_16) != 0) {
   (void) FUNC_22(VAR_7);
   FUNC_10(VAR_16);
   FUNC_10(VAR_14);
   FUNC_10(VAR_17);
   return (((void*)0));
  }
  FUNC_10(VAR_16);
 }

 FUNC_10(VAR_14);
 return (VAR_17);
}
