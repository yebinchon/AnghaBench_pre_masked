
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_ev {scalar_t__ bev; } ;


 int FUNC_0 (scalar_t__,char*,int) ;
 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*) ;

void FUNC_3 (struct in_ev *VAR_2) {
  if (VAR_2->bev) {
    static char VAR_3[100];
    FUNC_1 (VAR_3, "ANSWER %d\n", VAR_1);
    FUNC_0 (VAR_2->bev, VAR_3, FUNC_2 (VAR_3));
    FUNC_0 (VAR_2->bev, VAR_0, VAR_1);
    FUNC_0 (VAR_2->bev, "\n", 1);
  }
  VAR_1 = -1;
}
