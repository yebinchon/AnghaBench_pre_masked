
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64 ;
typedef int Oid ;
typedef int Datum ;


 int FUNC_0 (int ) ;

 int VAR_0 ;



 int VAR_1 ;
 int FUNC_1 (int,char*,int,int) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int FUNC_3 (int ,char*,char const*) ;
 int FUNC_4 (int ,int*,int*) ;
 int FUNC_5 (char*,int ,int ,char const*) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int64
FUNC_8(char *VAR_8, Oid VAR_9, const char *VAR_10)
{
 Datum VAR_11;
 Oid VAR_12;
 Oid VAR_13;

 switch (VAR_9)
 {
  case 132:
   return FUNC_5(VAR_8, VAR_3, VAR_2, VAR_10);
  case 131:
   return FUNC_5(VAR_8, VAR_5, VAR_4, VAR_10);
  case 130:
   return FUNC_5(VAR_8, VAR_7, VAR_6, VAR_10);
  case 128:
  case 129:
  case 133:
   FUNC_4(VAR_1, &VAR_12, &VAR_13);
   FUNC_0(FUNC_2(VAR_12));
   VAR_11 = FUNC_1(VAR_12, VAR_8, VAR_13, -1);
   return FUNC_7(VAR_11, VAR_1);
  default:
   FUNC_3(VAR_0, "unknown time type when parsing timescaledb.%s", VAR_10);
   FUNC_6();
 }
}
