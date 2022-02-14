
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* p_sys; } ;
typedef TYPE_1__ stream_t ;
typedef scalar_t__ ssize_t ;
struct TYPE_11__ {scalar_t__ i_buffer; int p_buffer; } ;
typedef TYPE_2__ block_t ;
struct TYPE_12__ {int fd; int blocksize; } ;
typedef TYPE_3__ access_sys_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*,char*,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ,scalar_t__) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static block_t *FUNC_7 (stream_t *VAR_1, bool *restrict VAR_2)
{
    access_sys_t *VAR_3 = VAR_1->p_sys;

    if (FUNC_0 (VAR_1))
        return ((void*)0);

    block_t *VAR_4 = FUNC_1 (VAR_3->blocksize);
    if (FUNC_4(VAR_4 == ((void*)0)))
        return ((void*)0);

    ssize_t VAR_5 = FUNC_5 (VAR_3->fd, VAR_4->p_buffer, VAR_4->i_buffer);
    if (VAR_5 < 0)
    {
        FUNC_2 (VAR_4);
        FUNC_3 (VAR_1, "cannot read buffer: %s", FUNC_6(VAR_0));
        *VAR_2 = 1;
        return ((void*)0);
    }

    VAR_4->i_buffer = VAR_5;
    return VAR_4;
}
