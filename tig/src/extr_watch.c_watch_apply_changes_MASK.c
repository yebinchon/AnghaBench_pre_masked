
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watch {int triggers; int state; int changed; struct watch* next; } ;
typedef enum watch_trigger { ____Placeholder_watch_trigger } watch_trigger ;
typedef enum watch_event { ____Placeholder_watch_event } watch_event ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct watch* VAR_2 ;

__attribute__((used)) static void
FUNC_1(struct watch *VAR_3, enum watch_event VAR_4,
      enum watch_trigger VAR_5)
{
 struct watch *VAR_6;

 if (FUNC_0(VAR_4))
  return;

 for (VAR_6 = VAR_2; VAR_6; VAR_6 = VAR_6->next) {
  enum watch_trigger VAR_7 = VAR_5 & VAR_6->triggers;

  if (VAR_3 == VAR_6) {
   VAR_3->state |= VAR_7;
   continue;
  }

  if (VAR_4 == VAR_0) {
   VAR_6->state = VAR_1;
   VAR_7 = VAR_6->triggers;
  }

  VAR_6->changed |= VAR_7;
 }
}
