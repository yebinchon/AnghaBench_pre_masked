
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union options_value {char const* string; } ;
typedef size_t u_int ;
struct tty_default_key_raw {char* string; scalar_t__ key; int code; } ;
struct tty_default_key_code {char* string; scalar_t__ key; int code; } ;
struct tty {int term; int * key_tree; } ;
struct options_entry {int dummy; } ;
struct options_array_item {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (struct tty_default_key_raw*) ;
 struct options_array_item* FUNC_1 (struct options_entry*) ;
 size_t FUNC_2 (struct options_array_item*) ;
 union options_value* FUNC_3 (struct options_array_item*) ;
 struct options_array_item* FUNC_4 (struct options_array_item*) ;
 struct options_entry* FUNC_5 (int ,char*) ;
 struct tty_default_key_raw* VAR_2 ;
 struct tty_default_key_raw* VAR_3 ;
 int FUNC_6 (struct tty*,char const*,scalar_t__) ;
 int FUNC_7 (struct tty*) ;
 char* FUNC_8 (int ,int ) ;

void
FUNC_9(struct tty *VAR_4)
{
 const struct tty_default_key_raw *VAR_5;
 const struct tty_default_key_code *VAR_6;
 u_int VAR_7;
 const char *VAR_8;
 struct options_entry *VAR_9;
 struct options_array_item *VAR_10;
 union options_value *VAR_11;

 if (VAR_4->key_tree != ((void*)0))
  FUNC_7(VAR_4);
 VAR_4->key_tree = ((void*)0);

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_3); VAR_7++) {
  VAR_5 = &VAR_3[VAR_7];

  VAR_8 = VAR_5->string;
  if (*VAR_8 != '\0')
   FUNC_6(VAR_4, VAR_8, VAR_5->key);
 }
 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_2); VAR_7++) {
  VAR_6 = &VAR_2[VAR_7];

  VAR_8 = FUNC_8(VAR_4->term, VAR_6->code);
  if (*VAR_8 != '\0')
   FUNC_6(VAR_4, VAR_8, VAR_6->key);

 }

 VAR_9 = FUNC_5(VAR_1, "user-keys");
 if (VAR_9 != ((void*)0)) {
  VAR_10 = FUNC_1(VAR_9);
  while (VAR_10 != ((void*)0)) {
   VAR_7 = FUNC_2(VAR_10);
   VAR_11 = FUNC_3(VAR_10);
   FUNC_6(VAR_4, VAR_11->string, VAR_0 + VAR_7);
   VAR_10 = FUNC_4(VAR_10);
  }
 }
}
