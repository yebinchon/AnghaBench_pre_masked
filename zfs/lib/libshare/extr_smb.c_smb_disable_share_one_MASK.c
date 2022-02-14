
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char**,int ) ;
 char* FUNC_1 (char const*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_4)
{
 int VAR_5;
 char *VAR_6[7];


 VAR_6[0] = VAR_1;
 VAR_6[1] = (char *)"-S";
 VAR_6[2] = VAR_0;
 VAR_6[3] = (char *)"usershare";
 VAR_6[4] = (char *)"delete";
 VAR_6[5] = FUNC_1(VAR_4);
 VAR_6[6] = ((void*)0);

 VAR_5 = FUNC_0(VAR_6[0], VAR_6, 0);
 if (VAR_5 < 0)
  return (VAR_3);
 else
  return (VAR_2);
}
