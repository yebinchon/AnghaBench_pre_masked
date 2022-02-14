
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watch {int changed; } ;
typedef enum watch_trigger { ____Placeholder_watch_trigger } watch_trigger ;
typedef enum watch_event { ____Placeholder_watch_event } watch_event ;


 int FUNC_0 (struct watch*) ;
 int FUNC_1 (int,int,int ) ;

enum watch_trigger
FUNC_2(struct watch *VAR_0, enum watch_event VAR_1)
{
 enum watch_trigger VAR_2 = FUNC_0(VAR_0);

 return FUNC_1(VAR_1, VAR_2, VAR_0->changed);
}
