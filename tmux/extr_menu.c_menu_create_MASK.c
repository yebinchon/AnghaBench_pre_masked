
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct menu {int title; } ;


 struct menu* FUNC_0 (int,int) ;
 int FUNC_1 (char const*) ;

struct menu *
FUNC_2(const char *VAR_0)
{
 struct menu *VAR_1;

 VAR_1 = FUNC_0(1, sizeof *VAR_1);
 VAR_1->title = FUNC_1(VAR_0);

 return (VAR_1);
}
