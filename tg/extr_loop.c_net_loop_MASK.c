
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int active_queries; int ev_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ,int,int ,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;
 int FUNC_8 () ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 scalar_t__ VAR_10 ;
 int FUNC_12 () ;

void FUNC_13 (void) {
  VAR_5 = 0;
  if (VAR_10 >= VAR_3) {
    FUNC_5 ("Starting netloop\n");
  }
  VAR_9 = FUNC_4 (VAR_4->ev_base, 0, VAR_2 | VAR_1, VAR_8, 0);
  FUNC_1 (VAR_9, 0);

  int VAR_11 = FUNC_10 (0);
  while (1) {
    FUNC_2 (VAR_4->ev_base, VAR_0);

    if (VAR_9 && VAR_5) {
      FUNC_5 ("delete stdin\n");
      FUNC_3 (VAR_9);
      VAR_9 = 0;
    }
    if (VAR_6 && !VAR_4->active_queries) {
      FUNC_7 ("All done. Exit\n");
      FUNC_0 (0);
      VAR_6 = 0;
    }
    if (VAR_7 > 0) {
      FUNC_0 (0);
    }
    if (FUNC_10 (0) - VAR_11 > 3600) {
      FUNC_9 (VAR_4);
      VAR_11 = FUNC_10 (0);
    }

    FUNC_12 ();
    FUNC_11 ();
  }

  if (VAR_9) {
    FUNC_3 (VAR_9);
    VAR_9 = 0;
  }

  if (VAR_10 >= VAR_3) {
    FUNC_5 ("End of netloop\n");
  }
}
