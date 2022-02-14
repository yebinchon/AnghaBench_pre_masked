
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {int private; } ;
struct buffer {int data; } ;


 int FUNC_0 (struct view*,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ) ;

bool
FUNC_3(struct view *VAR_1, struct buffer *VAR_2, bool VAR_3)
{
 if (!VAR_2) {
  if (!FUNC_1(VAR_1->private)) {
   FUNC_2("Failed run the diff-highlight program: %s", VAR_0);
   return 0;
  }

  return 1;
 }

 return FUNC_0(VAR_1, VAR_2->data, VAR_1->private);
}
