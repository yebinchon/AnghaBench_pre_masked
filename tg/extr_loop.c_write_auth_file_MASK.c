
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int peer_id; } ;
struct TYPE_5__ {int max_dc_num; int dc_working_num; TYPE_1__ our_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (TYPE_2__*,int ,int*) ;
 int FUNC_5 (int,int*,int) ;
 int VAR_5 ;

void FUNC_6 (void) {
  if (VAR_4) { return; }
  int VAR_6 = FUNC_3 (FUNC_2 (), VAR_1 | VAR_2, 0600);
  FUNC_0 (VAR_6 >= 0);
  int VAR_7 = VAR_0;
  FUNC_0 (FUNC_5 (VAR_6, &VAR_7, 4) == 4);
  FUNC_0 (FUNC_5 (VAR_6, &VAR_3->max_dc_num, 4) == 4);
  FUNC_0 (FUNC_5 (VAR_6, &VAR_3->dc_working_num, 4) == 4);

  FUNC_4 (VAR_3, VAR_5, &VAR_6);

  FUNC_0 (FUNC_5 (VAR_6, &VAR_3->our_id.peer_id, 4) == 4);
  FUNC_1 (VAR_6);
}
