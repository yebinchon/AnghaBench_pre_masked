
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_pics; int sz; int ** pp_cur_pic; int ** pp_pics; } ;
struct deint_data {TYPE_1__ history; } ;
typedef int picture_t ;


 int FUNC_0 (int **,int **,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static picture_t *
FUNC_2(struct deint_data * VAR_0, picture_t * VAR_1)
{
    if (VAR_0->history.num_pics == VAR_0->history.sz)
    {
        FUNC_1(*VAR_0->history.pp_pics);
        FUNC_0(VAR_0->history.pp_pics, VAR_0->history.pp_pics + 1,
                --VAR_0->history.num_pics * sizeof(picture_t *));
    }
    VAR_0->history.pp_pics[VAR_0->history.num_pics++] = VAR_1;

    return *VAR_0->history.pp_cur_pic;
}
