
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct options_table_entry {int dummy; } ;
struct options_entry {struct options_table_entry const* tableentry; } ;
struct options {int * parent; } ;


 int FUNC_0 (char*,char const*) ;
 struct options_entry* FUNC_1 (int *,char const*) ;

__attribute__((used)) static const struct options_table_entry *
FUNC_2(struct options *VAR_0, const char *VAR_1)
{
 struct options_entry *VAR_2;

 if (VAR_0->parent == ((void*)0))
  FUNC_0("no parent options for %s", VAR_1);
 VAR_2 = FUNC_1(VAR_0->parent, VAR_1);
 if (VAR_2 == ((void*)0))
  FUNC_0("%s not in parent options", VAR_1);
 return (VAR_2->tableentry);
}
