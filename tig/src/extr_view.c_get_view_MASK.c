
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {int dummy; } ;


 int FUNC_0 (struct view**) ;
 struct view** VAR_0 ;

struct view *
FUNC_1(int VAR_1)
{
 return 0 <= VAR_1 && VAR_1 < FUNC_0(VAR_0) ? VAR_0[VAR_1] : ((void*)0);
}
