
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int vdev_t ;
struct TYPE_7__ {int vs_slow_ios; int ** vsx_agg_histo; int ** vsx_ind_histo; int ** vsx_queue_histo; int ** vsx_disk_histo; int ** vsx_total_histo; int * vsx_pend_queue; int * vsx_active_queue; } ;
typedef TYPE_1__ vdev_stat_t ;
typedef TYPE_1__ vdev_stat_ex_t ;
typedef int uint64_t ;
typedef int nvlist_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int *,int) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (int,int ) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (int *,TYPE_1__*,TYPE_1__*) ;

void
FUNC_9(vdev_t *VAR_46, nvlist_t *VAR_47)
{
 nvlist_t *VAR_48;
 vdev_stat_t *VAR_49;
 vdev_stat_ex_t *VAR_50;

 VAR_49 = FUNC_6(sizeof (*VAR_49), VAR_0);
 VAR_50 = FUNC_6(sizeof (*VAR_50), VAR_0);

 FUNC_8(VAR_46, VAR_49, VAR_50);
 FUNC_3(VAR_47, VAR_29,
     (uint64_t *)VAR_49, sizeof (*VAR_49) / sizeof (uint64_t));






 VAR_48 = FUNC_4();


 FUNC_2(VAR_48, VAR_35,
     VAR_50->vsx_active_queue[VAR_4]);

 FUNC_2(VAR_48, VAR_38,
     VAR_50->vsx_active_queue[VAR_5]);

 FUNC_2(VAR_48, VAR_15,
     VAR_50->vsx_active_queue[VAR_1]);

 FUNC_2(VAR_48, VAR_18,
     VAR_50->vsx_active_queue[VAR_2]);

 FUNC_2(VAR_48, VAR_25,
     VAR_50->vsx_active_queue[VAR_3]);

 FUNC_2(VAR_48, VAR_43,
     VAR_50->vsx_active_queue[VAR_6]);


 FUNC_2(VAR_48, VAR_37,
     VAR_50->vsx_pend_queue[VAR_4]);

 FUNC_2(VAR_48, VAR_40,
     VAR_50->vsx_pend_queue[VAR_5]);

 FUNC_2(VAR_48, VAR_17,
     VAR_50->vsx_pend_queue[VAR_1]);

 FUNC_2(VAR_48, VAR_20,
     VAR_50->vsx_pend_queue[VAR_2]);

 FUNC_2(VAR_48, VAR_27,
     VAR_50->vsx_pend_queue[VAR_3]);

 FUNC_2(VAR_48, VAR_45,
     VAR_50->vsx_pend_queue[VAR_6]);


 FUNC_3(VAR_48, VAR_41,
     VAR_50->vsx_total_histo[VAR_7],
     FUNC_0(VAR_50->vsx_total_histo[VAR_7]));

 FUNC_3(VAR_48, VAR_42,
     VAR_50->vsx_total_histo[VAR_8],
     FUNC_0(VAR_50->vsx_total_histo[VAR_8]));

 FUNC_3(VAR_48, VAR_21,
     VAR_50->vsx_disk_histo[VAR_7],
     FUNC_0(VAR_50->vsx_disk_histo[VAR_7]));

 FUNC_3(VAR_48, VAR_22,
     VAR_50->vsx_disk_histo[VAR_8],
     FUNC_0(VAR_50->vsx_disk_histo[VAR_8]));

 FUNC_3(VAR_48, VAR_36,
     VAR_50->vsx_queue_histo[VAR_4],
     FUNC_0(VAR_50->vsx_queue_histo[VAR_4]));

 FUNC_3(VAR_48, VAR_39,
     VAR_50->vsx_queue_histo[VAR_5],
     FUNC_0(VAR_50->vsx_queue_histo[VAR_5]));

 FUNC_3(VAR_48, VAR_16,
     VAR_50->vsx_queue_histo[VAR_1],
     FUNC_0(VAR_50->vsx_queue_histo[VAR_1]));

 FUNC_3(VAR_48, VAR_19,
     VAR_50->vsx_queue_histo[VAR_2],
     FUNC_0(VAR_50->vsx_queue_histo[VAR_2]));

 FUNC_3(VAR_48, VAR_26,
     VAR_50->vsx_queue_histo[VAR_3],
     FUNC_0(VAR_50->vsx_queue_histo[VAR_3]));

 FUNC_3(VAR_48, VAR_44,
     VAR_50->vsx_queue_histo[VAR_6],
     FUNC_0(VAR_50->vsx_queue_histo[VAR_6]));


 FUNC_3(VAR_48, VAR_33,
     VAR_50->vsx_ind_histo[VAR_4],
     FUNC_0(VAR_50->vsx_ind_histo[VAR_4]));

 FUNC_3(VAR_48, VAR_34,
     VAR_50->vsx_ind_histo[VAR_5],
     FUNC_0(VAR_50->vsx_ind_histo[VAR_5]));

 FUNC_3(VAR_48, VAR_13,
     VAR_50->vsx_ind_histo[VAR_1],
     FUNC_0(VAR_50->vsx_ind_histo[VAR_1]));

 FUNC_3(VAR_48, VAR_14,
     VAR_50->vsx_ind_histo[VAR_2],
     FUNC_0(VAR_50->vsx_ind_histo[VAR_2]));

 FUNC_3(VAR_48, VAR_23,
     VAR_50->vsx_ind_histo[VAR_3],
     FUNC_0(VAR_50->vsx_ind_histo[VAR_3]));

 FUNC_3(VAR_48, VAR_24,
     VAR_50->vsx_ind_histo[VAR_6],
     FUNC_0(VAR_50->vsx_ind_histo[VAR_6]));

 FUNC_3(VAR_48, VAR_31,
     VAR_50->vsx_agg_histo[VAR_4],
     FUNC_0(VAR_50->vsx_agg_histo[VAR_4]));

 FUNC_3(VAR_48, VAR_32,
     VAR_50->vsx_agg_histo[VAR_5],
     FUNC_0(VAR_50->vsx_agg_histo[VAR_5]));

 FUNC_3(VAR_48, VAR_11,
     VAR_50->vsx_agg_histo[VAR_1],
     FUNC_0(VAR_50->vsx_agg_histo[VAR_1]));

 FUNC_3(VAR_48, VAR_12,
     VAR_50->vsx_agg_histo[VAR_2],
     FUNC_0(VAR_50->vsx_agg_histo[VAR_2]));

 FUNC_3(VAR_48, VAR_9,
     VAR_50->vsx_agg_histo[VAR_3],
     FUNC_0(VAR_50->vsx_agg_histo[VAR_3]));

 FUNC_3(VAR_48, VAR_10,
     VAR_50->vsx_agg_histo[VAR_6],
     FUNC_0(VAR_50->vsx_agg_histo[VAR_6]));


 FUNC_2(VAR_48, VAR_28, VAR_49->vs_slow_ios);


 FUNC_1(VAR_47, VAR_30, VAR_48);

 FUNC_5(VAR_48);
 FUNC_7(VAR_49, sizeof (*VAR_49));
 FUNC_7(VAR_50, sizeof (*VAR_50));
}
