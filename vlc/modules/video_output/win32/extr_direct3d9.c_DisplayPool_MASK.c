
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* sys; int fmt; } ;
typedef TYPE_2__ vout_display_t ;
typedef int picture_pool_t ;
struct TYPE_5__ {int * pool; int d3d_dev; } ;


 int * FUNC_0 (int ,int *,int *,unsigned int) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static picture_pool_t *FUNC_2(vout_display_t *VAR_0, unsigned VAR_1)
{
    if ( VAR_0->sys->pool == ((void*)0) )
    {
        VAR_0->sys->pool = FUNC_0(FUNC_1(VAR_0), &VAR_0->sys->d3d_dev,
                                                   &VAR_0->fmt, VAR_1);
    }
    return VAR_0->sys->pool;
}
