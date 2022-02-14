
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmd {TYPE_1__* entry; int args; } ;
struct TYPE_2__ {int name; } ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char**,char*,int ,char*) ;
 char* FUNC_3 (int ) ;

char *
FUNC_4(struct cmd *VAR_0)
{
 char *VAR_1, *VAR_2;

 VAR_2 = FUNC_0(VAR_0->args);
 if (*VAR_2 != '\0')
  FUNC_2(&VAR_1, "%s %s", VAR_0->entry->name, VAR_2);
 else
  VAR_1 = FUNC_3(VAR_0->entry->name);
 FUNC_1(VAR_2);

 return (VAR_1);
}
