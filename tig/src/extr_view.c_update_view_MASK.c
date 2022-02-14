
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
struct view {scalar_t__ lines; int start_time; int update_secs; int force_redraw; int pipe; TYPE_1__* ops; struct encoding* encoding; } ;
struct encoding {int dummy; } ;
struct buffer {int dummy; } ;
struct TYPE_2__ {int (* read ) (struct view*,struct buffer*,int) ;} ;


 struct encoding* VAR_0 ;
 int FUNC_0 (struct encoding*,struct buffer*) ;
 int FUNC_1 (struct view*,int) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,struct buffer*,char,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct view*) ;
 int FUNC_8 (struct view*) ;
 int FUNC_9 (struct view*,int ) ;
 int FUNC_10 (char*,...) ;
 scalar_t__ FUNC_11 (struct view*) ;
 int FUNC_12 (struct view*,struct buffer*,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct view*) ;
 scalar_t__ FUNC_15 (struct view*) ;

bool
FUNC_16(struct view *VAR_1)
{


 bool VAR_2 = VAR_1->lines == 0;
 bool VAR_3 = 1;
 struct encoding *VAR_4 = VAR_1->encoding ? VAR_1->encoding : VAR_0;
 struct buffer VAR_5;

 if (!VAR_1->pipe)
  return 1;

 if (!FUNC_2(VAR_1->pipe, 0)) {
  if (VAR_1->lines == 0 && FUNC_15(VAR_1)) {
   time_t VAR_6 = FUNC_13(((void*)0)) - VAR_1->start_time;

   if (VAR_6 > 1 && VAR_6 > VAR_1->update_secs) {
    if (VAR_1->update_secs == 0)
     FUNC_7(VAR_1);
    FUNC_14(VAR_1);
    VAR_1->update_secs = VAR_6;
   }
  }
  return 1;
 }

 for (; FUNC_5(VAR_1->pipe, &VAR_5, '\n', VAR_3); VAR_3 = 0) {
  if (VAR_4 && !FUNC_0(VAR_4, &VAR_5)) {
   FUNC_10("Encoding failure");
   FUNC_1(VAR_1, 1);
   return 0;
  }

  if (!VAR_1->ops->read(VAR_1, &VAR_5, 0)) {
   FUNC_10("Allocation failure");
   FUNC_1(VAR_1, 1);
   return 0;
  }
 }

 if (FUNC_4(VAR_1->pipe)) {
  FUNC_10("Failed to read: %s", FUNC_6(VAR_1->pipe));
  FUNC_1(VAR_1, 1);

 } else if (FUNC_3(VAR_1->pipe)) {
  FUNC_1(VAR_1, 0);
 }

 if (FUNC_11(VAR_1))
  VAR_2 = 1;

 if (!FUNC_15(VAR_1))
  return 1;

 if (VAR_2 || VAR_1->force_redraw)
  FUNC_9(VAR_1, 0);
 else
  FUNC_8(VAR_1);
 VAR_1->force_redraw = 0;



 FUNC_14(VAR_1);
 return 1;
}
