
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct in_ev {int dummy; } ;
typedef int json_t ;
struct TYPE_2__ {char* error; int error_code; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 () ;
 scalar_t__ FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct in_ev*) ;
 int FUNC_9 (struct in_ev*) ;
 int FUNC_10 (struct in_ev*,char*,char*,...) ;

void FUNC_11 (struct in_ev *VAR_2) {
  FUNC_9 (VAR_2);
  if (!VAR_1) {
    FUNC_10 (VAR_2, "FAIL: %d: %s\n", VAR_0->error_code, VAR_0->error);
  } else {
  }
  FUNC_8 (VAR_2);
}
