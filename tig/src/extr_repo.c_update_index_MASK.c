
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int exec_dir; } ;


 int FUNC_0 (char const**,int ) ;
 TYPE_1__ VAR_0 ;

bool
FUNC_1(void)
{
 const char *VAR_1[] = {
  "git", "update-index", "-q", "--unmerged", "--refresh", ((void*)0)
 };

 return FUNC_0(VAR_1, VAR_0.exec_dir);
}
