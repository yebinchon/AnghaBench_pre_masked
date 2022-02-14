
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 char* VAR_7 ;
 char* VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ) ;
 char* FUNC_4 () ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,int,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char*) ;
 scalar_t__ FUNC_10 (char*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char**,char*,char*,int ) ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (int,int ,int ) ;

void FUNC_15 (void) {
  FUNC_1 ();
  if (!FUNC_10 (VAR_8)) {
    return;
  }
  if (FUNC_10 (VAR_7)) {
    VAR_7 = FUNC_4 ();
  }
  FUNC_12 (&VAR_8, "%s/%s", VAR_7, VAR_1);
  VAR_8 = FUNC_5 (VAR_8);
  if (!VAR_9) {
    FUNC_9 ("I: config dir=[%s]\n", VAR_7);
  }


  int VAR_10;



  if (!FUNC_6 (VAR_7, VAR_0)) {
    if (!VAR_9) {
      FUNC_9 ("[%s] created\n", VAR_7);
    }
  }

  FUNC_13 (VAR_7);
  VAR_7 = ((void*)0);

  if (FUNC_0 (VAR_8, VAR_6) != 0) {

    VAR_10 = FUNC_7 (VAR_8, VAR_4 | VAR_5, 0600);
    if (VAR_10 == -1) {
      FUNC_8 ("open[config_file]");
      FUNC_9 ("I: config_file=[%s]\n", VAR_8);
      FUNC_3 (VAR_3);
    }
    if (FUNC_14 (VAR_10, VAR_2, FUNC_11 (VAR_2)) <= 0) {
      FUNC_8 ("write[config_file]");
      FUNC_3 (VAR_3);
    }
    FUNC_2 (VAR_10);
  }
}
