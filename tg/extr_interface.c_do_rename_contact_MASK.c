
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ phone; } ;
struct TYPE_5__ {TYPE_1__ user; } ;
typedef TYPE_2__ tgl_peer_t ;
struct in_ev {int refcnt; } ;
struct command {int dummy; } ;
struct arg {scalar_t__ str; int peer_id; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct in_ev*,int ) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__,int ,scalar_t__,int ,scalar_t__,int ,int ,int ,struct in_ev*) ;
 TYPE_2__* FUNC_4 (int ,int ) ;

void FUNC_5 (struct command *VAR_2, int VAR_3, struct arg VAR_4[], struct in_ev *VAR_5) {
  FUNC_0 (VAR_3 == 3);

  tgl_peer_t *VAR_6 = FUNC_4 (VAR_0, VAR_4[0].peer_id);
  if (VAR_6 && VAR_6->user.phone) {
    if (VAR_5) { VAR_5->refcnt ++; }
    FUNC_3 (VAR_0, VAR_6->user.phone, FUNC_2 (VAR_6->user.phone), VAR_4[1].str, FUNC_2 (VAR_4[1].str), VAR_4[2].str, FUNC_2 (VAR_4[2].str), 0, VAR_1, VAR_5);
  } else {
    if (VAR_5) { VAR_5->refcnt ++; }
    FUNC_1 (VAR_0, VAR_5, 0);
  }
}
