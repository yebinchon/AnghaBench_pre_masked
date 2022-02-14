
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int text ;
typedef int int64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 char* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,char*) ;

int64
FUNC_7(text *VAR_14)
{
 int VAR_15, VAR_16;
 char *VAR_17 =
  FUNC_3(FUNC_1(VAR_14), FUNC_2(VAR_14), 0);

 VAR_15 = FUNC_0(0, VAR_17, &VAR_16);

 if (VAR_15 != VAR_6)
  return -1;

 switch (VAR_16)
 {
  case 129:
   return VAR_2 * VAR_7;
  case 135:
   return VAR_13 * VAR_3 * VAR_7;
  case 140:
   return VAR_11 * VAR_3 * VAR_7;
  case 138:
   return VAR_12 * VAR_3 * VAR_7;
  case 128:
   return 1 * VAR_3 * VAR_7;
  case 131:
   return VAR_1 * VAR_7;
  case 132:
   return VAR_0 * VAR_7;
  case 139:
   return VAR_7;
  case 137:
   return VAR_8;
  case 133:
   return VAR_9;
  case 130:
   return VAR_10;
  case 134:
   return VAR_10 / 1000;
  case 136:
   return 1;
  default:
   FUNC_4(VAR_5,
     (FUNC_5(VAR_4),
      FUNC_6("timestamp units \"%s\" not supported", VAR_17)));
 }
 return -1;
}
