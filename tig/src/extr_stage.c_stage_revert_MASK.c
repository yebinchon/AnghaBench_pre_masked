
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct view {int dummy; } ;
struct line {int dummy; } ;
struct TYPE_3__ {scalar_t__ status; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct line* FUNC_0 (struct view*,struct line*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct view*,struct line*,int *,int) ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_5 (TYPE_1__*,scalar_t__,int) ;

__attribute__((used)) static bool
FUNC_6(struct view *VAR_4, struct line *VAR_5)
{
 struct line *VAR_6 = ((void*)0);

 if (!FUNC_1() && VAR_2 == VAR_1)
  VAR_6 = FUNC_0(VAR_4, VAR_5, VAR_0);

 if (VAR_6) {
  if (!FUNC_2("Are you sure you want to revert changes?"))
   return 0;

  if (!FUNC_4(VAR_4, VAR_6, ((void*)0), 1)) {
   FUNC_3("Failed to revert chunk");
   return 0;
  }
  return 1;

 } else {
  return FUNC_5(VAR_3.status ? &VAR_3 : ((void*)0),
         VAR_2, 0);
 }
}
