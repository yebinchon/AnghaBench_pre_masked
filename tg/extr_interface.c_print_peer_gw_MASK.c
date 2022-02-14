
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; } ;
typedef TYPE_1__ tgl_peer_t ;
struct tgl_state {int dummy; } ;





 int FUNC_0 (int ) ;
 int FUNC_1 (struct tgl_state*,void*,int,void*) ;
 int FUNC_2 (struct tgl_state*,void*,int,void*) ;
 int FUNC_3 (struct tgl_state*,void*,int,void*) ;
 int FUNC_4 (int ) ;

void FUNC_5 (struct tgl_state *VAR_0, void *VAR_1, int VAR_2, tgl_peer_t *VAR_3) {
  if (!VAR_2) {
    FUNC_3 (VAR_0, VAR_1, VAR_2, (void *)VAR_3);
    return;
  }
  switch (FUNC_4 (VAR_3->id)) {
  case 128:
    FUNC_3 (VAR_0, VAR_1, VAR_2, (void *)VAR_3);
    break;
  case 129:
    FUNC_2 (VAR_0, VAR_1, VAR_2, (void *)VAR_3);
    break;
  case 130:
    FUNC_1 (VAR_0, VAR_1, VAR_2, (void *)VAR_3);
    break;
  default:
    FUNC_0 (0);
  }
}
