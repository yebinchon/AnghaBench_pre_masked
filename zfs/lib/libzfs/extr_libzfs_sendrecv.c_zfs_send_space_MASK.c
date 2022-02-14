
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
typedef int uint64_t ;
typedef int libzfs_handle_t ;
typedef int errbuf ;
typedef enum lzc_send_flags { ____Placeholder_lzc_send_flags } lzc_send_flags ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (int ,char*) ;
 int FUNC_2 (char const*,char const*,int,int *) ;
 int FUNC_3 (char*,int,char*,char const*) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (int *,char const*,int ) ;
 int FUNC_6 (int *,int ,char*) ;
 int FUNC_7 (int *,char*,...) ;
 int FUNC_8 (int *,int,char*) ;

__attribute__((used)) static int
FUNC_9(zfs_handle_t *VAR_5, const char *VAR_6, const char *VAR_7,
    enum lzc_send_flags VAR_8, uint64_t *VAR_9)
{
 libzfs_handle_t *VAR_10 = VAR_5->zfs_hdl;
 int VAR_11;

 FUNC_0(VAR_6 != ((void*)0));
 VAR_11 = FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9);

 if (VAR_11 != 0) {
  char VAR_12[1024];
  (void) FUNC_3(VAR_12, sizeof (VAR_12), FUNC_1(VAR_3,
      "warning: cannot estimate space for '%s'"), VAR_6);

  switch (VAR_11) {
  case 128:
   FUNC_7(VAR_10, FUNC_1(VAR_3,
       "not an earlier snapshot from the same fs"));
   return (FUNC_6(VAR_10, VAR_1, VAR_12));

  case 136:
   if (FUNC_5(VAR_10, VAR_6,
       VAR_4)) {
    FUNC_7(VAR_10, FUNC_1(VAR_3,
        "incremental source (%s) does not exist"),
        VAR_6);
   }
   return (FUNC_6(VAR_10, VAR_2, VAR_12));

  case 141:
  case 139:
  case 137:
  case 135:
  case 134:
  case 133:
  case 132:
  case 131:
  case 130:
  case 140:
  case 129:
  case 138:
   FUNC_7(VAR_10, FUNC_4(VAR_11));
   return (FUNC_6(VAR_10, VAR_0, VAR_12));

  default:
   return (FUNC_8(VAR_10, VAR_11, VAR_12));
  }
 }

 return (0);
}
