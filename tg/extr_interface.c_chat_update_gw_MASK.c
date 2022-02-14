
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tgl_state {int dummy; } ;
struct tgl_chat {int id; } ;
struct in_ev {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 struct tgl_state* VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct in_ev*,void*,unsigned int) ;
 int FUNC_2 (struct tgl_chat*,unsigned int) ;
 int FUNC_3 (struct in_ev*) ;
 int FUNC_4 (struct in_ev*) ;
 int FUNC_5 (struct in_ev*) ;
 int FUNC_6 (struct in_ev*,char*) ;
 int FUNC_7 (struct in_ev*,int ) ;
 struct in_ev* VAR_7 ;
 int FUNC_8 (struct in_ev*,int ,void*) ;
 int FUNC_9 (struct in_ev*,unsigned int) ;
 int FUNC_10 (struct tgl_chat*,unsigned int) ;

void FUNC_11 (struct tgl_state *VAR_8, struct tgl_chat *VAR_9, unsigned VAR_10) {
  FUNC_0 (VAR_8 == VAR_3);







  if (VAR_5 && !VAR_7) { return; }
  if (!VAR_4) { return; }
  struct in_ev *VAR_11 = VAR_7;

  if (!(VAR_10 & VAR_1)) {
    FUNC_5 (VAR_11);
    if (!VAR_6) {
      FUNC_7 (VAR_11, VAR_0);
      FUNC_6 (VAR_11, "Chat ");
      FUNC_8 (VAR_11, VAR_9->id, (void *)VAR_9);
      if (!(VAR_10 & VAR_2)) {
        FUNC_6 (VAR_11, " updated");
        FUNC_9 (VAR_11, VAR_10);
      } else {
        FUNC_6 (VAR_11, " deleted");
      }
      FUNC_6 (VAR_11, "\n");
      FUNC_3 (VAR_11);
    } else {
      FUNC_1 (VAR_11, (void *)VAR_9, VAR_10);
    }
    FUNC_4 (VAR_11);
  }
}
