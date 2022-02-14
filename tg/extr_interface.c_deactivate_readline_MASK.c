
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int ) ;
 scalar_t__* FUNC_2 (int) ;
 int FUNC_3 (scalar_t__*,int ,int) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 () ;
 scalar_t__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_8 (void) {
  if (VAR_0) {
    FUNC_4 ("\033[2K\r");
    FUNC_1 (VAR_6);
  } else {
    VAR_5 = VAR_3;
    VAR_4 = FUNC_2 (VAR_1 + 1);
    FUNC_0 (VAR_4);
    VAR_4[VAR_1] = 0;
    FUNC_3 (VAR_4, VAR_2, VAR_1);

    FUNC_7();
    FUNC_6("", 0);
    FUNC_5();
  }
}
