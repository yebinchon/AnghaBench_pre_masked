
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ num_pics; scalar_t__ sz; } ;
struct deint_data {TYPE_1__ history; } ;
struct TYPE_14__ {int b_progressive; } ;
typedef TYPE_2__ picture_t ;
struct TYPE_15__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_16__ {struct deint_data* p_data; } ;
typedef TYPE_4__ filter_sys_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct deint_data* const,TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (TYPE_3__*,TYPE_2__*,int ,int ,int ) ;

__attribute__((used)) static picture_t *
FUNC_2(filter_t * VAR_3, picture_t * VAR_4)
{
    filter_sys_t *const VAR_5 = VAR_3->p_sys;
    struct deint_data *const VAR_6 = VAR_5->p_data;

    VAR_4 = FUNC_0(VAR_6, VAR_4);
    if (VAR_6->history.num_pics < VAR_6->history.sz)
        return ((void*)0);

    picture_t *const VAR_7 =
        FUNC_1(VAR_3, VAR_4,
               VAR_0,
               VAR_2,
               VAR_1);

    if (VAR_7)
        VAR_7->b_progressive = 1;

    return VAR_7;
}
