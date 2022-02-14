
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sigaction {scalar_t__ sa_flags; int sa_mask; int sa_handler; } ;
struct TYPE_2__ {scalar_t__ rto_gdb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int,struct sigaction*,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(int VAR_3)
{
 struct sigaction VAR_4;




 VAR_4.sa_handler = VAR_0;
 FUNC_2(&VAR_4.sa_mask);
 VAR_4.sa_flags = 0;
 (void) FUNC_1(VAR_3, &VAR_4, ((void*)0));

 if (VAR_2.rto_gdb)
  if (FUNC_3(VAR_1)) { }

 FUNC_0(VAR_3);
}
