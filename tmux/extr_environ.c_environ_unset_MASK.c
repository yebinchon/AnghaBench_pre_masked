
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct environ_entry {struct environ_entry* value; struct environ_entry* name; } ;
struct environ {int dummy; } ;


 int FUNC_0 (int ,struct environ*,struct environ_entry*) ;
 int VAR_0 ;
 struct environ_entry* FUNC_1 (struct environ*,char const*) ;
 int FUNC_2 (struct environ_entry*) ;

void
FUNC_3(struct environ *VAR_1, const char *VAR_2)
{
 struct environ_entry *VAR_3;

 if ((VAR_3 = FUNC_1(VAR_1, VAR_2)) == ((void*)0))
  return;
 FUNC_0(VAR_0, VAR_1, VAR_3);
 FUNC_2(VAR_3->name);
 FUNC_2(VAR_3->value);
 FUNC_2(VAR_3);
}
