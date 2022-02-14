
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct dmu_send_params {TYPE_1__* to_ds; int off; int outfd; } ;
struct TYPE_7__ {int dss_proc; int dss_off; int dss_outfd; } ;
typedef TYPE_2__ dmu_sendstatus_t ;
struct TYPE_6__ {int ds_sendstream_lock; int ds_sendstreams; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static dmu_sendstatus_t *
FUNC_4(struct dmu_send_params *VAR_2)
{
 dmu_sendstatus_t *VAR_3 = FUNC_0(sizeof (*VAR_3), VAR_0);
 VAR_3->dss_outfd = VAR_2->outfd;
 VAR_3->dss_off = VAR_2->off;
 VAR_3->dss_proc = VAR_1;
 FUNC_2(&VAR_2->to_ds->ds_sendstream_lock);
 FUNC_1(&VAR_2->to_ds->ds_sendstreams, VAR_3);
 FUNC_3(&VAR_2->to_ds->ds_sendstream_lock);
 return (VAR_3);
}
