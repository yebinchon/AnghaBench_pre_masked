
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_2__ {int pf_control; int pf_demux; } ;
typedef TYPE_1__ demux_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(vlc_object_t *VAR_3)
{
    demux_t *VAR_4 = (demux_t *)VAR_3;

    VAR_4->pf_demux = VAR_1;
    VAR_4->pf_control = VAR_0;
    return VAR_2;
}
