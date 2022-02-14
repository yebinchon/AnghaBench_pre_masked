
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* pf_display_error ) (int ,char const*,char const*) ;} ;
struct TYPE_5__ {int data; TYPE_1__ cbs; } ;
struct TYPE_6__ {TYPE_2__ dialog; } ;
typedef TYPE_3__ libvlc_instance_t ;


 int FUNC_0 (int ,char const*,char const*) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, const char *VAR_1, const char *VAR_2)
{
    libvlc_instance_t *VAR_3 = VAR_0;

    VAR_3->dialog.cbs.pf_display_error(VAR_3->dialog.data, VAR_1,
                                            VAR_2);
}
