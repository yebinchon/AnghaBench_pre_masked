
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int title; } ;
struct TYPE_5__ {TYPE_1__ chat; } ;
typedef TYPE_2__ tgl_peer_t ;
typedef int tgl_peer_id_t ;
struct in_ev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct in_ev*) ;
 int FUNC_2 (struct in_ev*,char*,int ) ;
 int FUNC_3 (struct in_ev*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (struct in_ev*,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ VAR_3 ;

void FUNC_7 (struct in_ev *VAR_4, tgl_peer_id_t VAR_5, tgl_peer_t *VAR_6) {
  FUNC_0 (FUNC_6 (VAR_5) == VAR_1);
  FUNC_3 (VAR_4, VAR_0);
  if (VAR_2) {
    FUNC_4 (VAR_4, VAR_5);
    FUNC_1 (VAR_4);
    return;
  }
  if (!VAR_6 || VAR_3) {
    FUNC_2 (VAR_4, "chat#%d", FUNC_5 (VAR_5));
  } else {
    FUNC_2 (VAR_4, "%s", VAR_6->chat.title);
  }
  FUNC_1 (VAR_4);
}
