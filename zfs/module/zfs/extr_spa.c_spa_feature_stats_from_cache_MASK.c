
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fi_guid; } ;
typedef TYPE_1__ zfeature_info_t ;
typedef int uint64_t ;
typedef int spa_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*,int *) ;
 int FUNC_2 (int *,int ,int ) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void
FUNC_3(spa_t *VAR_2, nvlist_t *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  zfeature_info_t VAR_5 = VAR_1[VAR_4];
  uint64_t VAR_6;

  if (FUNC_1(VAR_2, &VAR_5, &VAR_6) != 0)
   continue;

  FUNC_0(FUNC_2(VAR_3, VAR_5.fi_guid, VAR_6));
 }
}
