
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int i_media; TYPE_3__** media; } ;
typedef TYPE_2__ vlm_t ;
struct TYPE_6__ {scalar_t__ id; } ;
struct TYPE_8__ {TYPE_1__ cfg; } ;
typedef TYPE_3__ vlm_media_sys_t ;
typedef scalar_t__ int64_t ;



__attribute__((used)) static vlm_media_sys_t *FUNC_0( vlm_t *VAR_0, int64_t VAR_1 )
{
    for( int VAR_2 = 0; VAR_2 < VAR_0->i_media; VAR_2++ )
    {
        if( VAR_0->media[VAR_2]->cfg.id == VAR_1 )
            return VAR_0->media[VAR_2];
    }
    return ((void*)0);
}
