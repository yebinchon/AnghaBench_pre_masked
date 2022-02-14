
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int Oid ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 char* FUNC_2 (char const*,char const*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int,char*,int) ;

__attribute__((used)) static char *
FUNC_5(const char *VAR_0, const char *VAR_1, Oid VAR_2)
{
 char VAR_3[10];
 char *VAR_4 = ((void*)0);
 char *VAR_5;
 int VAR_6 = 0;

 for (;;)
 {

  VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_4);

  if (!FUNC_0(FUNC_1(VAR_5, VAR_2)))
   break;


  FUNC_3(VAR_5);
  FUNC_4(VAR_3, sizeof(VAR_3), "%d", ++VAR_6);
  VAR_4 = VAR_3;
 }

 return VAR_5;
}
