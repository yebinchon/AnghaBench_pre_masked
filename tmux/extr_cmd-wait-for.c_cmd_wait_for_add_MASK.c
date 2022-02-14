
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wait_channel {int name; int lockers; int waiters; scalar_t__ woken; scalar_t__ locked; } ;


 int FUNC_0 (int ,int *,struct wait_channel*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;
 int VAR_0 ;
 struct wait_channel* FUNC_3 (int) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static struct wait_channel *
FUNC_5(const char *VAR_1)
{
 struct wait_channel *VAR_2;

 VAR_2 = FUNC_3(sizeof *VAR_2);
 VAR_2->name = FUNC_4(VAR_1);

 VAR_2->locked = 0;
 VAR_2->woken = 0;

 FUNC_1(&VAR_2->waiters);
 FUNC_1(&VAR_2->lockers);

 FUNC_0(VAR_0, &VAR_0, VAR_2);

 FUNC_2("add wait channel %s", VAR_2->name);

 return (VAR_2);
}
