
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vdev_t ;
struct TYPE_4__ {scalar_t__** vsx_agg_histo; scalar_t__** vsx_ind_histo; scalar_t__* vsx_pend_queue; scalar_t__* vsx_active_queue; scalar_t__** vsx_queue_histo; scalar_t__** vsx_total_histo; scalar_t__** vsx_disk_histo; } ;
typedef TYPE_1__ vdev_stat_ex_t ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(vdev_t *VAR_2, vdev_stat_ex_t *VAR_3, vdev_stat_ex_t *VAR_4)
{
 int VAR_5, VAR_6;
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3->vsx_disk_histo[0]); VAR_6++)
   VAR_3->vsx_disk_histo[VAR_5][VAR_6] += VAR_4->vsx_disk_histo[VAR_5][VAR_6];

  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3->vsx_total_histo[0]); VAR_6++) {
   VAR_3->vsx_total_histo[VAR_5][VAR_6] +=
       VAR_4->vsx_total_histo[VAR_5][VAR_6];
  }
 }

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3->vsx_queue_histo[0]); VAR_6++) {
   VAR_3->vsx_queue_histo[VAR_5][VAR_6] +=
       VAR_4->vsx_queue_histo[VAR_5][VAR_6];
  }
  VAR_3->vsx_active_queue[VAR_5] += VAR_4->vsx_active_queue[VAR_5];
  VAR_3->vsx_pend_queue[VAR_5] += VAR_4->vsx_pend_queue[VAR_5];

  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3->vsx_ind_histo[0]); VAR_6++)
   VAR_3->vsx_ind_histo[VAR_5][VAR_6] += VAR_4->vsx_ind_histo[VAR_5][VAR_6];

  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3->vsx_agg_histo[0]); VAR_6++)
   VAR_3->vsx_agg_histo[VAR_5][VAR_6] += VAR_4->vsx_agg_histo[VAR_5][VAR_6];
 }

}
