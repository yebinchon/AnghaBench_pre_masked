
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_2__ {int pf_write; } ;
typedef TYPE_1__ sout_access_out_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0( vlc_object_t *VAR_2 )
{
    sout_access_out_t *VAR_3 = (sout_access_out_t*)VAR_2;

    VAR_3->pf_write = VAR_1;

    return VAR_0;
}
