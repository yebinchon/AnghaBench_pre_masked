
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmuxproc {int dummy; } ;
struct event_base {int dummy; } ;
struct client {int flags; } ;
typedef int sigset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct client*,int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (struct event_base*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 () ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 scalar_t__ FUNC_16 (char*,int *) ;
 int FUNC_17 (struct tmuxproc*,int ) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (char*) ;
 int FUNC_21 (int ) ;
 struct client* FUNC_22 (int) ;
 int FUNC_23 (char**) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_24 () ;
 int VAR_12 ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int ,int *,int *) ;
 scalar_t__ FUNC_27 (int ,int ,int ,int*) ;
 int VAR_13 ;
 int FUNC_28 () ;
 int FUNC_29 () ;
 int FUNC_30 (char*) ;
 int VAR_14 ;

int
FUNC_31(struct tmuxproc *VAR_15, struct event_base *VAR_16, int VAR_17,
    char *VAR_18)
{
 int VAR_19[2];
 sigset_t VAR_20, VAR_21;
 struct client *VAR_22;
 char *VAR_23 = ((void*)0);

 if (FUNC_27(VAR_0, VAR_5, VAR_2, VAR_19) != 0)
  FUNC_8("socketpair failed");

 FUNC_25(&VAR_20);
 FUNC_26(VAR_3, &VAR_20, &VAR_21);
 switch (FUNC_10()) {
 case -1:
  FUNC_8("fork failed");
 case 0:
  break;
 default:
  FUNC_26(VAR_4, &VAR_21, ((void*)0));
  FUNC_2(VAR_19[1]);
  return (VAR_19[0]);
 }
 FUNC_2(VAR_19[0]);
 if (FUNC_5(1, 0) != 0)
  FUNC_8("daemon failed");
 FUNC_17(VAR_15, 0);
 if (FUNC_6(VAR_16) != 0)
  FUNC_9("event_reinit failed");
 VAR_10 = FUNC_20("server");
 FUNC_19(VAR_10, VAR_11);
 FUNC_26(VAR_4, &VAR_21, ((void*)0));

 if (FUNC_15() > 1)
  FUNC_29();
 if (FUNC_16("stdio rpath wpath cpath fattr unix getpw recvfd proc exec "
     "tty ps", ((void*)0)) != 0)
  FUNC_8("pledge failed");

 FUNC_0(&VAR_14);
 FUNC_0(&VAR_6);
 FUNC_1(&VAR_7);
 FUNC_0(&VAR_12);
 FUNC_14();

 FUNC_12(&VAR_13, ((void*)0));

 VAR_8 = FUNC_23(&VAR_23);
 if (VAR_8 != -1)
  FUNC_24();
 VAR_22 = FUNC_22(VAR_19[1]);

 if (VAR_17 >= 0) {
  FUNC_30(VAR_18);
  FUNC_11(VAR_18);
  FUNC_2(VAR_17);
 }

 if (VAR_23 != ((void*)0)) {
  FUNC_3(VAR_22, FUNC_4(VAR_23));
  FUNC_11(VAR_23);
  VAR_22->flags |= VAR_1;
 }

 FUNC_21(0);
 FUNC_18(VAR_10, VAR_9);

 FUNC_13();
 FUNC_28();

 FUNC_7(0);
}
