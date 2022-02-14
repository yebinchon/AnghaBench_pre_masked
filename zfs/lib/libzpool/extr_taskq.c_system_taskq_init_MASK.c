
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* FUNC_0 (char*,int,int ,int,int,int) ;

void
FUNC_1(void)
{
 VAR_4 = FUNC_0("system_taskq", 64, VAR_2, 4, 512,
     VAR_0 | VAR_1);
 VAR_3 = FUNC_0("delay_taskq", 4, VAR_2, 4,
     512, VAR_0 | VAR_1);
}
