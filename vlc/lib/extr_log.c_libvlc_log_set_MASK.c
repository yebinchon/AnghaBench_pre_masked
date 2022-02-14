
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int libvlc_log_cb ;
struct TYPE_6__ {void* data; int cb; } ;
struct TYPE_7__ {int p_libvlc_int; TYPE_1__ log; } ;
typedef TYPE_2__ libvlc_instance_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int *,TYPE_2__*) ;

void FUNC_2 (libvlc_instance_t *VAR_1, libvlc_log_cb VAR_2, void *VAR_3)
{
    FUNC_0 (VAR_1);
    VAR_1->log.cb = VAR_2;
    VAR_1->log.data = VAR_3;
    FUNC_1(VAR_1->p_libvlc_int, &VAR_0, VAR_1);
}
