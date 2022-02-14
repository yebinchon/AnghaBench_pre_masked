
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int text ;
typedef int Oid ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,char*) ;
 int VAR_2 ;
 char* FUNC_7 (int *) ;

__attribute__((used)) static Oid
FUNC_8(text *VAR_3)
{
 char *VAR_4 = FUNC_7(VAR_3);
 Oid VAR_5;

 VAR_5 = FUNC_1(FUNC_2(VAR_2,

              FUNC_0(VAR_4)));

 if (!FUNC_3(VAR_5))
  FUNC_4(VAR_1,
    (FUNC_5(VAR_0),
     FUNC_6("function \"%s\" does not exist", VAR_4)));

 return VAR_5;
}
