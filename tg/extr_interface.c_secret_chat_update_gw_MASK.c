
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tgl_state {int dummy; } ;
struct tgl_secret_chat {int id; } ;
struct in_ev {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 struct tgl_state* VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct in_ev*,void*,unsigned int) ;
 int FUNC_2 (struct tgl_secret_chat*,unsigned int) ;
 int FUNC_3 (struct in_ev*) ;
 int FUNC_4 (struct in_ev*) ;
 int FUNC_5 (struct in_ev*) ;
 int FUNC_6 (struct in_ev*,char*) ;
 int FUNC_7 (struct in_ev*,int ) ;
 struct in_ev* VAR_10 ;
 int FUNC_8 (struct in_ev*,int ,void*) ;
 int VAR_11 ;
 int FUNC_9 (struct in_ev*,unsigned int) ;
 int FUNC_10 (struct tgl_secret_chat*,unsigned int) ;
 int FUNC_11 (struct tgl_state*,struct tgl_secret_chat*,int ,int ) ;
 int FUNC_12 () ;

void FUNC_13 (struct tgl_state *VAR_12, struct tgl_secret_chat *VAR_13, unsigned VAR_14) {
  FUNC_0 (VAR_12 == VAR_5);







  if ((VAR_14 & VAR_4) || (VAR_14 & VAR_2)) {
    FUNC_12 ();
  }

  if (!VAR_6) { return; }

  if ((VAR_14 & VAR_3) && !VAR_7) {

    FUNC_11 (VAR_5, VAR_13, VAR_11, 0);
  }

  if (VAR_8 && !VAR_10) { return; }
  struct in_ev *VAR_15 = VAR_10;


  if (!(VAR_14 & VAR_1)) {
    FUNC_5 (VAR_15);
    if (!VAR_9) {
      FUNC_7 (VAR_15, VAR_0);
      FUNC_6 (VAR_15, "Secret chat ");
      FUNC_8 (VAR_15, VAR_13->id, (void *)VAR_13);
      if (!(VAR_14 & VAR_2)) {
        FUNC_6 (VAR_15, " updated");
        FUNC_9 (VAR_15, VAR_14);
      } else {
        FUNC_6 (VAR_15, " deleted");
      }
      FUNC_6 (VAR_15, "\n");
      FUNC_3 (VAR_15);
    } else {
      FUNC_1 (VAR_15, (void *)VAR_13, VAR_14);
    }
    FUNC_4 (VAR_15);
  }
}
