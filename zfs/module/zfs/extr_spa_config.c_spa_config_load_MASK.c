
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct _buf {int dummy; } ;
typedef int nvpair_t ;
typedef int nvlist_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *) ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (struct _buf*) ;
 scalar_t__ FUNC_4 (struct _buf*,int *) ;
 struct _buf* FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (struct _buf*,void*,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *,int *) ;
 scalar_t__ FUNC_11 (void*,int ,int **,int ) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (char*,int ,char*,char*) ;
 int FUNC_15 (int ,int *,int *) ;
 char* VAR_3 ;
 int * FUNC_16 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

void
FUNC_17(void)
{
 void *VAR_6 = ((void*)0);
 nvlist_t *VAR_7, *VAR_8;
 nvpair_t *VAR_9;
 char *VAR_10;
 struct _buf *VAR_11;
 uint64_t VAR_12;
 VAR_10 = FUNC_1(VAR_2, VAR_1);

 (void) FUNC_14(VAR_10, VAR_2, "%s", VAR_3);

 VAR_11 = FUNC_5(VAR_10);

 FUNC_2(VAR_10, VAR_2);

 if (VAR_11 == (struct _buf *)-1)
  return;

 if (FUNC_4(VAR_11, &VAR_12) != 0)
  goto out;

 VAR_6 = FUNC_1(VAR_12, VAR_1);




 if (FUNC_6(VAR_11, VAR_6, VAR_12, 0) < 0)
  goto out;




 if (FUNC_11(VAR_6, VAR_12, &VAR_7, VAR_1) != 0)
  goto out;





 FUNC_7(&VAR_4);
 VAR_9 = ((void*)0);
 while ((VAR_9 = FUNC_10(VAR_7, VAR_9)) != ((void*)0)) {
  if (FUNC_13(VAR_9) != VAR_0)
   continue;

  VAR_8 = FUNC_0(VAR_9);

  if (FUNC_16(FUNC_12(VAR_9)) != ((void*)0))
   continue;
  (void) FUNC_15(FUNC_12(VAR_9), VAR_8, ((void*)0));
 }
 FUNC_8(&VAR_4);

 FUNC_9(VAR_7);

out:
 if (VAR_6 != ((void*)0))
  FUNC_2(VAR_6, VAR_12);

 FUNC_3(VAR_11);
}
