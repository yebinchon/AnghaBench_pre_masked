
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct view {scalar_t__ lines; int prev_pos; struct view* prev; int win; scalar_t__ pipe; TYPE_1__* ops; scalar_t__ private; int watch; } ;
typedef enum status_code { ____Placeholder_status_code } status_code ;
typedef enum open_flags { ____Placeholder_open_flags } open_flags ;
struct TYPE_2__ {int (* open ) (struct view*,int) ;scalar_t__ private_size; int (* done ) (struct view*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct view*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct view*,int) ;
 int FUNC_5 (scalar_t__,int ,scalar_t__) ;
 int FUNC_6 (struct view*) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (struct view*) ;
 int FUNC_10 (struct view*,struct view*) ;
 int FUNC_11 (struct view*) ;
 int FUNC_12 (struct view*,int) ;
 scalar_t__ FUNC_13 (struct view*) ;
 scalar_t__ FUNC_14 (struct view*) ;
 int FUNC_15 (struct view*,int) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *,int ) ;
 int FUNC_18 (int ) ;

void
FUNC_19(struct view *VAR_5, struct view *VAR_6, enum open_flags VAR_7)
{
 bool VAR_8 = !FUNC_15(VAR_5, VAR_7);


 if (VAR_6 && VAR_5 != VAR_6) {
  VAR_5->prev = VAR_6;
 }

 if (!VAR_8 && FUNC_13(VAR_5) &&
     FUNC_17(&VAR_5->watch, VAR_4)) {
  VAR_8 = FUNC_16(&VAR_5->watch);
  if (VAR_8)
   VAR_7 |= VAR_0;
 }

 if (VAR_8) {
  enum status_code VAR_9;

  if (VAR_5->pipe)
   FUNC_2(VAR_5, 1);
  if (VAR_5->ops->private_size) {
   if (!VAR_5->private) {
    VAR_5->private = FUNC_0(1, VAR_5->ops->private_size);
   } else {
    if (VAR_5->ops->done)
     VAR_5->ops->done(VAR_5);
    FUNC_5(VAR_5->private, 0, VAR_5->ops->private_size);
   }
  }

  VAR_9 = VAR_5->ops->open(VAR_5, VAR_7);
  if (VAR_9 != VAR_3) {
   FUNC_7("%s", FUNC_3(VAR_9));
   return;
  }
 }

 if (VAR_6) {
  bool VAR_10 = !!(VAR_7 & VAR_2);

  if (VAR_10) {
   FUNC_10(VAR_6, VAR_5);
  } else {
   FUNC_4(VAR_5, 0);
  }
 }

 FUNC_9(VAR_5);

 if (VAR_5->pipe && VAR_5->lines == 0) {


  FUNC_18(VAR_5->win);

  if (VAR_5->prev && !(VAR_7 & (VAR_1 | VAR_0)))
   FUNC_1(&VAR_5->prev_pos);
  FUNC_8();
 } else if (FUNC_14(VAR_5)) {
  FUNC_6(VAR_5);
  FUNC_8();
 }
}
