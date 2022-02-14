
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keymap {size_t size; struct keybinding** data; } ;
struct keybinding {int request; size_t keys; int key; } ;
struct key {int dummy; } ;
typedef enum status_code { ____Placeholder_status_code } status_code ;
typedef enum request { ____Placeholder_request } request ;


 int VAR_0 ;
 int VAR_1 ;
 struct keybinding* FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,char*) ;
 char* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct keybinding*,struct key const*,size_t,int*) ;
 int FUNC_5 (int ,struct key const*,int) ;
 struct keybinding** FUNC_6 (struct keybinding**,int) ;
 int FUNC_7 (char*,char const*,int ) ;
 int FUNC_8 (char const*) ;

enum status_code
FUNC_9(struct keymap *VAR_2, enum request VAR_3,
        const struct key VAR_4[], size_t VAR_5)
{
 struct keybinding *VAR_6;
 char VAR_7[VAR_0];
 bool VAR_8 = 0;
 size_t VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_2->size; VAR_9++) {
  if (FUNC_4(VAR_2->data[VAR_9], VAR_4, VAR_5, &VAR_8)) {
   enum request VAR_10 = VAR_2->data[VAR_9]->request;
   const char *VAR_11;

   VAR_2->data[VAR_9]->request = VAR_3;
   if (!VAR_8)
    return VAR_1;

   VAR_11 = FUNC_3(VAR_10);
   FUNC_7(VAR_7, VAR_11, FUNC_8(VAR_11));
   return FUNC_2("Key binding for %s and %s conflict; "
         "keys using Ctrl are case insensitive",
         VAR_7, FUNC_3(VAR_3));
  }
 }

 VAR_2->data = FUNC_6(VAR_2->data, (VAR_2->size + 1) * sizeof(*VAR_2->data));
 VAR_6 = FUNC_0(1, sizeof(*VAR_6) + (sizeof(*VAR_4) * (VAR_5 - 1)));
 if (!VAR_2->data || !VAR_6)
  FUNC_1("Failed to allocate keybinding");

 FUNC_5(VAR_6->key, VAR_4, sizeof(*VAR_4) * VAR_5);
 VAR_6->keys = VAR_5;
 VAR_6->request = VAR_3;
 VAR_2->data[VAR_2->size++] = VAR_6;
 return VAR_1;
}
