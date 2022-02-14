
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {scalar_t__ sa_flags; int sa_mask; int sa_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void**,int) ;
 int FUNC_1 (void**,int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,struct sigaction*,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(int VAR_3)
{
 struct sigaction VAR_4;







 FUNC_2();





 VAR_4.sa_handler = VAR_1;
 FUNC_5(&VAR_4.sa_mask);
 VAR_4.sa_flags = 0;
 (void) FUNC_4(VAR_3, &VAR_4, ((void*)0));
 FUNC_3(VAR_3);
}
