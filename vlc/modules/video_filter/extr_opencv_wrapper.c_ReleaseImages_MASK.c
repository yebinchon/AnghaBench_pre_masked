
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_6__ {int * p_to_be_freed; scalar_t__ i_cv_image_size; int ** p_cv_image; } ;
typedef TYPE_2__ filter_sys_t ;


 int VAR_0 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3( filter_t* VAR_1 )
{
    filter_sys_t* VAR_2 = VAR_1->p_sys;

    for( int VAR_3 = 0; VAR_3 < VAR_0; VAR_3++ )
    {
        if (VAR_2->p_cv_image[VAR_3] != ((void*)0))
        {
            FUNC_0(&(VAR_2->p_cv_image[VAR_3]));
            VAR_2->p_cv_image[VAR_3] = ((void*)0);
        }
    }
    VAR_2->i_cv_image_size = 0;


    if (VAR_2->p_to_be_freed)
    {
        FUNC_2( VAR_2->p_to_be_freed );
        VAR_2->p_to_be_freed = ((void*)0);
    }


    FUNC_1( VAR_1, "images released" );

}
