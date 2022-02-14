
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_dialog_id ;
struct TYPE_4__ {int (* pf_cancel ) (int ,int *) ;} ;
struct TYPE_5__ {int data; TYPE_1__ cbs; } ;
struct TYPE_6__ {TYPE_2__ dialog; } ;
typedef TYPE_3__ libvlc_instance_t ;
typedef int libvlc_dialog_id ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, vlc_dialog_id *VAR_1)
{
    libvlc_instance_t *VAR_2 = VAR_0;
    VAR_2->dialog.cbs.pf_cancel(VAR_2->dialog.data,
                                     (libvlc_dialog_id *)VAR_1);
}
