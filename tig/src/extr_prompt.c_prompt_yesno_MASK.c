
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input {int member_1; int * member_2; int member_0; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct input*) ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,char const*) ;

bool
FUNC_2(const char *VAR_2)
{
 char VAR_3[VAR_0];
 struct input VAR_4 = { VAR_1, 0, ((void*)0) };

 if (!FUNC_1(VAR_3, "%s [Yy/Nn]", VAR_2))
  return 0;

 return !!FUNC_0(VAR_3, &VAR_4);
}
