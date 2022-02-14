
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum tgl_value_type { ____Placeholder_tgl_value_type } tgl_value_type ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;







 int FUNC_1 (char*) ;

void FUNC_2 (enum tgl_value_type VAR_2, int VAR_3) {
  switch (VAR_2) {
  case 129:
    FUNC_0 (!VAR_3);
    VAR_1 = FUNC_1 ("phone number: ");
    VAR_0 = 0;
    return;
  case 133:
    FUNC_0 (!VAR_3);
    VAR_1 = FUNC_1 ("code ('CALL' for phone code): ");
    VAR_0 = 0;
    return;
  case 128:
    VAR_0 = 0;
    switch (VAR_3) {
    case 0:
      VAR_1 = FUNC_1 ("register (Y/n): ");
      return;
    case 1:
      VAR_1 = FUNC_1 ("first name: ");
      return;
    case 2:
      VAR_1 = FUNC_1 ("last name: ");
      return;
    default:
      FUNC_0 (0);
    }
    return;
  case 130:
    VAR_0 = 1;
    switch (VAR_3) {
    case 0:
      VAR_1 = FUNC_1 ("new password: ");
      return;
    case 1:
      VAR_1 = FUNC_1 ("retype new password: ");
      return;
    default:
      FUNC_0 (0);
    }
    return;
  case 132:
    VAR_0 = 1;
    switch (VAR_3) {
    case 0:
      VAR_1 = FUNC_1 ("old password: ");
      return;
    case 1:
      VAR_1 = FUNC_1 ("new password: ");
      return;
    case 2:
      VAR_1 = FUNC_1 ("retype new password: ");
      return;
    default:
      FUNC_0 (0);
    }
    return;
  case 131:
    VAR_0 = 1;
    FUNC_0 (!VAR_3);
    VAR_1 = FUNC_1 ("password: ");
    return;
  case 134:
    VAR_0 = 0;
    FUNC_0 (!VAR_3);
    VAR_1 = FUNC_1 ("hash: ");
    return;
  default:
    FUNC_0 (0);
  }
}
