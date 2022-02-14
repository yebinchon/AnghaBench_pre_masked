
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct in_ev {int dummy; } ;
struct event_base {int dummy; } ;
struct command {int dummy; } ;
struct arg {int dummy; } ;
struct TYPE_3__ {struct event_base* ev_base; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct event_base*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (char*,...) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 () ;

void FUNC_9 (struct command *VAR_12, int VAR_13, struct arg VAR_14[], struct in_ev *VAR_15) {
  FUNC_5 ("Do_clear\n");
  FUNC_4 (VAR_4);
  FUNC_6 (VAR_3);

  FUNC_6 (VAR_1);
  FUNC_6 (VAR_10);
  FUNC_6 (VAR_9);
  FUNC_6 (VAR_5);

  FUNC_6 (VAR_2);
  FUNC_6 (VAR_7);
  FUNC_6 (VAR_8);
  if (VAR_6) {
    FUNC_6 (VAR_6);
  }
  FUNC_0 ();
  FUNC_3 (VAR_11);
  struct event_base *VAR_16 = VAR_0->ev_base;
  FUNC_7 (VAR_0);
  FUNC_2 (VAR_16);
  FUNC_5 ("Bytes left allocated: %lld\n", FUNC_8 ());
  FUNC_1 (0);
}
