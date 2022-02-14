
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tgl_user {int id; } ;
struct tgl_state {int dummy; } ;
struct tgl_chat {int id; } ;
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
 int FUNC_6 (struct in_ev*,int ,void*) ;
 int FUNC_7 (struct in_ev*,int) ;
 int FUNC_8 (struct in_ev*,int ,void*) ;

void FUNC_9 (struct tgl_state *VAR_6, struct tgl_user *VAR_7, struct tgl_chat *VAR_8, enum tgl_typing_status VAR_9) {
  FUNC_0 (VAR_6 == VAR_1);
  if (VAR_4 < 2 || (VAR_2 && !VAR_5)) { return; }
  if (VAR_3) { return; }
  struct in_ev *VAR_10 = VAR_5;
  FUNC_3 (VAR_10);
  FUNC_5 (VAR_10, VAR_0);
  FUNC_4 (VAR_10, "User ");
  FUNC_8 (VAR_10, VAR_7->id, (void *)VAR_7);
  FUNC_4 (VAR_10, " is ");
  FUNC_7 (VAR_10, VAR_9);
  FUNC_4 (VAR_10, " in chat ");
  FUNC_6 (VAR_10, VAR_8->id, (void *)VAR_8);
  FUNC_4 (VAR_10, "\n");
  FUNC_1 (VAR_10);
  FUNC_2 (VAR_10);
}
