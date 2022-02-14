
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dk_gpt {TYPE_1__* efi_parts; } ;
typedef int nvlist_t ;
typedef int diskname ;
typedef int diskaddr_t ;
struct TYPE_2__ {int p_start; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct dk_gpt**) ;
 int FUNC_2 (struct dk_gpt*) ;
 scalar_t__ FUNC_3 (int *,int ,char**) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,int,char*,char*,int ) ;
 int FUNC_6 (char*,char) ;

__attribute__((used)) static int
FUNC_7(nvlist_t *VAR_5, diskaddr_t *VAR_6)
{
 char *VAR_7;
 int VAR_8;
 char VAR_9[VAR_1];
 int VAR_10 = -1;

 if (FUNC_3(VAR_5, VAR_4, &VAR_7) != 0)
  return (VAR_10);

 (void) FUNC_5(VAR_9, sizeof (VAR_9), "%s%s", VAR_0,
     FUNC_6(VAR_7, '/'));
 if ((VAR_8 = FUNC_4(VAR_9, VAR_3|VAR_2)) >= 0) {
  struct dk_gpt *VAR_11;

  if ((VAR_10 = FUNC_1(VAR_8, &VAR_11)) >= 0) {
   if (VAR_6 != ((void*)0))
    *VAR_6 = VAR_11->efi_parts[0].p_start;
   FUNC_2(VAR_11);
  }
  (void) FUNC_0(VAR_8);
 }
 return (VAR_10);
}
