
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct mouse_event {int dummy; } ;
struct mode_tree_line {int flat; struct mode_tree_item* item; } ;
struct mode_tree_item {int tagged; int expanded; int line; struct mode_tree_item* parent; int children; } ;
struct TYPE_2__ {int reversed; int field; } ;
struct mode_tree_data {scalar_t__ width; scalar_t__ height; int preview; scalar_t__ offset; scalar_t__ line_size; size_t current; char* filter; int references; TYPE_1__ sort_crit; int sort_size; struct mode_tree_line* line_list; int wp; } ;
struct client {int dummy; } ;
typedef char key_code ;


 char VAR_0 ;


 char VAR_1 ;

 scalar_t__ FUNC_0 (char) ;

 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;






 int VAR_7 ;
 scalar_t__ FUNC_1 (int ,struct mouse_event*,scalar_t__*,scalar_t__*,int ) ;
 int FUNC_2 (struct mode_tree_data*) ;
 int FUNC_3 (struct mode_tree_data*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mode_tree_data*,struct client*,scalar_t__,scalar_t__,int) ;
 int FUNC_6 (struct mode_tree_data*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (struct mode_tree_data*) ;
 int FUNC_8 (struct mode_tree_data*,int) ;
 int FUNC_9 (struct client*,char*,char*,int ,int ,struct mode_tree_data*,int ) ;

int
FUNC_10(struct mode_tree_data *VAR_12, struct client *VAR_13, key_code *VAR_14,
    struct mouse_event *VAR_15, u_int *VAR_16, u_int *VAR_17)
{
 struct mode_tree_line *VAR_18;
 struct mode_tree_item *VAR_19, *VAR_20;
 u_int VAR_21, VAR_22, VAR_23;
 int VAR_24;
 key_code VAR_25;

 if (FUNC_0(*VAR_14) && VAR_15 != ((void*)0)) {
  if (FUNC_1(VAR_12->wp, VAR_15, &VAR_22, &VAR_23, 0) != 0) {
   *VAR_14 = VAR_6;
   return (0);
  }
  if (VAR_16 != ((void*)0))
   *VAR_16 = VAR_22;
  if (VAR_17 != ((void*)0))
   *VAR_17 = VAR_23;
  if (VAR_22 > VAR_12->width || VAR_23 > VAR_12->height) {
   if (*VAR_14 == VAR_5)
    FUNC_5(VAR_12, VAR_13, VAR_22, VAR_23, 1);
   if (!VAR_12->preview)
    *VAR_14 = VAR_6;
   return (0);
  }
  if (VAR_12->offset + VAR_23 < VAR_12->line_size) {
   if (*VAR_14 == VAR_4 ||
       *VAR_14 == VAR_5 ||
       *VAR_14 == VAR_0)
    VAR_12->current = VAR_12->offset + VAR_23;
   if (*VAR_14 == VAR_0)
    *VAR_14 = '\r';
   else {
    if (*VAR_14 == VAR_5)
     FUNC_5(VAR_12, VAR_13, VAR_22, VAR_23, 0);
    *VAR_14 = VAR_6;
   }
  } else {
   if (*VAR_14 == VAR_5)
    FUNC_5(VAR_12, VAR_13, VAR_22, VAR_23, 0);
   *VAR_14 = VAR_6;
  }
  return (0);
 }

 VAR_18 = &VAR_12->line_list[VAR_12->current];
 VAR_19 = VAR_18->item;

 VAR_24 = -1;
 if (*VAR_14 >= '0' && *VAR_14 <= '9')
  VAR_24 = (*VAR_14) - '0';
 else if (((*VAR_14) & VAR_3) == VAR_1) {
  VAR_25 = (*VAR_14) & VAR_2;
  if (VAR_25 >= 'a' && VAR_25 <= 'z')
   VAR_24 = 10 + (VAR_25 - 'a');
 }
 if (VAR_24 != -1) {
  if ((u_int)VAR_24 > VAR_12->line_size - 1) {
   *VAR_14 = VAR_6;
   return (0);
  }
  VAR_12->current = VAR_24;
  *VAR_14 = '\r';
  return (0);
 }

 switch (*VAR_14) {
 case 'q':
 case '\033':
 case '\007':
  return (1);
 case 130:
 case 'k':
 case 128:
 case '\020':
  FUNC_8(VAR_12, 1);
  break;
 case 137:
 case 'j':
 case 129:
 case '\016':
  FUNC_6(VAR_12, 1);
  break;
 case 'g':
 case 132:
 case '\002':
  for (VAR_21 = 0; VAR_21 < VAR_12->height; VAR_21++) {
   if (VAR_12->current == 0)
    break;
   FUNC_8(VAR_12, 1);
  }
  break;
 case 'G':
 case 133:
 case '\006':
  for (VAR_21 = 0; VAR_21 < VAR_12->height; VAR_21++) {
   if (VAR_12->current == VAR_12->line_size - 1)
    break;
   FUNC_6(VAR_12, 1);
  }
  break;
 case 135:
  VAR_12->current = 0;
  VAR_12->offset = 0;
  break;
 case 136:
  VAR_12->current = VAR_12->line_size - 1;
  if (VAR_12->current > VAR_12->height - 1)
   VAR_12->offset = VAR_12->current - VAR_12->height + 1;
  else
   VAR_12->offset = 0;
  break;
 case 't':




  if (!VAR_19->tagged) {
   VAR_20 = VAR_19->parent;
   while (VAR_20 != ((void*)0)) {
    VAR_20->tagged = 0;
    VAR_20 = VAR_20->parent;
   }
   FUNC_4(&VAR_19->children);
   VAR_19->tagged = 1;
  } else
   VAR_19->tagged = 0;
  if (VAR_15 != ((void*)0))
   FUNC_6(VAR_12, 0);
  break;
 case 'T':
  for (VAR_21 = 0; VAR_21 < VAR_12->line_size; VAR_21++)
   VAR_12->line_list[VAR_21].item->tagged = 0;
  break;
 case '\024':
  for (VAR_21 = 0; VAR_21 < VAR_12->line_size; VAR_21++) {
   if (VAR_12->line_list[VAR_21].item->parent == ((void*)0))
    VAR_12->line_list[VAR_21].item->tagged = 1;
   else
    VAR_12->line_list[VAR_21].item->tagged = 0;
  }
  break;
 case 'O':
  VAR_12->sort_crit.field++;
  if (VAR_12->sort_crit.field == VAR_12->sort_size)
   VAR_12->sort_crit.field = 0;
  FUNC_2(VAR_12);
  break;
 case 'r':
  VAR_12->sort_crit.reversed = !VAR_12->sort_crit.reversed;
  FUNC_2(VAR_12);
  break;
 case 134:
 case 'h':
 case '-':
  if (VAR_18->flat || !VAR_19->expanded)
   VAR_19 = VAR_19->parent;
  if (VAR_19 == ((void*)0))
   FUNC_8(VAR_12, 0);
  else {
   VAR_19->expanded = 0;
   VAR_12->current = VAR_19->line;
   FUNC_2(VAR_12);
  }
  break;
 case 131:
 case 'l':
 case '+':
  if (VAR_18->flat || VAR_19->expanded)
   FUNC_6(VAR_12, 0);
  else if (!VAR_18->flat) {
   VAR_19->expanded = 1;
   FUNC_2(VAR_12);
  }
  break;
 case '?':
 case '/':
 case '\023':
  VAR_12->references++;
  FUNC_9(VAR_13, "(search) ", "",
      VAR_10, VAR_11, VAR_12,
      VAR_7);
  break;
 case 'n':
  FUNC_7(VAR_12);
  break;
 case 'f':
  VAR_12->references++;
  FUNC_9(VAR_13, "(filter) ", VAR_12->filter,
      VAR_8, VAR_9, VAR_12,
      VAR_7);
  break;
 case 'v':
  VAR_12->preview = !VAR_12->preview;
  FUNC_2(VAR_12);
  if (VAR_12->preview)
   FUNC_3(VAR_12);
  break;
 }
 return (0);
}
