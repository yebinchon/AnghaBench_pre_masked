
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int video; int sub; int audio; } ;
typedef TYPE_1__ es_out_sys_t ;
typedef int es_out_es_props_t ;






__attribute__((used)) static es_out_es_props_t * FUNC_0( es_out_sys_t *VAR_0, int VAR_1 )
{
    switch( VAR_1 )
    {
    case 130:
        return &VAR_0->audio;
    case 129:
        return &VAR_0->sub;
    case 128:
        return &VAR_0->video;
    }
    return ((void*)0);
}
