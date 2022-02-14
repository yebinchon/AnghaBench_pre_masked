
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd {int args; struct cmd* file; int argv; int argc; struct cmd* alias; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct cmd*) ;

void
FUNC_3(struct cmd *VAR_0)
{
 FUNC_2(VAR_0->alias);
 FUNC_1(VAR_0->argc, VAR_0->argv);

 FUNC_2(VAR_0->file);

 FUNC_0(VAR_0->args);
 FUNC_2(VAR_0);
}
