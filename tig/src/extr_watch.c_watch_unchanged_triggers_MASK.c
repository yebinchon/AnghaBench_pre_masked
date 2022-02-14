
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watch {int changed; int triggers; } ;
typedef enum watch_trigger { ____Placeholder_watch_trigger } watch_trigger ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline enum watch_trigger
FUNC_1(struct watch *VAR_0)
{
 return FUNC_0(VAR_0->triggers, VAR_0->changed);
}
