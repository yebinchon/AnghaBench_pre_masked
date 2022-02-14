
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tgl_state {int dummy; } ;
struct tgl_message {int to_id; } ;
struct in_ev {int dummy; } ;
typedef int json_t ;


 scalar_t__ VAR_0 ;
 struct tgl_state* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *,int ) ;
 int * FUNC_4 (struct tgl_message*) ;
 int FUNC_5 (struct tgl_message*) ;
 int FUNC_6 (struct in_ev*) ;
 int FUNC_7 (struct in_ev*) ;
 int FUNC_8 (struct in_ev*,char*,char*) ;
 struct in_ev* VAR_6 ;
 int FUNC_9 () ;
 int FUNC_10 (struct in_ev*,struct tgl_message*) ;
 int FUNC_11 (struct tgl_message*) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 () ;

void FUNC_14 (struct tgl_state *VAR_7, struct tgl_message *VAR_8) {
  FUNC_0 (VAR_7 == VAR_1);






  if (!VAR_3) { return; }
  if (FUNC_12 (VAR_8->to_id) == VAR_0) {
    FUNC_13 ();
  }
  if (VAR_2) {
    FUNC_9 ();
  }
  if (VAR_4 && !VAR_6) { return; }
  struct in_ev *VAR_9 = VAR_6;
  FUNC_7 (VAR_9);
  if (!VAR_5) {
    FUNC_10 (VAR_9, VAR_8);
  } else {







  }
  FUNC_6 (VAR_9);
}
