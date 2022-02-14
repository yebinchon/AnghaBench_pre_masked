
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wait_item {int item; } ;
struct wait_channel {scalar_t__ locked; int lockers; } ;
struct cmdq_item {int dummy; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;


 int VAR_0 ;
 int VAR_1 ;
 struct wait_item* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct wait_item*,int ) ;
 int FUNC_2 (struct wait_channel*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct cmdq_item*,char*,char const*) ;
 int VAR_2 ;
 int FUNC_5 (struct wait_item*) ;

__attribute__((used)) static enum cmd_retval
FUNC_6(struct cmdq_item *VAR_3, const char *VAR_4,
    struct wait_channel *VAR_5)
{
 struct wait_item *VAR_6;

 if (VAR_5 == ((void*)0) || !VAR_5->locked) {
  FUNC_4(VAR_3, "channel %s not locked", VAR_4);
  return (VAR_0);
 }

 if ((VAR_6 = FUNC_0(&VAR_5->lockers)) != ((void*)0)) {
  FUNC_3(VAR_6->item);
  FUNC_1(&VAR_5->lockers, VAR_6, VAR_2);
  FUNC_5(VAR_6);
 } else {
  VAR_5->locked = 0;
  FUNC_2(VAR_5);
 }

 return (VAR_1);
}
