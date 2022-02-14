
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int (* zfs_iter_f ) (TYPE_1__*,void*) ;
struct TYPE_10__ {int zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
struct TYPE_11__ {int (* ssa_func ) (TYPE_1__*,void*) ;char* ssa_first; char* ssa_last; int ssa_seenlast; int ssa_seenfirst; void* ssa_arg; int member_0; } ;
typedef TYPE_3__ snapspec_arg_t ;
typedef int snapname ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (int ,char*) ;
 int VAR_4 ;
 int FUNC_2 (char*,int,char*,char*,char*) ;
 char* FUNC_3 (char*,char) ;
 char* FUNC_4 (char**,char*) ;
 int FUNC_5 (int ,char*,int ) ;
 char* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ,TYPE_3__*,int ,int ) ;
 char* FUNC_8 (int ,char const*) ;

int
FUNC_9(zfs_handle_t *VAR_5, const char *VAR_6,
    zfs_iter_f VAR_7, void *VAR_8)
{
 char *VAR_9, *VAR_10, *VAR_11;
 int VAR_12 = 0;
 int VAR_13 = 0;

 VAR_9 = FUNC_8(VAR_5->zfs_hdl, VAR_6);
 VAR_11 = VAR_9;

 while ((VAR_10 = FUNC_4(&VAR_11, ",")) != ((void*)0)) {
  char *VAR_14 = FUNC_3(VAR_10, '%');
  if (VAR_14 != ((void*)0)) {
   snapspec_arg_t VAR_15 = { 0 };
   VAR_15.ssa_func = VAR_7;
   VAR_15.ssa_arg = VAR_8;

   if (VAR_14 == VAR_10)
    VAR_15.ssa_seenfirst = VAR_0;
   else
    VAR_15.ssa_first = VAR_10;
   *VAR_14 = '\0';
   VAR_15.ssa_last = VAR_14 + 1;





   if (VAR_15.ssa_last[0] != '\0') {
    char VAR_16[VAR_2];
    (void) FUNC_2(VAR_16, sizeof (VAR_16),
        "%s@%s", FUNC_6(VAR_5),
        VAR_15.ssa_last);
    if (!FUNC_5(VAR_5->zfs_hdl,
        VAR_16, VAR_3)) {
     VAR_13 = VAR_1;
     continue;
    }
   }

   VAR_12 = FUNC_7(VAR_5,
       VAR_4, &VAR_15, 0, 0);
   if (VAR_13 == 0)
    VAR_13 = VAR_12;
   if (VAR_13 == 0 && (!VAR_15.ssa_seenfirst ||
       (VAR_15.ssa_last[0] != '\0' && !VAR_15.ssa_seenlast))) {
    VAR_13 = VAR_1;
   }
  } else {
   char VAR_17[VAR_2];
   zfs_handle_t *VAR_18;
   (void) FUNC_2(VAR_17, sizeof (VAR_17), "%s@%s",
       FUNC_6(VAR_5), VAR_10);
   VAR_18 = FUNC_1(VAR_5->zfs_hdl,
       VAR_17);
   if (VAR_18 == ((void*)0)) {
    VAR_13 = VAR_1;
    continue;
   }
   VAR_12 = VAR_7(VAR_18, VAR_8);
   if (VAR_13 == 0)
    VAR_13 = VAR_12;
  }
 }

 FUNC_0(VAR_9);
 return (VAR_13);
}
