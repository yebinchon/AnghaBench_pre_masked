
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_start; int i_order; int i_channel; int b_absolute; } ;
typedef TYPE_1__ subpicture_t ;
struct TYPE_4__ {TYPE_1__* subpic; } ;
typedef TYPE_2__ spu_render_entry_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(const void *VAR_0, const void *VAR_1)
{
    const spu_render_entry_t *VAR_2 = VAR_0;
    const spu_render_entry_t *VAR_3 = VAR_1;
    subpicture_t *VAR_4 = VAR_2->subpic;
    subpicture_t *VAR_5 = VAR_3->subpic;
    int VAR_6;

    VAR_6 = FUNC_0(!VAR_4->b_absolute, !VAR_5->b_absolute);
    if (!VAR_6)
        VAR_6 = FUNC_0(VAR_4->i_start, VAR_5->i_start);
    if (!VAR_6)
        VAR_6 = FUNC_1(VAR_4->i_channel, VAR_5->i_channel);
    if (!VAR_6)
        VAR_6 = FUNC_0(VAR_4->i_order, VAR_5->i_order);
    return VAR_6;
}
