
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_10__ {int pf_control; int pf_seek; int pf_read; TYPE_3__* p_sys; TYPE_1__* s; } ;
typedef TYPE_2__ stream_t ;
struct TYPE_11__ {int cache; } ;
typedef TYPE_3__ stream_sys_t ;
struct TYPE_9__ {int * pf_block; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(vlc_object_t *VAR_6)
{
    stream_t *VAR_7 = (stream_t *)VAR_6;

    if (VAR_7->s->pf_block == ((void*)0))
        return VAR_3;

    stream_sys_t *VAR_8 = FUNC_4(sizeof (*VAR_8));
    if (FUNC_7(VAR_8 == ((void*)0)))
        return VAR_4;

    FUNC_5(VAR_7, "Using block method for AStream*");


    FUNC_1( &VAR_8->cache );

    VAR_7->p_sys = VAR_8;

    FUNC_0(VAR_7);

    if (FUNC_2( &VAR_8->cache ) <= 0)
    {
        FUNC_6(VAR_7, "cannot pre fill buffer");
        FUNC_3(VAR_8);
        return VAR_3;
    }

    VAR_7->pf_read = VAR_1;
    VAR_7->pf_seek = VAR_2;
    VAR_7->pf_control = VAR_0;
    return VAR_5;
}
