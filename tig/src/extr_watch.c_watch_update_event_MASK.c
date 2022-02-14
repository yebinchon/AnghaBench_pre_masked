
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
struct watch_handler {int triggers; int (* check ) (struct watch_handler*,int,int) ;int last_modified; } ;
typedef enum watch_trigger { ____Placeholder_watch_trigger } watch_trigger ;
typedef enum watch_event { ____Placeholder_watch_event } watch_event ;
struct TYPE_2__ {scalar_t__* git_dir; } ;


 int FUNC_0 (struct watch_handler*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (struct watch_handler*,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int) ;
 struct watch_handler* VAR_3 ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static enum watch_trigger
FUNC_5(enum watch_event VAR_4, enum watch_trigger VAR_5,
     enum watch_trigger VAR_6)
{
 time_t VAR_7 = 0;
 int VAR_8;

 if (FUNC_4(VAR_4))
  return VAR_1;

 if (VAR_4 == VAR_0)
  VAR_7 = FUNC_2(((void*)0));

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_3); VAR_8++) {
  struct watch_handler *VAR_9 = &VAR_3[VAR_8];

  if (VAR_4 == VAR_0) {
   VAR_6 = VAR_9->triggers;
   VAR_9->last_modified = VAR_7;
   continue;
  }

  if (*VAR_2.git_dir &&
      (VAR_5 & VAR_9->triggers) &&
      (VAR_6 | VAR_9->triggers) != VAR_6)
   VAR_6 |= VAR_9->check(VAR_9, VAR_4, VAR_5);
 }

 if (VAR_6)
  FUNC_3(((void*)0), VAR_4, VAR_6);

 return VAR_6;
}
