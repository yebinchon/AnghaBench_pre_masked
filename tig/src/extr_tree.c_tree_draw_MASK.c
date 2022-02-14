
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {int dummy; } ;
struct tree_entry {int name; } ;
struct line {scalar_t__ type; struct tree_entry* data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct view*,scalar_t__,char*,int ) ;
 int FUNC_1 (struct view*,struct line*,unsigned int) ;

__attribute__((used)) static bool
FUNC_2(struct view *VAR_1, struct line *VAR_2, unsigned int VAR_3)
{
 struct tree_entry *VAR_4 = VAR_2->data;

 if (VAR_2->type == VAR_0) {
  FUNC_0(VAR_1, VAR_2->type, "Directory path /%s", VAR_4->name);
  return 1;
 }

 return FUNC_1(VAR_1, VAR_2, VAR_3);
}
