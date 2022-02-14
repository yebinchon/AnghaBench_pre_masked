
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int spa_t ;
typedef int minor_t ;
struct TYPE_3__ {char const* ddsta_fsname; char const* ddsta_snapname; char const* ddsta_htag; int ddsta_cleanup_minor; } ;
typedef TYPE_1__ dsl_dataset_snapshot_tmp_arg_t ;
typedef int boolean_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const*,int ,int ,TYPE_1__*,int,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char const*,int **,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (char const*,void**) ;

int
FUNC_6(const char *VAR_5, const char *VAR_6,
    minor_t VAR_7, const char *VAR_8)
{
 dsl_dataset_snapshot_tmp_arg_t VAR_9;
 int VAR_10;
 spa_t *VAR_11;
 boolean_t VAR_12;
 void *VAR_13;

 VAR_9.ddsta_fsname = VAR_5;
 VAR_9.ddsta_snapname = VAR_6;
 VAR_9.ddsta_cleanup_minor = VAR_7;
 VAR_9.ddsta_htag = VAR_8;

 VAR_10 = FUNC_2(VAR_5, &VAR_11, VAR_0);
 if (VAR_10 != 0)
  return (VAR_10);
 VAR_12 = (FUNC_3(VAR_11) < VAR_1);
 FUNC_1(VAR_11, VAR_0);

 if (VAR_12) {
  VAR_10 = FUNC_5(VAR_5, &VAR_13);
  if (VAR_10 != 0)
   return (VAR_10);
 }

 VAR_10 = FUNC_0(VAR_5, VAR_3,
     VAR_4, &VAR_9, 3, VAR_2);

 if (VAR_12)
  FUNC_4(VAR_13);
 return (VAR_10);
}
