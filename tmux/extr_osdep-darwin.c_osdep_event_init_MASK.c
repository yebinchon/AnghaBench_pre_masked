
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {int dummy; } ;


 struct event_base* FUNC_0 () ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*) ;

struct event_base *
FUNC_3(void)
{
 struct event_base *VAR_0;





 FUNC_1("EVENT_NOKQUEUE", "1", 1);
 FUNC_1("EVENT_NOPOLL", "1", 1);

 VAR_0 = FUNC_0();
 FUNC_2("EVENT_NOKQUEUE");
 FUNC_2("EVENT_NOPOLL");
 return (VAR_0);
}
