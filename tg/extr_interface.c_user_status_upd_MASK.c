
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tgl_user {int status; int id; } ;
struct tgl_state {int dummy; } ;
struct in_ev {int dummy; } ;
typedef int json_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *,int ) ;
 int * FUNC_3 (struct tgl_user*) ;
 int VAR_4 ;
 int FUNC_4 (struct in_ev*) ;
 int FUNC_5 (struct in_ev*) ;
 int FUNC_6 (struct in_ev*) ;
 int FUNC_7 (struct in_ev*,char*,...) ;
 int FUNC_8 (struct in_ev*,int ) ;
 struct in_ev* VAR_5 ;
 int FUNC_9 (struct in_ev*,int ,void*) ;
 int FUNC_10 (int *,struct in_ev*) ;

void FUNC_11 (struct tgl_state *VAR_6, struct tgl_user *VAR_7) {
  if (VAR_2 && !VAR_5) { return; }
  if (!VAR_1) { return; }
  if (VAR_4 < 3) { return; }
  struct in_ev *VAR_8 = VAR_5;
  FUNC_6 (VAR_8);
  if (!VAR_3)
  {
    FUNC_8 (VAR_8, VAR_0);
    FUNC_7 (VAR_8, "User ");
    FUNC_9(VAR_8, VAR_7->id, (void *) VAR_7);
    FUNC_7 (VAR_8, " ");
    FUNC_10(&VAR_7->status, VAR_8);
    FUNC_7 (VAR_8, "\n");
    FUNC_4 (VAR_8);
  } else {







  }
  FUNC_5 (VAR_8);
}
