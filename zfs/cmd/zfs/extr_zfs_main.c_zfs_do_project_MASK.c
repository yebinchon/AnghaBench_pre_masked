
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ zpc_expected_projid; int zpc_op; void* zpc_dironly; void* zpc_keep_projid; void* zpc_newline; void* zpc_recursive; void* zpc_set_flag; } ;
typedef TYPE_1__ zfs_project_control_t ;


 int FUNC_0 (int ) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;


 int VAR_4 ;


 int VAR_5 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int,char**,char*) ;
 char* FUNC_3 (char*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_4 (int ,char**,int ) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (char*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_7(int VAR_10, char **VAR_11)
{
 zfs_project_control_t VAR_12 = {
  .zpc_expected_projid = VAR_3,
  .zpc_op = VAR_4,
  .zpc_dironly = VAR_0,
  .zpc_keep_projid = VAR_0,
  .zpc_newline = VAR_1,
  .zpc_recursive = VAR_0,
  .zpc_set_flag = VAR_0,
 };
 int VAR_13 = 0, VAR_14;

 if (VAR_10 < 2)
  FUNC_5(VAR_0);

 while ((VAR_14 = FUNC_2(VAR_10, VAR_11, "0Ccdkp:rs")) != -1) {
  switch (VAR_14) {
  case '0':
   VAR_12.zpc_newline = VAR_0;
   break;
  case 'C':
   if (VAR_12.zpc_op != VAR_4) {
    (void) FUNC_1(VAR_9, "%s", FUNC_3("cannot "
        "specify '-C' '-c' '-s' together\n"));
    FUNC_5(VAR_0);
   }

   VAR_12.zpc_op = 130;
   break;
  case 'c':
   if (VAR_12.zpc_op != VAR_4) {
    (void) FUNC_1(VAR_9, "%s", FUNC_3("cannot "
        "specify '-C' '-c' '-s' together\n"));
    FUNC_5(VAR_0);
   }

   VAR_12.zpc_op = 131;
   break;
  case 'd':
   VAR_12.zpc_dironly = VAR_1;

   VAR_12.zpc_recursive = VAR_0;
   break;
  case 'k':
   VAR_12.zpc_keep_projid = VAR_1;
   break;
  case 'p': {
   char *VAR_15;

   VAR_5 = 0;
   VAR_12.zpc_expected_projid = FUNC_4(VAR_6, &VAR_15, 0);
   if (VAR_5 != 0 || *VAR_15 != '\0') {
    (void) FUNC_1(VAR_9,
        FUNC_3("project ID must be less than "
        "%u\n"), VAR_2);
    FUNC_5(VAR_0);
   }
   if (VAR_12.zpc_expected_projid >= VAR_2) {
    (void) FUNC_1(VAR_9,
        "%s", FUNC_3("invalid project ID\n"));
    FUNC_5(VAR_0);
   }
   break;
  }
  case 'r':
   VAR_12.zpc_recursive = VAR_1;

   VAR_12.zpc_dironly = VAR_0;
   break;
  case 's':
   if (VAR_12.zpc_op != VAR_4) {
    (void) FUNC_1(VAR_9, "%s", FUNC_3("cannot "
        "specify '-C' '-c' '-s' together\n"));
    FUNC_5(VAR_0);
   }

   VAR_12.zpc_set_flag = VAR_1;
   VAR_12.zpc_op = 128;
   break;
  default:
   (void) FUNC_1(VAR_9, FUNC_3("invalid option '%c'\n"),
       VAR_8);
   FUNC_5(VAR_0);
  }
 }

 if (VAR_12.zpc_op == VAR_4) {
  if (VAR_12.zpc_expected_projid != VAR_3)
   VAR_12.zpc_op = 128;
  else
   VAR_12.zpc_op = 129;
 }

 switch (VAR_12.zpc_op) {
 case 129:
  if (VAR_12.zpc_keep_projid) {
   (void) FUNC_1(VAR_9,
       "%s", FUNC_3("'-k' is only valid together with '-C'\n"));
   FUNC_5(VAR_0);
  }
  if (!VAR_12.zpc_newline) {
   (void) FUNC_1(VAR_9,
       "%s", FUNC_3("'-0' is only valid together with '-c'\n"));
   FUNC_5(VAR_0);
  }
  break;
 case 131:
  if (VAR_12.zpc_keep_projid) {
   (void) FUNC_1(VAR_9,
       "%s", FUNC_3("'-k' is only valid together with '-C'\n"));
   FUNC_5(VAR_0);
  }
  break;
 case 130:
  if (VAR_12.zpc_dironly) {
   (void) FUNC_1(VAR_9,
       "%s", FUNC_3("'-d' is useless together with '-C'\n"));
   FUNC_5(VAR_0);
  }
  if (!VAR_12.zpc_newline) {
   (void) FUNC_1(VAR_9,
       "%s", FUNC_3("'-0' is only valid together with '-c'\n"));
   FUNC_5(VAR_0);
  }
  if (VAR_12.zpc_expected_projid != VAR_3) {
   (void) FUNC_1(VAR_9,
       "%s", FUNC_3("'-p' is useless together with '-C'\n"));
   FUNC_5(VAR_0);
  }
  break;
 case 128:
  if (VAR_12.zpc_dironly) {
   (void) FUNC_1(VAR_9,
       "%s", FUNC_3("'-d' is useless for set project ID and/or "
       "inherit flag\n"));
   FUNC_5(VAR_0);
  }
  if (VAR_12.zpc_keep_projid) {
   (void) FUNC_1(VAR_9,
       "%s", FUNC_3("'-k' is only valid together with '-C'\n"));
   FUNC_5(VAR_0);
  }
  if (!VAR_12.zpc_newline) {
   (void) FUNC_1(VAR_9,
       "%s", FUNC_3("'-0' is only valid together with '-c'\n"));
   FUNC_5(VAR_0);
  }
  break;
 default:
  FUNC_0(0);
  break;
 }

 VAR_11 += VAR_7;
 VAR_10 -= VAR_7;
 if (VAR_10 == 0) {
  (void) FUNC_1(VAR_9,
      "%s", FUNC_3("missing file or directory target(s)\n"));
  FUNC_5(VAR_0);
 }

 for (int VAR_16 = 0; VAR_16 < VAR_10; VAR_16++) {
  int VAR_17;

  VAR_17 = FUNC_6(VAR_11[VAR_16], &VAR_12);
  if (VAR_17 && !VAR_13)
   VAR_13 = VAR_17;
 }

 return (VAR_13);
}
