
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_ds_reply_markup {int dummy; } ;
struct in_ev {int refcnt; } ;
struct command {int dummy; } ;
struct arg {int peer_id; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,struct in_ev*,int ,char*) ;
 struct tl_ds_reply_markup* FUNC_6 (int ) ;
 int FUNC_7 (struct tl_ds_reply_markup*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (int ,int ,int ,int,struct tl_ds_reply_markup*,int ,struct in_ev*) ;
 scalar_t__ FUNC_9 (int ,int ,int ) ;

void FUNC_10 (struct command *VAR_11, int VAR_12, struct arg VAR_13[], struct in_ev *VAR_14) {
  FUNC_3 (VAR_12 == 3);
  if (VAR_14) { VAR_14->refcnt ++; }

  FUNC_4 ();
  if (FUNC_9 (VAR_1, FUNC_0(1), FUNC_2 (VAR_10)) < 0) {
    FUNC_5 (VAR_1, VAR_14, VAR_0, "can not parse reply markup");
    return;
  }
  VAR_5 = VAR_6;
  VAR_4 = VAR_7;

  struct tl_ds_reply_markup *VAR_15 = FUNC_6 (FUNC_2 (VAR_10));
  FUNC_3 (VAR_15);

  FUNC_8 (VAR_1, VAR_13[0].peer_id, FUNC_0(2), FUNC_1(VAR_9) | VAR_2 | VAR_3, VAR_15, VAR_8, VAR_14);

  FUNC_7 (VAR_15, FUNC_2 (VAR_10));
}
