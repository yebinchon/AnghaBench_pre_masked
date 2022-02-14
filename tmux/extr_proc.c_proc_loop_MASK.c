
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmuxproc {int name; int exit; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;

void
FUNC_2(struct tmuxproc *VAR_1, int (*VAR_2)(void))
{
 FUNC_1("%s loop enter", VAR_1->name);
 do
  FUNC_0(VAR_0);
 while (!VAR_1->exit && (VAR_2 == ((void*)0) || !VAR_2 ()));
 FUNC_1("%s loop exit", VAR_1->name);
}
