
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {scalar_t__ parent; int lines; struct stage_state* private; } ;
struct stage_state {int diff; } ;
struct buffer {int * data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct view*,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct view*,int *) ;
 int FUNC_3 (scalar_t__,int) ;
 int VAR_2 ;
 int FUNC_4 (struct view*,int *,int ,int *) ;
 int FUNC_5 (struct view*,struct buffer*,int) ;
 int FUNC_6 (char*,int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static bool
FUNC_7(struct view *VAR_4, struct buffer *VAR_5, bool VAR_6)
{
 struct stage_state *VAR_7 = VAR_4->private;

 if (VAR_3 == VAR_1)
  return FUNC_4(VAR_4, VAR_5 ? VAR_5->data : ((void*)0), VAR_0, ((void*)0));

 if (!VAR_5) {
  if (!FUNC_1(&VAR_7->diff)) {
   FUNC_6("Failed run the diff-highlight program: %s", VAR_2);
   return 1;
  }
 }

 if (!VAR_5 && !VAR_4->lines && VAR_4->parent) {
  FUNC_3(VAR_4->parent, 1);
  return 1;
 }

 if (!VAR_5)
  FUNC_2(VAR_4, &VAR_7->diff);

 if (VAR_5 && FUNC_0(VAR_4, VAR_5->data, &VAR_7->diff))
  return 1;

 return FUNC_5(VAR_4, VAR_5, VAR_6);
}
