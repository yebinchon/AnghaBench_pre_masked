
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int member_0; int member_1; } ;
struct tgl_state {int ev_base; } ;
struct tgl_message {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct tgl_state* VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,struct timeval*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_4 (scalar_t__,struct tgl_message**,int) ;
 int FUNC_5 (int,scalar_t__) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

void FUNC_6 (struct tgl_state *VAR_8, int VAR_9, struct tgl_message *VAR_10[]) {
  FUNC_0 (VAR_8 == VAR_1);
  if (!VAR_2) { return; }
  if (VAR_3 < 1) { return; }

  if (VAR_5 + VAR_9 <= VAR_0) {
    FUNC_4 (VAR_7 + VAR_5, VAR_10, VAR_9 * sizeof (void *));
    VAR_5 += VAR_9;

    if (!VAR_6) {
      VAR_6 = FUNC_3 (VAR_1->ev_base, VAR_4, 0);
      static struct timeval VAR_11 = { 1, 0};
      FUNC_1 (VAR_6, &VAR_11);
    }
  } else {
    FUNC_5 (VAR_5, VAR_7);
    FUNC_5 (VAR_9, VAR_10);
    VAR_5 = 0;
    if (VAR_6) {
      FUNC_2 (VAR_6);
      VAR_6 = 0;
    }
  }
}
