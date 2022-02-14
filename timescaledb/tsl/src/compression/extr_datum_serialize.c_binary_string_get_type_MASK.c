
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int StringInfo ;
typedef int Oid ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char const*) ;
 int VAR_1 ;
 int FUNC_5 (int ,char*,char const*,char const*) ;
 char* FUNC_6 (int ) ;

Oid
FUNC_7(StringInfo VAR_2)
{
 const char *VAR_3 = FUNC_6(VAR_2);
 const char *VAR_4 = FUNC_6(VAR_2);
 Oid VAR_5;
 Oid VAR_6;

 VAR_5 = FUNC_1(VAR_3, 0);

 VAR_6 = FUNC_0(VAR_1,
          FUNC_4(VAR_4),
          FUNC_2(VAR_5));
 if (!FUNC_3(VAR_6))
  FUNC_5(VAR_0, "could not find type %s.%s", VAR_3, VAR_4);

 return VAR_6;
}
