
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_ev {int dummy; } ;
typedef enum tgl_typing_status { ____Placeholder_tgl_typing_status } tgl_typing_status ;


 int FUNC_0 (struct in_ev*,char*) ;
void FUNC_1 (struct in_ev *VAR_0, enum tgl_typing_status VAR_1) {
  switch (VAR_1) {
  case 135:
    FUNC_0 (VAR_0, "doing nothing");
    break;
  case 132:
    FUNC_0 (VAR_0, "typing");
    break;
  case 138:
    FUNC_0 (VAR_0, "deleting typed message");
    break;
  case 133:
    FUNC_0 (VAR_0, "recording video");
    break;
  case 128:
    FUNC_0 (VAR_0, "uploading video");
    break;
  case 134:
    FUNC_0 (VAR_0, "recording audio");
    break;
  case 131:
    FUNC_0 (VAR_0, "uploading audio");
    break;
  case 129:
    FUNC_0 (VAR_0, "uploading photo");
    break;
  case 130:
    FUNC_0 (VAR_0, "uploading document");
    break;
  case 136:
    FUNC_0 (VAR_0, "choosing location");
    break;
  case 137:
    FUNC_0 (VAR_0, "choosing contact");
    break;
  }
}
