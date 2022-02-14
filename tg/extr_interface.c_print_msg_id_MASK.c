
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tgl_message_id_t ;
struct tgl_message {int temp_id; } ;
struct in_ev {int dummy; } ;


 int FUNC_0 (struct in_ev*,char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

void FUNC_2 (struct in_ev *VAR_2, tgl_message_id_t VAR_3, struct tgl_message *VAR_4) {
  if (VAR_0) {
    if (!VAR_1) {
      if (VAR_4) {
        FUNC_0 (VAR_2, "%d", VAR_4->temp_id);
      } else {
        FUNC_0 (VAR_2, "???");
      }
    } else {
      FUNC_0 (VAR_2, "%s", FUNC_1 (VAR_3));
    }
  }
}
