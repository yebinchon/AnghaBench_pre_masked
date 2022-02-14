
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3d9_pic_context {int s; int picsys; } ;
typedef int picture_context_t ;


 int FUNC_0 (int *) ;
 struct d3d9_pic_context* FUNC_1 (int *) ;
 struct d3d9_pic_context* FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int ) ;

picture_context_t *FUNC_4(picture_context_t *VAR_0)
{
    struct d3d9_pic_context *VAR_1 = FUNC_2(1, sizeof(*VAR_1));
    if (FUNC_3(VAR_1==((void*)0)))
        return ((void*)0);
    *VAR_1 = *FUNC_1(VAR_0);
    FUNC_0(&VAR_1->picsys);
    return &VAR_1->s;
}
