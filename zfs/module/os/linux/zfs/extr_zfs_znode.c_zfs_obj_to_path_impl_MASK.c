
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int sa_handle_t ;
typedef int sa_attr_type_t ;
typedef int objset_t ;
typedef int dmu_buf_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned long long) ;
 int VAR_5 ;
 int FUNC_3 (char*,char*,size_t) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,char*) ;
 size_t FUNC_6 (char*) ;
 int FUNC_7 (int *,int ,int ,int,int,scalar_t__*) ;
 int FUNC_8 (int *,scalar_t__,scalar_t__) ;
 int FUNC_9 (int *,scalar_t__,scalar_t__,int ,char*) ;
 int FUNC_10 (int *,scalar_t__,int **,int **,int ) ;
 int FUNC_11 (int *,int *,int *,scalar_t__*,int*) ;
 int FUNC_12 (int *,int *,int ) ;

__attribute__((used)) static int
FUNC_13(objset_t *VAR_6, uint64_t VAR_7, sa_handle_t *VAR_8,
    sa_attr_type_t *VAR_9, char *VAR_10, int VAR_11)
{
 sa_handle_t *VAR_12;
 sa_handle_t *VAR_13 = ((void*)0);
 dmu_buf_t *VAR_14 = ((void*)0);
 dmu_buf_t *VAR_15 = ((void*)0);
 char *VAR_16 = VAR_10 + VAR_11 - 1;
 int VAR_17;

 *VAR_16 = '\0';
 VAR_12 = VAR_8;

 uint64_t VAR_18;
 FUNC_1(FUNC_7(VAR_6, VAR_3,
     VAR_5, sizeof (uint64_t), 1, &VAR_18));
 VAR_17 = FUNC_8(VAR_6, VAR_18, VAR_7);
 if (VAR_17 == 0) {
  return (VAR_1);
 } else if (VAR_17 != VAR_0) {
  return (VAR_17);
 }
 VAR_17 = 0;

 for (;;) {
  uint64_t VAR_19 = 0;
  char VAR_20[VAR_4 + 2];
  size_t VAR_21;
  int VAR_22 = 0;

  if (VAR_14)
   FUNC_12(VAR_13, VAR_14, VAR_2);

  if ((VAR_17 = FUNC_11(VAR_6, VAR_12, VAR_9, &VAR_19,
      &VAR_22)) != 0)
   break;

  if (VAR_19 == VAR_7) {
   if (VAR_16[0] != '/')
    *--VAR_16 = '/';
   break;
  }

  VAR_20[0] = '/';
  if (VAR_22) {
   (void) FUNC_5(VAR_20 + 1, "<xattrdir>");
  } else {
   VAR_17 = FUNC_9(VAR_6, VAR_19, VAR_7,
       FUNC_2(-1ULL), VAR_20 + 1);
   if (VAR_17 != 0)
    break;
  }

  VAR_21 = FUNC_6(VAR_20);
  VAR_16 -= VAR_21;
  FUNC_0(VAR_16 >= VAR_10);
  FUNC_3(VAR_20, VAR_16, VAR_21);
  VAR_7 = VAR_19;

  if (VAR_12 != VAR_8) {
   VAR_13 = VAR_12;
   VAR_14 = VAR_15;
  }
  VAR_17 = FUNC_10(VAR_6, VAR_7, &VAR_12, &VAR_15, VAR_2);
  if (VAR_17 != 0) {
   VAR_12 = VAR_13;
   VAR_15 = VAR_14;
   break;
  }
 }

 if (VAR_12 != ((void*)0) && VAR_12 != VAR_8) {
  FUNC_0(VAR_15 != ((void*)0));
  FUNC_12(VAR_12, VAR_15, VAR_2);
 }

 if (VAR_17 == 0)
  (void) FUNC_4(VAR_10, VAR_16, VAR_10 + VAR_11 - VAR_16);

 return (VAR_17);
}
