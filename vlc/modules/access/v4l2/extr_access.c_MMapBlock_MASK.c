
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_10__ {int i_flags; int i_dts; int i_pts; } ;
typedef TYPE_2__ block_t ;
struct TYPE_11__ {int block_flags; int bufv; int fd; } ;
typedef TYPE_3__ access_sys_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 TYPE_2__* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;

__attribute__((used)) static block_t *FUNC_4 (stream_t *VAR_0, bool *restrict VAR_1)
{
    access_sys_t *VAR_2 = VAR_0->p_sys;

    if (FUNC_0 (VAR_0))
        return ((void*)0);

    block_t *VAR_3 = FUNC_1 (FUNC_2(VAR_0), VAR_2->fd, VAR_2->bufv);
    if( VAR_3 != ((void*)0) )
    {
        VAR_3->i_pts = VAR_3->i_dts = FUNC_3();
        VAR_3->i_flags |= VAR_2->block_flags;
    }
    (void) VAR_1;
    return VAR_3;
}
