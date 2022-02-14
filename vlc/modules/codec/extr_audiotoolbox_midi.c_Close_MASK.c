
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_5__ {scalar_t__ graph; } ;
typedef TYPE_2__ decoder_sys_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3 (vlc_object_t *VAR_0)
{
    decoder_sys_t *VAR_1 = ((decoder_t *)VAR_0)->p_sys;

    if (VAR_1->graph) {
        FUNC_0(VAR_1->graph);
        FUNC_1(VAR_1->graph);
    }
    FUNC_2(VAR_1);
}
