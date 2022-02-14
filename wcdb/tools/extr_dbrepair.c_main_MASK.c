
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int member_0; } ;
typedef TYPE_1__ sqliterk_os ;
typedef int sqliterk_master_info ;
typedef int sqliterk ;
typedef int sqlite3 ;
struct TYPE_6__ {int key_len; unsigned char* kdf_salt; scalar_t__ key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int,char**) ;
 int VAR_10 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__,int) ;
 int FUNC_4 (int ,int **) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__,int *,int ,int ,int ,int **,unsigned char*) ;
 int FUNC_8 (int ,int ,int **) ;
 int FUNC_9 (int ,TYPE_3__*,int **) ;
 int FUNC_10 (int *,int *,int *,int ) ;
 int FUNC_11 (TYPE_1__) ;
 int FUNC_12 (int *,scalar_t__,int *,int ) ;
 int FUNC_13 (scalar_t__) ;

int FUNC_14(int VAR_11, char *VAR_12[])
{
 int VAR_13;
 sqlite3 *VAR_14;
 sqliterk *VAR_15;

    sqliterk_os VAR_16 = { VAR_10 };
    FUNC_11(VAR_16);

 FUNC_1(VAR_11, VAR_12);

 if (VAR_9)
 {
  VAR_13 = FUNC_4(VAR_4, &VAR_14);
  if (VAR_13 != VAR_1) return -3;
  if (VAR_2.key)
   FUNC_3(VAR_14, VAR_2.key, VAR_2.key_len);

  int VAR_17 = VAR_7 ? FUNC_13(VAR_7) : 0;
  VAR_13 = FUNC_12(VAR_14, VAR_9, ((void*)0), 0);

  FUNC_2(VAR_14);
  return (VAR_13 == VAR_0) ? 0 : -4;
 }
 else
 {
  sqliterk_master_info *VAR_18 = ((void*)0);
  unsigned char VAR_19[16];
  if (VAR_5)
  {
   VAR_13 = FUNC_7(VAR_5, ((void*)0), 0, VAR_3, VAR_6,
    &VAR_18, VAR_19);
   VAR_2.kdf_salt = VAR_19;
  }
  else
   VAR_13 = FUNC_8(VAR_3, VAR_6, &VAR_18);
  if (VAR_13 != VAR_0) return -6;

  VAR_13 = FUNC_9(VAR_4, VAR_2.key ? &VAR_2 : ((void*)0), &VAR_15);
  if (VAR_13 != VAR_0) return -3;

  VAR_13 = FUNC_4(VAR_8, &VAR_14);
  if (VAR_13 != VAR_1) return -3;
  if (VAR_7)
   FUNC_3(VAR_14, VAR_7, FUNC_13(VAR_7));

  VAR_13 = FUNC_10(VAR_15, VAR_14, VAR_18, 0);

  FUNC_6(VAR_18);
  FUNC_2(VAR_14);
  FUNC_5(VAR_15);
  FUNC_0(VAR_3);

  return (VAR_13 == VAR_0) ? 0 : -4;
 }
}
