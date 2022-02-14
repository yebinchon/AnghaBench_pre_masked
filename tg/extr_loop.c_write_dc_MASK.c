
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tgl_dc {int flags; int auth_key_id; int* auth_key; TYPE_1__** options; } ;
struct TYPE_2__ {int port; int* ip; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int,int*,int) ;

void FUNC_3 (struct tgl_dc *VAR_1, void *VAR_2) {
  int VAR_3 = *(int *)VAR_2;
  if (!VAR_1) {
    int VAR_4 = 0;
    FUNC_0 (FUNC_2 (VAR_3, &VAR_4, 4) == 4);
    return;
  } else {
    int VAR_5 = 1;
    FUNC_0 (FUNC_2 (VAR_3, &VAR_5, 4) == 4);
  }

  FUNC_0 (VAR_1->flags & VAR_0);

  FUNC_0 (FUNC_2 (VAR_3, &VAR_1->options[0]->port, 4) == 4);
  int VAR_6 = FUNC_1 (VAR_1->options[0]->ip);
  FUNC_0 (FUNC_2 (VAR_3, &VAR_6, 4) == 4);
  FUNC_0 (FUNC_2 (VAR_3, VAR_1->options[0]->ip, VAR_6) == VAR_6);
  FUNC_0 (FUNC_2 (VAR_3, &VAR_1->auth_key_id, 8) == 8);
  FUNC_0 (FUNC_2 (VAR_3, VAR_1->auth_key, 256) == 256);
}
