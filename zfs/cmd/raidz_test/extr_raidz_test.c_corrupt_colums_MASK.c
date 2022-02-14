
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* rm_col; } ;
typedef TYPE_1__ raidz_map_t ;
struct TYPE_5__ {int rc_size; int rc_abd; } ;
typedef TYPE_2__ raidz_col_t ;


 int FUNC_0 (int ,int ,int ,int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(raidz_map_t *VAR_1, const int *VAR_2, const int VAR_3)
{
 int VAR_4;
 raidz_col_t *VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_5 = &VAR_1->rm_col[VAR_2[VAR_4]];
  FUNC_0(VAR_5->rc_abd, 0, VAR_5->rc_size, VAR_0, ((void*)0));
 }
}
