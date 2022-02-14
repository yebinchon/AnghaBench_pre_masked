
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int objset_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int ,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int *,int ,char*,int,int,int *,int *) ;

__attribute__((used)) static int
FUNC_12(uint64_t VAR_5, objset_t *VAR_6)
{
 dmu_tx_t *VAR_7;
 int VAR_8;
 uint64_t VAR_9;

 VAR_7 = FUNC_6(VAR_6);
 FUNC_8(VAR_7, VAR_4, VAR_1, ((void*)0));
 FUNC_9(VAR_7);
 VAR_8 = FUNC_4(VAR_7, VAR_2);
 if (VAR_8) {
  FUNC_3(VAR_7);
  return (FUNC_0(VAR_8));
 }
 VAR_9 = FUNC_7(VAR_7);

 VAR_8 = FUNC_11(VAR_6, VAR_4, "size", 8, 1,
     &VAR_5, VAR_7);
 FUNC_5(VAR_7);

 FUNC_10(FUNC_2(VAR_6), VAR_9);

 if (VAR_8 == 0)
  VAR_8 = FUNC_1(VAR_6,
      VAR_3, VAR_5, VAR_0);

 return (VAR_8);
}
