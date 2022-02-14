
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int last_name; int first_name; } ;
struct TYPE_5__ {int flags; TYPE_1__ user; } ;
typedef TYPE_2__ tgl_peer_t ;
typedef int tgl_peer_id_t ;
struct in_ev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct in_ev*) ;
 int FUNC_2 (struct in_ev*,char*,scalar_t__,...) ;
 int FUNC_3 (struct in_ev*,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (struct in_ev*,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__* VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;

void FUNC_8 (struct in_ev *VAR_11, tgl_peer_id_t VAR_12, tgl_peer_t *VAR_13) {
  FUNC_0 (FUNC_7 (VAR_12) == VAR_6);
  FUNC_3 (VAR_11, VAR_0);
  if (VAR_7) {
    FUNC_4 (VAR_11, VAR_12);
    FUNC_1 (VAR_11);
    return;
  }
  if (!VAR_13) {
    FUNC_2 (VAR_11, "user#%d", FUNC_6 (VAR_12));
    int VAR_14;
    int VAR_15 = 1;
    for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
      if (VAR_8[VAR_14] == FUNC_6 (VAR_12)) {
        VAR_15 = 0;
        break;
      }
    }
    if (VAR_15) {
      FUNC_0 (VAR_9 < 1000);
      VAR_8[VAR_9 ++] = FUNC_6 (VAR_12);
    }
  } else {
    if (VAR_13->flags & (VAR_5 | VAR_2)) {
      FUNC_3 (VAR_11, VAR_1);
    }
    if ((VAR_13->flags & VAR_4)) {
      FUNC_2 (VAR_11, "deleted user#%d", FUNC_6 (VAR_12));
    } else if (!(VAR_13->flags & VAR_3)) {
      FUNC_2 (VAR_11, "user#%d", FUNC_6 (VAR_12));
    } else if (VAR_10) {
      FUNC_2 (VAR_11, "user#%d", FUNC_6 (VAR_12));
    } else if (!VAR_13->user.first_name || !FUNC_5 (VAR_13->user.first_name)) {
      FUNC_2 (VAR_11, "%s", VAR_13->user.last_name);
    } else if (!VAR_13->user.last_name || !FUNC_5 (VAR_13->user.last_name)) {
      FUNC_2 (VAR_11, "%s", VAR_13->user.first_name);
    } else {
      FUNC_2 (VAR_11, "%s %s", VAR_13->user.first_name, VAR_13->user.last_name);
    }
    if (VAR_13->flags & (VAR_5 | VAR_2)) {
      FUNC_1 (VAR_11);
    }
  }
  FUNC_1 (VAR_11);
}
