
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_ev {int dummy; } ;
struct command {int dummy; } ;
struct arg {int peer_id; } ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0 (struct command *VAR_2, int VAR_3, struct arg VAR_4[], struct in_ev *VAR_5) {
  if (!VAR_5) {
    VAR_1 = 1;
    VAR_0 = VAR_4[0].peer_id;
  }
}
