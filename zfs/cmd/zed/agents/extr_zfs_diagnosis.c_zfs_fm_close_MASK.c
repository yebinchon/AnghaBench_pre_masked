
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* zc_serd_checksum; char* zc_serd_io; scalar_t__ zc_has_remove_timer; } ;
struct TYPE_8__ {int zc_node; int zc_remove_timer; TYPE_1__ zc_data; } ;
typedef TYPE_2__ zfs_case_t ;
typedef int fmd_hdl_t ;
typedef int fmd_case_t ;


 TYPE_2__* FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,TYPE_2__*,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_2__*,int *,int ) ;
 int FUNC_5 (int ,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_6(fmd_hdl_t *VAR_2, fmd_case_t *VAR_3)
{
 zfs_case_t *VAR_4 = FUNC_0(VAR_2, VAR_3);

 if (VAR_4->zc_data.zc_serd_checksum[0] != '\0')
  FUNC_2(VAR_2, VAR_4->zc_data.zc_serd_checksum);
 if (VAR_4->zc_data.zc_serd_io[0] != '\0')
  FUNC_2(VAR_2, VAR_4->zc_data.zc_serd_io);
 if (VAR_4->zc_data.zc_has_remove_timer)
  FUNC_3(VAR_2, VAR_4->zc_remove_timer);

 FUNC_5(VAR_1, VAR_4);
 FUNC_4(VAR_4, &VAR_4->zc_node, VAR_0);
 FUNC_1(VAR_2, VAR_4, sizeof (zfs_case_t));
}
