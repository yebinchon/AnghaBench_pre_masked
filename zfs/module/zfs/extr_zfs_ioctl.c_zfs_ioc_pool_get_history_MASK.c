
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zc_iflags; int zc_history_len; scalar_t__ zc_history; int zc_history_offset; int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int uint64_t ;
typedef int spa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*,void*,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int *,char*) ;
 int FUNC_4 (int ,int **,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 char* FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,int ) ;

__attribute__((used)) static int
FUNC_8(zfs_cmd_t *VAR_5)
{
 spa_t *VAR_6;
 char *VAR_7;
 uint64_t VAR_8;
 int VAR_9;

 if ((VAR_8 = VAR_5->zc_history_len) == 0)
  return (FUNC_0(VAR_0));

 if ((VAR_9 = FUNC_4(VAR_5->zc_name, &VAR_6, VAR_2)) != 0)
  return (VAR_9);

 if (FUNC_5(VAR_6) < VAR_4) {
  FUNC_2(VAR_6, VAR_2);
  return (FUNC_0(VAR_1));
 }

 VAR_7 = FUNC_6(VAR_8, VAR_3);
 if ((VAR_9 = FUNC_3(VAR_6, &VAR_5->zc_history_offset,
     &VAR_5->zc_history_len, VAR_7)) == 0) {
  VAR_9 = FUNC_1(VAR_7,
      (void *)(uintptr_t)VAR_5->zc_history,
      VAR_5->zc_history_len, VAR_5->zc_iflags);
 }

 FUNC_2(VAR_6, VAR_2);
 FUNC_7(VAR_7, VAR_8);
 return (VAR_9);
}
