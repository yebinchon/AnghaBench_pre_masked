
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct view {int dummy; } ;
struct line {int dummy; } ;
struct TYPE_3__ {int status; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct line* FUNC_0 (struct view*,struct line*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct view*,struct line*,struct line*,int) ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_4 (struct view*,scalar_t__) ;
 int FUNC_5 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static bool
FUNC_6(struct view *VAR_4, struct line *VAR_5, bool VAR_6)
{
 struct line *VAR_7 = ((void*)0);

 if (!FUNC_1() && VAR_2 != VAR_1)
  VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_0);

 if (VAR_7) {
  if (!FUNC_3(VAR_4, VAR_7, VAR_6 ? VAR_5 : ((void*)0), 0)) {
   FUNC_2("Failed to apply chunk");
   return 0;
  }

 } else if (!VAR_3.status) {
  if (!FUNC_4(VAR_4, VAR_2)) {
   FUNC_2("Failed to update files");
   return 0;
  }

 } else if (!FUNC_5(&VAR_3, VAR_2)) {
  FUNC_2("Failed to update file");
  return 0;
 }

 return 1;
}
