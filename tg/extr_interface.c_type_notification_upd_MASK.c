
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tgl_user {int id; } ;
struct tgl_state {int dummy; } ;
struct in_ev {int dummy; } ;
typedef enum tgl_typing_status { ____Placeholder_tgl_typing_status } tgl_typing_status ;


 int VAR_0 ;
 struct tgl_state* VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct in_ev*) ;
 int FUNC_2 (struct in_ev*) ;
 int FUNC_3 (struct in_ev*) ;
 int FUNC_4 (struct in_ev*,char*) ;
 int FUNC_5 (struct in_ev*,int ) ;
 struct in_ev* VAR_5 ;
 int FUNC_6 (struct in_ev*,int) ;
 int FUNC_7 (struct in_ev*,int ,void*) ;

void FUNC_8 (struct tgl_state *VAR_6, struct tgl_user *VAR_7, enum tgl_typing_status VAR_8) {
  FUNC_0 (VAR_6 == VAR_1);
  if (VAR_4 < 2 || (VAR_2 && !VAR_5)) { return; }
  if (VAR_3) { return; }
  struct in_ev *VAR_9 = VAR_5;
  FUNC_3 (VAR_9);
  FUNC_5 (VAR_9, VAR_0);
  FUNC_4 (VAR_9, "User ");
  FUNC_7 (VAR_9, VAR_7->id, (void *)VAR_7);
  FUNC_4 (VAR_9, " is ");
  FUNC_6 (VAR_9, VAR_8);
  FUNC_4 (VAR_9, "\n");
  FUNC_1 (VAR_9);
  FUNC_2 (VAR_9);
}
