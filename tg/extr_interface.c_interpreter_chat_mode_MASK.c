
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char*,int*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int ,int ,int ,int,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,char*,scalar_t__,int ,int *,int ,int ) ;
 int FUNC_6 () ;

void FUNC_7 (char *VAR_5) {
  if (VAR_5 == ((void*)0) ||
          !FUNC_2 (VAR_5, "/exit", 5) || !FUNC_2 (VAR_5, "/quit", 5)) {
    VAR_2 = 0;
    FUNC_6 ();
    return;
  }
  if (!FUNC_2 (VAR_5, "/history", 8)) {
    int VAR_6 = 40;
    FUNC_0 (VAR_5, "/history %99d", &VAR_6);
    if (VAR_6 < 0 || VAR_6 > 1000) { VAR_6 = 40; }
    FUNC_3 (VAR_0, VAR_1, 0, VAR_6, VAR_3, VAR_4, 0);
    return;
  }
  if (!FUNC_2 (VAR_5, "/read", 5)) {
    FUNC_4 (VAR_0, VAR_1, 0, 0);
    return;
  }
  if (FUNC_1 (VAR_5) > 0) {
    FUNC_5 (VAR_0, VAR_1, VAR_5, FUNC_1 (VAR_5), 0, ((void*)0), 0, 0);
  }
}
