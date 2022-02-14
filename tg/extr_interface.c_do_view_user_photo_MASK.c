
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int photo_big; } ;
struct TYPE_5__ {TYPE_1__ user; } ;
typedef TYPE_2__ tgl_peer_t ;
struct in_ev {int refcnt; } ;
struct command {int dummy; } ;
struct arg {int peer_id; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct in_ev*,int ,int *) ;
 int VAR_1 ;
 int FUNC_2 (int ,int *,int ,struct in_ev*) ;
 TYPE_2__* FUNC_3 (int ,int ) ;

void FUNC_4 (struct command *VAR_2, int VAR_3, struct arg VAR_4[], struct in_ev *VAR_5) {
  FUNC_0 (VAR_3 == 1);
  if (VAR_5) { VAR_5->refcnt ++; }

  tgl_peer_t *VAR_6 = FUNC_3 (VAR_0, VAR_4[0].peer_id);
  if (VAR_6) {
    FUNC_2 (VAR_0, &VAR_6->user.photo_big, VAR_1, VAR_5);
  } else {
    FUNC_1 (VAR_0, VAR_5, 0, ((void*)0));
  }
}
