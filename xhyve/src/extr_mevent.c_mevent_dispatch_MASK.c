
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mevent {int dummy; } ;
struct kevent {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,struct kevent*,int,struct kevent*,int,int *) ;
 int FUNC_3 () ;
 struct mevent* FUNC_4 (int ,int ,int ,int *) ;
 int FUNC_5 (int,struct kevent*) ;
 int FUNC_6 (struct kevent*,int) ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_7 () ;
 int VAR_6 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;

__attribute__ ((noreturn)) void
FUNC_11(void)
{
 struct kevent VAR_7[VAR_2];
 struct kevent VAR_8[VAR_2];
 struct mevent *VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_6 = FUNC_10();
 FUNC_7();

 VAR_10 = FUNC_3();
 FUNC_0(VAR_10 > 0);






 VAR_12 = FUNC_9(VAR_5);
 if (VAR_12 < 0) {
  FUNC_8("pipe");
  FUNC_1(0);
 }




 VAR_9 = FUNC_4(VAR_5[0], VAR_1, VAR_4, ((void*)0));
 FUNC_0(VAR_9 != ((void*)0));

 for (;;) {






  VAR_11 = FUNC_5(VAR_10, VAR_7);
  if (VAR_11) {
   VAR_12 = FUNC_2(VAR_10, VAR_7, VAR_11, ((void*)0), 0, ((void*)0));
   if (VAR_12 == -1) {
    FUNC_8("Error return from kevent change");
   }
  }




  VAR_12 = FUNC_2(VAR_10, ((void*)0), 0, VAR_8, VAR_2, ((void*)0));
  if (VAR_12 == -1 && VAR_3 != VAR_0) {
   FUNC_8("Error return from kevent monitor");
  }




  FUNC_6(VAR_8, VAR_12);
 }
}
