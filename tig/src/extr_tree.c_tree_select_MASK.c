
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct view {scalar_t__* ref; TYPE_1__* env; } ;
struct tree_entry {int id; int name; } ;
struct line {scalar_t__ type; struct tree_entry* data; } ;
struct TYPE_2__ {int directory; int file; scalar_t__* blob; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__*,char*) ;
 int FUNC_1 (scalar_t__*,int ) ;
 int FUNC_2 (int ,char*,int ,...) ;
 int FUNC_3 (struct line*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct view *VAR_3, struct line *VAR_4)
{
 struct tree_entry *VAR_5 = VAR_4->data;

 if (VAR_4->type == VAR_2) {
  FUNC_2(VAR_3->ref, "Files in /%s", VAR_3->env->directory);
  return;
 }

 if (VAR_4->type == VAR_0 && FUNC_4(VAR_5->name)) {
  FUNC_0(VAR_3->ref, "Open parent directory");
  VAR_3->env->blob[0] = 0;
  return;
 }

 if (VAR_4->type == VAR_1) {
  FUNC_1(VAR_3->env->blob, VAR_5->id);
  FUNC_2(VAR_3->env->file, "%s%s", VAR_3->env->directory, FUNC_3(VAR_4));
 }

 FUNC_1(VAR_3->ref, VAR_5->id);
}
