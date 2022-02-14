
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tgl_state {int dummy; } ;
struct tgl_message {int server_id; int from_id; int to_id; } ;
struct TYPE_3__ {int our_id; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct tgl_state*,void*,int,int,struct tgl_message**) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ,int *,int *) ;

void FUNC_3 (struct tgl_state *VAR_1, void *VAR_2, int VAR_3, int VAR_4, struct tgl_message *VAR_5[]) {
  FUNC_0 (VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
  if (VAR_4 > 0) {
    if (FUNC_1 (VAR_5[0]->to_id, VAR_0->our_id)) {
      FUNC_2 (VAR_0, VAR_5[0]->to_id, VAR_5[0]->server_id, 0, ((void*)0), ((void*)0));
    } else {
      FUNC_2 (VAR_0, VAR_5[0]->from_id, VAR_5[0]->server_id, 0, ((void*)0), ((void*)0));
    }
  }
}
