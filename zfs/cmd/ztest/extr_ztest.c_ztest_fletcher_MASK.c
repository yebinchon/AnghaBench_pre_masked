
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ztest_ds_t ;
typedef int zio_cksum_t ;
typedef int zc_byteswap ;
typedef int zc ;
typedef int uint64_t ;
typedef int uint32_t ;
struct abd {int dummy; } ;
typedef scalar_t__ hrtime_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 struct abd* FUNC_1 (int,int ) ;
 int FUNC_2 (struct abd*,void*,int ,int) ;
 int FUNC_3 (struct abd*,int,int *,int *) ;
 int FUNC_4 (struct abd*,int,int *,int *) ;
 int FUNC_5 (struct abd*) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (void*,int,int *,int *) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (void*,int,int *,int *) ;
 scalar_t__ FUNC_10 () ;
 void* FUNC_11 (int,int ) ;
 int FUNC_12 (void*,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 () ;

void
FUNC_15(ztest_ds_t *VAR_5, uint64_t VAR_6)
{
 hrtime_t VAR_7 = FUNC_10() + VAR_2;

 while (FUNC_10() <= VAR_7) {
  int VAR_8 = 100;
  void *VAR_9;
  struct abd *VAR_10, *VAR_11;
  uint32_t VAR_12;
  int *VAR_13;
  int VAR_14;
  zio_cksum_t VAR_15;
  zio_cksum_t VAR_16;

  VAR_12 = FUNC_14();

  VAR_9 = FUNC_11(VAR_12, VAR_4);
  VAR_10 = FUNC_1(VAR_12, VAR_0);
  VAR_11 = FUNC_1(VAR_12, VAR_1);

  for (VAR_14 = 0, VAR_13 = VAR_9; VAR_14 < VAR_12 / sizeof (*VAR_13); VAR_14++, VAR_13++)
   *VAR_13 = FUNC_13(VAR_3);

  FUNC_2(VAR_10, VAR_9, 0, VAR_12);
  FUNC_2(VAR_11, VAR_9, 0, VAR_12);

  FUNC_0(FUNC_8("scalar"));
  FUNC_9(VAR_9, VAR_12, ((void*)0), &VAR_15);
  FUNC_7(VAR_9, VAR_12, ((void*)0), &VAR_16);

  FUNC_0(FUNC_8("cycle"));
  while (VAR_8-- > 0) {
   zio_cksum_t VAR_17;
   zio_cksum_t VAR_18;

   FUNC_7(VAR_9, VAR_12, ((void*)0), &VAR_18);
   FUNC_9(VAR_9, VAR_12, ((void*)0), &VAR_17);

   FUNC_0(FUNC_6(&VAR_17, &VAR_15, sizeof (VAR_17)));
   FUNC_0(FUNC_6(&VAR_18, &VAR_16,
       sizeof (VAR_18)));


   FUNC_3(VAR_10, VAR_12, ((void*)0),
       &VAR_18);
   FUNC_4(VAR_10, VAR_12, ((void*)0), &VAR_17);

   FUNC_0(FUNC_6(&VAR_17, &VAR_15, sizeof (VAR_17)));
   FUNC_0(FUNC_6(&VAR_18, &VAR_16,
       sizeof (VAR_18)));


   FUNC_3(VAR_11, VAR_12, ((void*)0),
       &VAR_18);
   FUNC_4(VAR_11, VAR_12, ((void*)0), &VAR_17);

   FUNC_0(FUNC_6(&VAR_17, &VAR_15, sizeof (VAR_17)));
   FUNC_0(FUNC_6(&VAR_18, &VAR_16,
       sizeof (VAR_18)));

  }

  FUNC_12(VAR_9, VAR_12);
  FUNC_5(VAR_10);
  FUNC_5(VAR_11);
 }
}
