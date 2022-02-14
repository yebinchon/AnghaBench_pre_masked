
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct options_table_entry {int flags; int name; } ;
struct TYPE_2__ {int array; } ;
struct options_entry {TYPE_1__ value; struct options_table_entry const* tableentry; } ;
struct options {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct options_entry* FUNC_1 (struct options*,int ) ;

struct options_entry *
FUNC_2(struct options *VAR_1, const struct options_table_entry *VAR_2)
{
 struct options_entry *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2->name);
 VAR_3->tableentry = VAR_2;

 if (VAR_2->flags & VAR_0)
  FUNC_0(&VAR_3->value.array);

 return (VAR_3);
}
