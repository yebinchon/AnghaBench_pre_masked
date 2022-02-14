
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tgl_peer_id_t ;
struct in_ev {int refcnt; } ;
struct command {int dummy; } ;
struct arg {int str; int peer_id; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int *,int ,int ,int,int ,struct in_ev*) ;

void FUNC_3 (struct command *VAR_4, int VAR_5, struct arg VAR_6[], struct in_ev *VAR_7) {
  FUNC_0 (VAR_5 >= 1 && VAR_5 <= 1000);
  static tgl_peer_id_t VAR_8[1000];
  int VAR_9;
  for (VAR_9 = 0; VAR_9 < VAR_5 - 1; VAR_9++) {
    VAR_8[VAR_9] = VAR_6[VAR_9].peer_id;
  }
  if (VAR_7) { VAR_7->refcnt ++; }
  FUNC_2 (VAR_0, VAR_5 - 1, VAR_8, VAR_6[VAR_5 - 1].str, FUNC_1 (VAR_6[VAR_5 - 1].str), VAR_1 | VAR_2, VAR_3, VAR_7);
}
