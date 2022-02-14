
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int uchar_t ;
typedef int nvlist_t ;
typedef int int8_t ;
typedef int int64_t ;
typedef int int32_t ;
typedef int int16_t ;
typedef int buf ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *,char const*,int *,int) ;
 int FUNC_2 (int *,char const*,int ) ;
 int FUNC_3 (int *,char const*,int) ;
 int FUNC_4 (int *,char const*,int*,int) ;
 int FUNC_5 (int *,char const*,int) ;
 int FUNC_6 (int *,char const*,int*,int) ;
 int FUNC_7 (int *,char const*,int) ;
 int FUNC_8 (int *,char const*,int*,int) ;
 int FUNC_9 (int *,char const*,int) ;
 int FUNC_10 (int *,char const*,int*,int) ;
 int FUNC_11 (int *,char const*,int) ;
 int FUNC_12 (int *,char const*,int*,int) ;
 int FUNC_13 (int *,char const*,int *) ;
 int FUNC_14 (int *,char const*,int **,int) ;
 int FUNC_15 (int *,char const*,char*) ;
 int FUNC_16 (int *,char const*,char* const*,int) ;
 int FUNC_17 (int *,char const*,int) ;
 int FUNC_18 (int *,char const*,int*,int) ;
 int FUNC_19 (int *,char const*,int) ;
 int FUNC_20 (int *,char const*,int*,int) ;
 int FUNC_21 (int *,char const*,int) ;
 int FUNC_22 (int *,char const*,int*,int) ;
 int FUNC_23 (int *,char const*,int) ;
 int FUNC_24 (int *,char const*,int*,int) ;
 int * FUNC_25 () ;
 int FUNC_26 (int *) ;
 int FUNC_27 (char*) ;
 char* FUNC_28 (int) ;
 int * VAR_2 ;
 int FUNC_29 (char*,int,char*,int) ;
 int FUNC_30 (char*,int ,int ) ;

