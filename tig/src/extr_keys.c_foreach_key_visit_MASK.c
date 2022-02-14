
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct run_request {int dummy; } ;
struct request_info {int dummy; } ;
struct keymap {int size; struct keybinding** data; } ;
struct keybinding {int request; int keys; int key; } ;
struct key_visitor_state {char const* group; int (* visitor ) (int ,char const*,struct keymap*,int,char const*,struct request_info const*,struct run_request const*) ;int data; scalar_t__ combine_keys; struct keymap* keymap; } ;
typedef enum request { ____Placeholder_request } request ;


 char* FUNC_0 (int ,int ,int) ;
 char* FUNC_1 (struct keymap*,int,int) ;
 int FUNC_2 (int ,char const*,struct keymap*,int,char const*,struct request_info const*,struct run_request const*) ;
 int FUNC_3 (int ,char const*,struct keymap*,int,char const*,struct request_info const*,struct run_request const*) ;

__attribute__((used)) static bool
FUNC_4(struct key_visitor_state *VAR_0, const char *VAR_1,
    enum request VAR_2,
    const struct request_info *VAR_3, const struct run_request *VAR_4)
{
 struct keymap *VAR_5 = VAR_0->keymap;
 int VAR_6;

 if (VAR_0->group == VAR_1)
  VAR_1 = ((void*)0);

 if (VAR_0->combine_keys) {
  const char *VAR_7 = FUNC_1(VAR_5, VAR_2, 1);

  if (!VAR_7 || !*VAR_7)
   return 1;

  if (VAR_1)
   VAR_0->group = VAR_1;
  return VAR_0->visitor(VAR_0->data, VAR_1, VAR_5, VAR_2,
          VAR_7, VAR_3, VAR_4);
 }

 for (VAR_6 = 0; VAR_6 < VAR_5->size; VAR_6++) {
  if (VAR_5->data[VAR_6]->request == VAR_2) {
   struct keybinding *VAR_8 = VAR_5->data[VAR_6];
   const char *VAR_9 = FUNC_0(VAR_8->key, VAR_8->keys, 0);

   if (!VAR_9 || !*VAR_9)
    continue;

   if (!VAR_0->visitor(VAR_0->data, VAR_1, VAR_5, VAR_2,
         VAR_9, VAR_3, VAR_4))
    return 0;

   if (VAR_1)
    VAR_0->group = VAR_1;
   VAR_1 = ((void*)0);
  }
 }

 return 1;
}
