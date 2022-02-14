
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_ev {int refcnt; } ;
struct command {int dummy; } ;
struct arg {int num; int peer_id; } ;
typedef enum tgl_typing_status { ____Placeholder_tgl_typing_status } tgl_typing_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct in_ev*,int ,char*) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int,int ,struct in_ev*) ;
 int VAR_4 ;

void FUNC_3 (struct command *VAR_5, int VAR_6, struct arg VAR_7[], struct in_ev *VAR_8) {
  FUNC_0 (VAR_6 == 2);
  enum tgl_typing_status VAR_9 = VAR_4;
  if (VAR_7[1].num != VAR_1) {
    if (VAR_7[1].num > 0 && VAR_7[1].num > 10) {
      FUNC_1 (VAR_2, VAR_8, VAR_0, "illegal typing status");
      return;
    }
    VAR_9 = (enum tgl_typing_status) VAR_7[1].num;
  }
  if (VAR_8) { VAR_8->refcnt ++; }
  FUNC_2 (VAR_2, VAR_7[0].peer_id, VAR_9, VAR_3, VAR_8);
}
