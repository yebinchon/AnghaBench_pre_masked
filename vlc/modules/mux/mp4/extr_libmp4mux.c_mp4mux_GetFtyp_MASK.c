
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int i_size; int * p_elems; } ;
struct TYPE_14__ {TYPE_1__ extra; int i_minor; int i_major; } ;
struct TYPE_15__ {TYPE_2__ brands; } ;
typedef TYPE_3__ mp4mux_handle_t ;
struct TYPE_16__ {int b; } ;
typedef TYPE_4__ bo_t ;


 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_4__*,int *) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 TYPE_4__* FUNC_4 (char*) ;
 int FUNC_5 (TYPE_4__*) ;

bo_t *FUNC_6(const mp4mux_handle_t *VAR_0)
{
    bo_t *VAR_1 = FUNC_4("ftyp");
    if(VAR_1)
    {
        FUNC_1(VAR_1, &VAR_0->brands.i_major);
        FUNC_0 (VAR_1, VAR_0->brands.i_minor);
        for(int VAR_2=0; VAR_2<VAR_0->brands.extra.i_size; VAR_2++)
            FUNC_1(VAR_1, &VAR_0->brands.extra.p_elems[VAR_2]);
        if(!VAR_1->b)
        {
            FUNC_5(VAR_1);
            return ((void*)0);
        }
        FUNC_3(VAR_1, FUNC_2(VAR_1));
    }
    return VAR_1;
}
