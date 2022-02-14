
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct options_table_entry {int dummy; } ;
struct options_entry {struct options_table_entry const* tableentry; } ;



const struct options_table_entry *
FUNC_0(struct options_entry *VAR_0)
{
 return (VAR_0->tableentry);
}
