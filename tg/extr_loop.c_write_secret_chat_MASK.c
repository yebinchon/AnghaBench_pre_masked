
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tgl_peer_t ;
struct tgl_secret_chat {scalar_t__ state; int* print_name; int user_id; int admin_id; int date; int ttl; int layer; int access_hash; int key_fingerprint; int key; int first_key_sha; int in_seq_no; int last_in_seq_no; int out_seq_no; int id; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int,int*,int) ;

void FUNC_5 (tgl_peer_t *VAR_2, void *VAR_3) {
  struct tgl_secret_chat *VAR_4 = (void *)VAR_2;
  if (FUNC_3 (VAR_4->id) != VAR_0) { return; }
  if (VAR_4->state != VAR_1) { return; }
  int *VAR_5 = VAR_3;
  int VAR_6 = VAR_5[0];
  VAR_5[1] ++;

  int VAR_7 = FUNC_2 (VAR_4->id);
  FUNC_0 (FUNC_4 (VAR_6, &VAR_7, 4) == 4);

  int VAR_8 = FUNC_1 (VAR_4->print_name);
  FUNC_0 (FUNC_4 (VAR_6, &VAR_8, 4) == 4);
  FUNC_0 (FUNC_4 (VAR_6, VAR_4->print_name, VAR_8) == VAR_8);
  FUNC_0 (FUNC_4 (VAR_6, &VAR_4->user_id, 4) == 4);
  FUNC_0 (FUNC_4 (VAR_6, &VAR_4->admin_id, 4) == 4);
  FUNC_0 (FUNC_4 (VAR_6, &VAR_4->date, 4) == 4);
  FUNC_0 (FUNC_4 (VAR_6, &VAR_4->ttl, 4) == 4);
  FUNC_0 (FUNC_4 (VAR_6, &VAR_4->layer, 4) == 4);
  FUNC_0 (FUNC_4 (VAR_6, &VAR_4->access_hash, 8) == 8);
  FUNC_0 (FUNC_4 (VAR_6, &VAR_4->state, 4) == 4);
  FUNC_0 (FUNC_4 (VAR_6, &VAR_4->key_fingerprint, 8) == 8);
  FUNC_0 (FUNC_4 (VAR_6, &VAR_4->key, 256) == 256);
  FUNC_0 (FUNC_4 (VAR_6, &VAR_4->first_key_sha, 20) == 20);
  FUNC_0 (FUNC_4 (VAR_6, &VAR_4->in_seq_no, 4) == 4);
  FUNC_0 (FUNC_4 (VAR_6, &VAR_4->last_in_seq_no, 4) == 4);
  FUNC_0 (FUNC_4 (VAR_6, &VAR_4->out_seq_no, 4) == 4);
}