__attribute__((used)) static void
FUNC_31(void)
{
 const char *VAR_3 = "key";


 int VAR_4 = 1024 * 31;
 char *VAR_5 = FUNC_28(VAR_4);
 for (int VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
  VAR_5[VAR_6] = 'a' + VAR_6 % 26;
 VAR_5[VAR_4 - 1] = '\0';

 VAR_2 = FUNC_25();

 FUNC_0(VAR_2, VAR_3);
 FUNC_30("boolean", VAR_1, VAR_0);

 FUNC_2(VAR_2, VAR_3, VAR_1);
 FUNC_30("boolean_value", VAR_0, VAR_0);

 FUNC_3(VAR_2, VAR_3, 1);
 FUNC_30("byte", VAR_0, VAR_0);

 FUNC_11(VAR_2, VAR_3, 1);
 FUNC_30("int8", VAR_0, VAR_0);

 FUNC_23(VAR_2, VAR_3, 1);
 FUNC_30("uint8", VAR_0, VAR_0);

 FUNC_5(VAR_2, VAR_3, 1);
 FUNC_30("int16", VAR_0, VAR_0);

 FUNC_17(VAR_2, VAR_3, 1);
 FUNC_30("uint16", VAR_0, VAR_0);

 FUNC_7(VAR_2, VAR_3, 1);
 FUNC_30("int32", VAR_0, VAR_0);

 FUNC_19(VAR_2, VAR_3, 1);
 FUNC_30("uint32", VAR_0, VAR_0);

 FUNC_9(VAR_2, VAR_3, 1);
 FUNC_30("int64", VAR_1, VAR_1);

 FUNC_21(VAR_2, VAR_3, 1);
 FUNC_30("uint64", VAR_0, VAR_0);

 FUNC_15(VAR_2, VAR_3, "1");
 FUNC_30("string", VAR_1, VAR_1);


 {
  nvlist_t *VAR_7 = FUNC_25();
  FUNC_15(VAR_7, "subkey", "subvalue");
  FUNC_13(VAR_2, VAR_3, VAR_7);
  FUNC_26(VAR_7);
  FUNC_30("nvlist", VAR_1, VAR_1);
 }
 {
  boolean_t VAR_8[2] = { VAR_0, VAR_1 };
  FUNC_1(VAR_2, VAR_3, VAR_8, 2);
  FUNC_30("boolean_array", VAR_0, VAR_0);
 }
 {
  uchar_t VAR_9[2] = { 0, 1 };
  FUNC_4(VAR_2, VAR_3, VAR_9, 2);
  FUNC_30("byte_array", VAR_0, VAR_0);
 }
 {
  int8_t VAR_10[2] = { 0, 1 };
  FUNC_12(VAR_2, VAR_3, VAR_10, 2);
  FUNC_30("int8_array", VAR_0, VAR_0);
 }
 {
  uint8_t VAR_11[2] = { 0, 1 };
  FUNC_24(VAR_2, VAR_3, VAR_11, 2);
  FUNC_30("uint8_array", VAR_0, VAR_0);
 }
 {
  int16_t VAR_12[2] = { 0, 1 };
  FUNC_6(VAR_2, VAR_3, VAR_12, 2);
  FUNC_30("int16_array", VAR_0, VAR_0);
 }
 {
  uint16_t VAR_13[2] = { 0, 1 };
  FUNC_18(VAR_2, VAR_3, VAR_13, 2);
  FUNC_30("uint16_array", VAR_0, VAR_0);
 }
 {
  int32_t VAR_14[2] = { 0, 1 };
  FUNC_8(VAR_2, VAR_3, VAR_14, 2);
  FUNC_30("int32_array", VAR_0, VAR_0);
 }
 {
  uint32_t VAR_15[2] = { 0, 1 };
  FUNC_20(VAR_2, VAR_3, VAR_15, 2);
  FUNC_30("uint32_array", VAR_0, VAR_0);
 }
 {
  int64_t VAR_16[2] = { 0, 1 };
  FUNC_10(VAR_2, VAR_3, VAR_16, 2);
  FUNC_30("int64_array", VAR_1, VAR_0);
 }
 {
  uint64_t VAR_17[2] = { 0, 1 };
  FUNC_22(VAR_2, VAR_3, VAR_17, 2);
  FUNC_30("uint64_array", VAR_0, VAR_0);
 }
 {
  char *const VAR_18[2] = { "0", "1" };
  FUNC_16(VAR_2, VAR_3, VAR_18, 2);
  FUNC_30("string_array", VAR_1, VAR_0);
 }
 {
  nvlist_t *VAR_19[2];
  VAR_19[0] = FUNC_25();
  FUNC_15(VAR_19[0], "subkey", "subvalue");
  VAR_19[1] = FUNC_25();
  FUNC_15(VAR_19[1], "subkey2", "subvalue2");
  FUNC_14(VAR_2, VAR_3, VAR_19, 2);
  FUNC_26(VAR_19[0]);
  FUNC_26(VAR_19[1]);
  FUNC_30("nvlist_array", VAR_0, VAR_0);
 }
 {
  FUNC_15(VAR_2, VAR_5, "1");
  FUNC_30("large_key", VAR_1, VAR_1);
 }
 {
  FUNC_15(VAR_2, VAR_3, VAR_5);
  FUNC_30("large_value", VAR_1, VAR_1);
 }
 {
  for (int VAR_20 = 0; VAR_20 < 1024; VAR_20++) {
   char VAR_21[32];
   (void) FUNC_29(VAR_21, sizeof (VAR_21), "key-%u", VAR_20);
   FUNC_9(VAR_2, VAR_21, VAR_20);
  }
  FUNC_30("many_keys", VAR_1, VAR_1);
 }

 {
  for (int VAR_22 = 0; VAR_22 < 10; VAR_22++) {
   nvlist_t *VAR_23 = FUNC_25();
   FUNC_13(VAR_23, "key", VAR_2);
   FUNC_26(VAR_2);
   VAR_2 = VAR_23;
  }
  FUNC_30("deeply_nested_pos", VAR_1, VAR_1);
 }
 {
  for (int VAR_24 = 0; VAR_24 < 90; VAR_24++) {
   nvlist_t *VAR_25 = FUNC_25();
   FUNC_13(VAR_25, "key", VAR_2);
   FUNC_26(VAR_2);
   VAR_2 = VAR_25;
  }
  FUNC_30("deeply_nested_neg", VAR_0, VAR_0);
 }

 FUNC_27(VAR_5);
 FUNC_26(VAR_2);
}
