
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tgl_user_status {int online; int when; } ;
struct in_ev {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct in_ev*,char*) ;
 int FUNC_2 (struct in_ev*,int ) ;

void FUNC_3 (struct tgl_user_status *VAR_1, struct in_ev *VAR_2) {
  FUNC_0(!VAR_0);
  if (VAR_1->online > 0) {
    FUNC_1 (VAR_2, "online (was online ");
    FUNC_2 (VAR_2, VAR_1->when);
    FUNC_1 (VAR_2, ")");
  } else {
    if (VAR_1->online == 0) {
      FUNC_1 (VAR_2, "offline");
    } else if (VAR_1->online == -1) {
      FUNC_1 (VAR_2, "offline (was online ");
      FUNC_2 (VAR_2, VAR_1->when);
      FUNC_1 (VAR_2, ")");
    } else if (VAR_1->online == -2) {
      FUNC_1 (VAR_2, "offline (was online recently)");
    } else if (VAR_1->online == -3) {
      FUNC_1 (VAR_2, "offline (was online last week)");
    } else if (VAR_1->online == -4) {
      FUNC_1 (VAR_2, "offline (was online last month)");
    }
  }
}
