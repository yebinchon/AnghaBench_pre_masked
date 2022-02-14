
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shrink_control {int gfp_mask; int nr_to_scan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct shrink_control*) ;

void
FUNC_1(void)
{
 struct shrink_control VAR_2;

 VAR_2.nr_to_scan = VAR_1;
 VAR_2.gfp_mask = VAR_0;

 (void) FUNC_0(((void*)0), &VAR_2);
}
