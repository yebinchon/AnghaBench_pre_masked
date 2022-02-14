
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_table {int key; int key_bindings; int cmdlist; } ;
struct key_binding {int key; int key_bindings; int cmdlist; } ;
typedef int key_code ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 struct key_table* FUNC_1 (int ,int *,struct key_table*) ;
 int FUNC_2 (int ,int *,struct key_table*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct key_table*) ;
 int VAR_1 ;
 struct key_table* FUNC_5 (char const*,int ) ;
 int FUNC_6 (struct key_table*) ;
 int VAR_2 ;

void
FUNC_7(const char *VAR_3, key_code VAR_4)
{
 struct key_table *VAR_5;
 struct key_binding VAR_6, *VAR_7;

 VAR_5 = FUNC_5(VAR_3, 0);
 if (VAR_5 == ((void*)0))
  return;

 VAR_6.key = (VAR_4 & ~VAR_0);
 VAR_7 = FUNC_1(VAR_1, &VAR_5->key_bindings, &VAR_6);
 if (VAR_7 == ((void*)0))
  return;

 FUNC_2(VAR_1, &VAR_5->key_bindings, VAR_7);
 FUNC_3(VAR_7->cmdlist);
 FUNC_4(VAR_7);

 if (FUNC_0(&VAR_5->key_bindings)) {
  FUNC_2(VAR_2, &VAR_2, VAR_5);
  FUNC_6(VAR_5);
 }
}
