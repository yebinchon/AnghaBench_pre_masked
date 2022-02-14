
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct view {struct help_state* private; } ;
struct run_request {scalar_t__* argv; } ;
struct request_info {scalar_t__ request; int help; int name; } ;
struct line {scalar_t__ type; struct help* data; } ;
struct keymap {int name; scalar_t__ hidden; } ;
struct help_state {scalar_t__ name_width; scalar_t__ keys_width; } ;
struct TYPE_2__ {struct request_info* req_info; int text; } ;
struct help {scalar_t__ request; TYPE_1__ data; struct keymap* keymap; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (struct view*,scalar_t__,char const*,scalar_t__,int ,int) ;
 scalar_t__ FUNC_1 (struct view*,scalar_t__,char*,...) ;
 int FUNC_2 (struct view*,scalar_t__,int ) ;
 char const* FUNC_3 (int ) ;
 char* FUNC_4 (struct run_request*) ;
 char* FUNC_5 (struct keymap const*,scalar_t__,int) ;
 struct run_request* FUNC_6 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_7(struct view *VAR_7, struct line *VAR_8, unsigned int VAR_9)
{
 struct help *VAR_10 = VAR_8->data;
 const struct keymap *VAR_11 = VAR_10->keymap;
 struct help_state *VAR_12 = VAR_7->private;

 if (VAR_8->type == VAR_5) {
  FUNC_1(VAR_7, VAR_8->type, "[%c] %s bindings",
          VAR_11->hidden ? '+' : '-', VAR_11->name);

 } else if (VAR_8->type == VAR_4 || !VAR_11) {
  FUNC_2(VAR_7, VAR_8->type, VAR_10->data.text);

 } else if (VAR_10->request > VAR_6) {
  struct run_request *VAR_13 = FUNC_6(VAR_10->request);
  const char *VAR_14 = FUNC_5(VAR_11, VAR_10->request, 1);
  const char *VAR_15 = FUNC_4(VAR_13);
  int VAR_16;

  if (FUNC_0(VAR_7, VAR_2, VAR_14, VAR_12->keys_width + 2, VAR_1, 0))
   return 1;

  for (VAR_16 = 0; VAR_13->argv[VAR_16]; VAR_16++) {
   if (FUNC_1(VAR_7, VAR_3, "%s%s", VAR_15, VAR_13->argv[VAR_16]))
    return 1;
   VAR_15 = " ";
  }

 } else {
  const struct request_info *VAR_17 = VAR_10->data.req_info;
  const char *VAR_18 = FUNC_5(VAR_11, VAR_17->request, 1);

  if (FUNC_0(VAR_7, VAR_2, VAR_18, VAR_12->keys_width + 2, VAR_1, 0))
   return 1;

  if (FUNC_0(VAR_7, VAR_3, FUNC_3(VAR_17->name), VAR_12->name_width, VAR_0, 0))
   return 1;

  FUNC_2(VAR_7, VAR_2, VAR_17->help);
 }

 return 1;
}
