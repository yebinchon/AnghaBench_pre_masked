
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* p_sys; } ;
typedef TYPE_1__ stream_t ;
typedef scalar_t__ ssize_t ;
struct TYPE_9__ {scalar_t__ i_buffer; int p_buffer; } ;
typedef TYPE_2__ block_t ;
struct TYPE_10__ {int dev; } ;
typedef TYPE_3__ access_sys_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static block_t *FUNC_4 (stream_t *VAR_1, bool *restrict VAR_2)
{

    block_t *VAR_3 = FUNC_0 ((20*188));
    if (FUNC_3(VAR_3 == ((void*)0)))
        return ((void*)0);

    access_sys_t *VAR_4 = VAR_1->p_sys;
    ssize_t VAR_5 = FUNC_2 (VAR_4->dev, VAR_3->p_buffer, (20*188), -1);

    if (VAR_5 <= 0)
    {
        if (VAR_5 == 0)
            *VAR_2 = 1;
        FUNC_1 (VAR_3);
        return ((void*)0);
    }

    VAR_3->i_buffer = VAR_5;

    return VAR_3;
}
