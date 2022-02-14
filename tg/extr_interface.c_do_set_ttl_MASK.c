
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ state; } ;
struct TYPE_4__ {TYPE_3__ encr_chat; } ;
typedef TYPE_1__ tgl_peer_t ;
struct in_ev {int refcnt; } ;
struct command {int dummy; } ;
struct arg {int num; int peer_id; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,struct in_ev*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,TYPE_3__*,int ,int ,struct in_ev*) ;
 TYPE_1__* FUNC_3 (int ,int ) ;

void FUNC_4 (struct command *VAR_3, int VAR_4, struct arg VAR_5[], struct in_ev *VAR_6) {
  FUNC_0 (VAR_4 == 2);
  if (VAR_6) { VAR_6->refcnt ++; }
  tgl_peer_t *VAR_7 = FUNC_3 (VAR_0, VAR_5[0].peer_id);
  if (VAR_7 && VAR_7->encr_chat.state == VAR_2) {
    FUNC_2 (VAR_0, &VAR_7->encr_chat, VAR_5[1].num, VAR_1, VAR_6);
  } else {
    FUNC_1 (VAR_0, VAR_6, 0);
  }
}
