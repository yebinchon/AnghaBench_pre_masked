
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_4__ {char* libzfs_action; int libzfs_error; char* libzfs_desc; scalar_t__ libzfs_printerr; scalar_t__ libzfs_desc_active; } ;
typedef TYPE_1__ libzfs_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 char* FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,char*,...) ;
 char* FUNC_4 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_5 (char*,int,char const*,int ) ;

__attribute__((used)) static void
FUNC_6(libzfs_handle_t *VAR_4, int VAR_5, const char *VAR_6, va_list VAR_7)
{
 (void) FUNC_5(VAR_4->libzfs_action, sizeof (VAR_4->libzfs_action),
     VAR_6, VAR_7);
 VAR_4->libzfs_error = VAR_5;

 if (VAR_4->libzfs_desc_active)
  VAR_4->libzfs_desc_active = 0;
 else
  VAR_4->libzfs_desc[0] = '\0';

 if (VAR_4->libzfs_printerr) {
  if (VAR_5 == VAR_1) {
   (void) FUNC_3(VAR_3, FUNC_1(VAR_2, "internal "
       "error: %s\n"), FUNC_4(VAR_4));
   FUNC_0();
  }

  (void) FUNC_3(VAR_3, "%s: %s\n", VAR_4->libzfs_action,
      FUNC_4(VAR_4));
  if (VAR_5 == VAR_0)
   FUNC_2(1);
 }
}
