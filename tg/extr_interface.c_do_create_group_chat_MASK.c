
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tgl_peer_id_t ;
struct in_ev {int refcnt; } ;
struct command {int dummy; } ;
struct arg {int peer_id; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int ,int,int *,int ,int ,struct in_ev*) ;

void FUNC_3 (struct command *VAR_2, int VAR_3, struct arg VAR_4[], struct in_ev *VAR_5) {
  FUNC_1 (VAR_3 >= 1 && VAR_3 <= 1000);
  static tgl_peer_id_t VAR_6[1000];
  int VAR_7;
  for (VAR_7 = 0; VAR_7 < VAR_3 - 1; VAR_7++) {
    VAR_6[VAR_7] = VAR_4[VAR_7 + 1].peer_id;
  }

  if (VAR_5) { VAR_5->refcnt ++; }
  FUNC_2 (VAR_0, VAR_3 - 1, VAR_6, FUNC_0 (0), VAR_1, VAR_5);
}
