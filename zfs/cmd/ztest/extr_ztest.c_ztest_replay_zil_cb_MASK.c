
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ztest_ds_t ;
struct TYPE_4__ {scalar_t__ zl_parse_lr_count; scalar_t__ zl_replaying_seq; scalar_t__ zl_parse_blk_count; } ;
typedef TYPE_1__ zilog_t ;
typedef int u_longlong_t ;
typedef int objset_t ;
struct TYPE_5__ {int zo_verbose; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (char*,char const*,int ,int ,int ) ;
 int * FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (char const*,int ,int ,int ,int ,int **) ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int *) ;

__attribute__((used)) static int
FUNC_10(const char *VAR_6, void *VAR_7)
{
 objset_t *VAR_8;
 ztest_ds_t *VAR_9;

 FUNC_0(FUNC_7(VAR_6, VAR_1, VAR_0,
     VAR_0, VAR_2, &VAR_8));

 VAR_9 = FUNC_4(sizeof (ztest_ds_t), VAR_3);

 FUNC_9(VAR_9, ((void*)0), VAR_8);
 FUNC_6(VAR_8, VAR_9, VAR_5);
 FUNC_8(VAR_9);

 if (FUNC_2(VAR_8)->zl_parse_lr_count != 0 &&
     VAR_4.zo_verbose >= 6) {
  zilog_t *VAR_10 = FUNC_2(VAR_8);

  (void) FUNC_3("%s replay %llu blocks, %llu records, seq %llu\n",
      VAR_6,
      (u_longlong_t)VAR_10->zl_parse_blk_count,
      (u_longlong_t)VAR_10->zl_parse_lr_count,
      (u_longlong_t)VAR_10->zl_replaying_seq);
 }

 FUNC_5(VAR_9, sizeof (ztest_ds_t));

 FUNC_1(VAR_8, VAR_0, VAR_2);
 return (0);
}
