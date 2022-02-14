
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* zv_zso; int zv_hash; int zv_hlink; int zv_name; int zv_state_lock; } ;
typedef TYPE_2__ zvol_state_t ;
struct TYPE_4__ {int zvo_disk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,char const*,int) ;
 int FUNC_9 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_10(zvol_state_t *VAR_1, const char *VAR_2)
{
 int VAR_3 = FUNC_4(VAR_1->zv_zso->zvo_disk);

 FUNC_0(FUNC_2(&VAR_0));
 FUNC_0(FUNC_1(&VAR_1->zv_state_lock));

 FUNC_8(VAR_1->zv_name, VAR_2, sizeof (VAR_1->zv_name));


 VAR_1->zv_hash = FUNC_9(VAR_1->zv_name);
 FUNC_6(&VAR_1->zv_hlink);
 FUNC_5(&VAR_1->zv_hlink, FUNC_3(VAR_1->zv_hash));
 FUNC_7(VAR_1->zv_zso->zvo_disk, !VAR_3);
 FUNC_7(VAR_1->zv_zso->zvo_disk, VAR_3);
}
