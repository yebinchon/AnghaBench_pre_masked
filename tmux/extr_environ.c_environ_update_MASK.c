
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union options_value {int string; } ;
struct options_entry {int dummy; } ;
struct options_array_item {int dummy; } ;
struct options {int dummy; } ;
struct environ_entry {int value; int name; } ;
struct environ {int dummy; } ;


 int FUNC_0 (struct environ*,int ) ;
 struct environ_entry* FUNC_1 (struct environ*,int ) ;
 int FUNC_2 (struct environ*,int ,char*,int ) ;
 struct options_array_item* FUNC_3 (struct options_entry*) ;
 union options_value* FUNC_4 (struct options_array_item*) ;
 struct options_array_item* FUNC_5 (struct options_array_item*) ;
 struct options_entry* FUNC_6 (struct options*,char*) ;

void
FUNC_7(struct options *VAR_0, struct environ *VAR_1, struct environ *VAR_2)
{
 struct environ_entry *VAR_3;
 struct options_entry *VAR_4;
 struct options_array_item *VAR_5;
 union options_value *VAR_6;

 VAR_4 = FUNC_6(VAR_0, "update-environment");
 if (VAR_4 == ((void*)0))
  return;
 VAR_5 = FUNC_3(VAR_4);
 while (VAR_5 != ((void*)0)) {
  VAR_6 = FUNC_4(VAR_5);
  if ((VAR_3 = FUNC_1(VAR_1, VAR_6->string)) == ((void*)0))
   FUNC_0(VAR_2, VAR_6->string);
  else
   FUNC_2(VAR_2, VAR_3->name, "%s", VAR_3->value);
  VAR_5 = FUNC_5(VAR_5);
 }
}
