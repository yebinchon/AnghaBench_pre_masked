
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watch {struct watch* next; } ;
typedef enum watch_trigger { ____Placeholder_watch_trigger } watch_trigger ;
typedef enum watch_event { ____Placeholder_watch_event } watch_event ;


 int VAR_0 ;
 int FUNC_0 (struct watch*) ;
 int FUNC_1 (int,int,int) ;
 struct watch* VAR_1 ;

enum watch_trigger
FUNC_2(enum watch_event VAR_2)
{
 enum watch_trigger VAR_3 = VAR_0;
 struct watch *VAR_4;



 for (VAR_4 = VAR_1; VAR_4; VAR_4 = VAR_4->next)
  VAR_3 |= FUNC_0(VAR_4);

 return FUNC_1(VAR_2, VAR_3, VAR_0);
}
