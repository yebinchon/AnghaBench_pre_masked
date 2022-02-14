
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct view {struct help_state* private; } ;
struct run_request {int dummy; } ;
struct request_info {int name; } ;
struct keymap {scalar_t__ hidden; } ;
struct help_state {void* name_width; void* keys_width; } ;
struct help_request_iterator {struct view* view; struct keymap* keymap; } ;
struct TYPE_2__ {char const* text; struct request_info const* req_info; } ;
struct help {int request; TYPE_1__ data; } ;
typedef enum request { ____Placeholder_request } request ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (void*,int ) ;
 int FUNC_1 (struct view*,struct help**,struct keymap*,int ) ;
 char const* FUNC_2 (int ) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static bool
FUNC_4(void *VAR_3, const char *VAR_4, struct keymap *VAR_5,
    enum request VAR_6, const char *VAR_7,
    const struct request_info *VAR_8, const struct run_request *VAR_9)
{
 struct help_request_iterator *VAR_10 = VAR_3;
 struct view *VAR_11 = VAR_10->view;
 struct help_state *VAR_12 = VAR_11->private;
 struct help *VAR_13;

 if (VAR_10->keymap != VAR_5) {
  VAR_10->keymap = VAR_5;
  if (!FUNC_1(VAR_10->view, &VAR_13, VAR_5, VAR_2))
   return 0;
 }

 if (VAR_5->hidden)
  return 1;

 if (VAR_4) {
  if (!FUNC_1(VAR_10->view, &VAR_13, VAR_5, VAR_1))
   return 0;
  VAR_13->data.text = VAR_4;
 }

 if (!FUNC_1(VAR_11, &VAR_13, VAR_5, VAR_0))
  return 0;

 VAR_12->keys_width = FUNC_0(VAR_12->keys_width, FUNC_3(VAR_7));
 VAR_13->request = VAR_6;

 if (VAR_8) {
  VAR_12->name_width = FUNC_0(VAR_12->name_width, FUNC_3(FUNC_2(VAR_8->name)));
  VAR_13->data.req_info = VAR_8;
 }

 return 1;
}
