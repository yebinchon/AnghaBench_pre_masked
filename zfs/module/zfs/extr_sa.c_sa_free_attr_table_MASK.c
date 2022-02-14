
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sa_num_attrs; TYPE_2__* sa_attr_table; } ;
typedef TYPE_1__ sa_os_t ;
typedef int sa_attr_table_t ;
struct TYPE_6__ {struct TYPE_6__* sa_name; } ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_2(sa_os_t *VAR_0)
{
 int VAR_1;

 if (VAR_0->sa_attr_table == ((void*)0))
  return;

 for (VAR_1 = 0; VAR_1 != VAR_0->sa_num_attrs; VAR_1++) {
  if (VAR_0->sa_attr_table[VAR_1].sa_name)
   FUNC_0(VAR_0->sa_attr_table[VAR_1].sa_name,
       FUNC_1(VAR_0->sa_attr_table[VAR_1].sa_name) + 1);
 }

 FUNC_0(VAR_0->sa_attr_table,
     sizeof (sa_attr_table_t) * VAR_0->sa_num_attrs);

 VAR_0->sa_attr_table = ((void*)0);
}
