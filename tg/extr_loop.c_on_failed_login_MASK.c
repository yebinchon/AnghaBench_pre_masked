
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tgl_state {int error; int error_code; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;

void FUNC_2 (struct tgl_state *VAR_0) {
  FUNC_1 ("login failed\n");
  FUNC_1 ("login error #%d: %s\n", VAR_0->error_code, VAR_0->error);
  FUNC_1 ("you can relogin by deleting auth file or running telegram-cli with '-q' flag\n");
  FUNC_0 (2);
}
