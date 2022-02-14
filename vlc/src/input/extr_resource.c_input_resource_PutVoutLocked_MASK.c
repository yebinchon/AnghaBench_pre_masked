
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vout_thread_t ;
struct TYPE_3__ {scalar_t__ i_vout; int lock_hold; int ** pp_vout; int p_parent; int * p_vout_free; } ;
typedef TYPE_1__ input_resource_t ;


 int FUNC_0 (scalar_t__,int **,int *,int) ;
 int FUNC_1 (scalar_t__,int **,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(input_resource_t *VAR_0,
                                         vout_thread_t *VAR_1)
{
    FUNC_2(VAR_1 != ((void*)0));
    FUNC_4(&VAR_0->lock_hold);
    FUNC_2( VAR_0->i_vout > 0 );

    if (VAR_0->pp_vout[0] == VAR_1)
    {
        FUNC_5(&VAR_0->lock_hold);

        FUNC_2(VAR_0->p_vout_free == ((void*)0) || VAR_0->p_vout_free == VAR_1);
        FUNC_3(VAR_0->p_parent, "saving a free vout");
        VAR_0->p_vout_free = VAR_1;
    }
    else
    {
        FUNC_3(VAR_0->p_parent, "destroying vout (already one saved or active)");

        {
            int VAR_2;
            FUNC_0(VAR_0->i_vout, VAR_0->pp_vout, VAR_1, VAR_2);
            FUNC_2(VAR_2 >= 0);
        }


        FUNC_1(VAR_0->i_vout, VAR_0->pp_vout, VAR_1);
        FUNC_5(&VAR_0->lock_hold);
        FUNC_6(VAR_1);
    }
}
