
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int sqlite3 ;
typedef int mm_recover_ctx ;
typedef int mm_backup_ctx ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int const*,int,int ,int ,int ) ;
 int FUNC_3 (int *,int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,int const*,int,int ) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int,char**) ;
 int FUNC_8 (scalar_t__) ;
 int VAR_13 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,scalar_t__,int) ;
 int FUNC_11 (int ,int **) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (char*) ;

int FUNC_14(int VAR_14, char *VAR_15[])
{
 int VAR_16;
 sqlite3 *VAR_17;

 FUNC_7(VAR_14, VAR_15);
 if (VAR_12) FUNC_8(VAR_12);

 int VAR_18 = VAR_7 ? FUNC_12(VAR_7) : 0;

 VAR_16 = FUNC_11(VAR_3, &VAR_17);
 if (VAR_16 != VAR_2) return -3;

 if (VAR_4)
  FUNC_10(VAR_17, VAR_4, FUNC_12(VAR_4));

 if (VAR_9 == VAR_0)
 {
  mm_backup_ctx *VAR_19 = FUNC_2((const uint8_t *) VAR_7, VAR_18, VAR_5,
    VAR_6, VAR_13);
  if (!VAR_19) return -2;

  VAR_16 = FUNC_3(VAR_19, VAR_17, VAR_10, VAR_8);
  if (VAR_16 != 0) return -4;

  FUNC_1(VAR_19);
 }
 else if (VAR_9 == VAR_1)
 {
  mm_recover_ctx *VAR_20 = FUNC_5(VAR_5, (const uint8_t *) VAR_7, VAR_18, VAR_13);
  if (!VAR_20) return -2;

  VAR_16 = FUNC_6(VAR_20, VAR_17, 1);
  if (VAR_16 != 0) return -4;

  FUNC_4(VAR_20);
 }
 else FUNC_13(VAR_15[0]);

 FUNC_0(VAR_11);
 FUNC_0(VAR_10);

 FUNC_9(VAR_17);
 return 0;
}
