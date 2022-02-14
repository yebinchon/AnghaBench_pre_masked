
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union options_value {char const* string; } ;
struct options_entry {int dummy; } ;
struct options_array_item {int dummy; } ;


 int VAR_0 ;
 struct options_array_item* FUNC_0 (struct options_entry*) ;
 union options_value* FUNC_1 (struct options_array_item*) ;
 struct options_array_item* FUNC_2 (struct options_array_item*) ;
 struct options_entry* FUNC_3 (int ,char*) ;
 char* FUNC_4 (char const*,char) ;
 size_t FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*,char const*,size_t) ;
 char* FUNC_7 (char const*) ;

char *
FUNC_8(const char *VAR_1)
{
 struct options_entry *VAR_2;
 struct options_array_item *VAR_3;
 union options_value *VAR_4;
 size_t VAR_5, VAR_6;
 const char *VAR_7;

 VAR_2 = FUNC_3(VAR_0, "command-alias");
 if (VAR_2 == ((void*)0))
  return (((void*)0));
 VAR_5 = FUNC_5(VAR_1);

 VAR_3 = FUNC_0(VAR_2);
 while (VAR_3 != ((void*)0)) {
  VAR_4 = FUNC_1(VAR_3);

  VAR_7 = FUNC_4(VAR_4->string, '=');
  if (VAR_7 != ((void*)0)) {
   VAR_6 = VAR_7 - VAR_4->string;
   if (VAR_6 == VAR_5 && FUNC_6(VAR_1, VAR_4->string, VAR_6) == 0)
    return (FUNC_7(VAR_7 + 1));
  }

  VAR_3 = FUNC_2(VAR_3);
 }
 return (((void*)0));
}
