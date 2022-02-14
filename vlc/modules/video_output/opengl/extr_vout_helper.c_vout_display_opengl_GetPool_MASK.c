
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int texture; int * pool; TYPE_1__* prgm; } ;
typedef TYPE_2__ vout_display_opengl_t ;
typedef int picture_pool_t ;
struct TYPE_9__ {int * (* pf_get_pool ) (TYPE_3__*,unsigned int) ;} ;
typedef TYPE_3__ opengl_tex_converter_t ;
struct TYPE_7__ {TYPE_3__* tc; } ;


 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 unsigned int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (TYPE_3__*,unsigned int) ;

picture_pool_t *FUNC_5(vout_display_opengl_t *VAR_1, unsigned VAR_2)
{
    FUNC_1();

    if (VAR_1->pool)
        return VAR_1->pool;

    opengl_tex_converter_t *VAR_3 = VAR_1->prgm->tc;
    VAR_2 = FUNC_2(VAR_0, VAR_2);

    FUNC_3(VAR_3->pf_get_pool != ((void*)0));
    VAR_1->pool = VAR_3->pf_get_pool(VAR_3, VAR_2);
    if (!VAR_1->pool)
        goto error;
    return VAR_1->pool;

error:
    FUNC_0(VAR_3, VAR_1->texture);
    return ((void*)0);
}
