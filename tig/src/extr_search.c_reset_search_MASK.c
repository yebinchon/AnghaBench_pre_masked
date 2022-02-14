
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {scalar_t__ matched_lines; int * matched_line; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct view *VAR_0)
{
 FUNC_0(VAR_0->matched_line);
 VAR_0->matched_line = ((void*)0);
 VAR_0->matched_lines = 0;
}
