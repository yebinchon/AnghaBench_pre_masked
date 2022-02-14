
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union options_value {int * cmdlist; int string; } ;
struct options_entry {int dummy; } ;


 scalar_t__ FUNC_0 (struct options_entry*) ;
 scalar_t__ FUNC_1 (struct options_entry*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct options_entry *VAR_0, union options_value *VAR_1)
{
 if (FUNC_1(VAR_0))
  FUNC_3(VAR_1->string);
 if (FUNC_0(VAR_0) && VAR_1->cmdlist != ((void*)0))
  FUNC_2(VAR_1->cmdlist);
}
