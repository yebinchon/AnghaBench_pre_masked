
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watch {int state; int changed; } ;
typedef enum watch_trigger { ____Placeholder_watch_trigger } watch_trigger ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;

bool
FUNC_1(struct watch *VAR_2)
{
 enum watch_trigger VAR_3 = VAR_2->state & VAR_0;
 enum watch_trigger VAR_4 = VAR_2->changed & VAR_0;
 enum watch_trigger VAR_5 = FUNC_0(VAR_4, VAR_3);
 enum watch_trigger VAR_6 = FUNC_0(VAR_2->changed, VAR_0);
 bool VAR_7 = !!(VAR_5 | VAR_6);

 VAR_2->changed = VAR_1;
 return VAR_7;
}
