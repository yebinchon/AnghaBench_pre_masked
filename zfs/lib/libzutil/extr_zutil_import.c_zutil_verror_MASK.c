
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_3__ {char* lpc_desc; scalar_t__ lpc_printerr; scalar_t__ lpc_desc_active; } ;
typedef TYPE_1__ libpc_handle_t ;
typedef int action ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,char*,char const*) ;
 int VAR_1 ;
 int FUNC_1 (char*,int,char const*,int ) ;

__attribute__((used)) static void
FUNC_2(libpc_handle_t *VAR_2, const char *VAR_3, const char *VAR_4,
    va_list VAR_5)
{
 char VAR_6[1024];

 (void) FUNC_1(VAR_6, sizeof (VAR_6), VAR_4, VAR_5);

 if (VAR_2->lpc_desc_active)
  VAR_2->lpc_desc_active = VAR_0;
 else
  VAR_2->lpc_desc[0] = '\0';

 if (VAR_2->lpc_printerr) {
  if (VAR_2->lpc_desc[0] != '\0')
   VAR_3 = VAR_2->lpc_desc;

  (void) FUNC_0(VAR_1, "%s: %s\n", VAR_6, VAR_3);
 }
}
