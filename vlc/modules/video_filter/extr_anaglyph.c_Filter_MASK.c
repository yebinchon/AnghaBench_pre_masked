
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int i_chroma; } ;
struct TYPE_18__ {TYPE_1__ format; } ;
typedef TYPE_2__ picture_t ;
struct TYPE_19__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_20__ {int right; int left; } ;
typedef TYPE_4__ filter_sys_t ;


 TYPE_2__* FUNC_0 (TYPE_2__*,TYPE_2__*) ;



 int FUNC_1 (TYPE_2__*,TYPE_2__*,int ,int ) ;
 TYPE_2__* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,char*,char*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static picture_t *FUNC_5(filter_t *VAR_0, picture_t *VAR_1)
{
    filter_sys_t *VAR_2 = VAR_0->p_sys;

    if (!VAR_1)
        return ((void*)0);

    picture_t *VAR_3 = FUNC_2(VAR_0);
    if (!VAR_3)
    {
        FUNC_4(VAR_1);
        return ((void*)0);
    }

    switch (VAR_1->format.i_chroma)
    {
        case 130:
        case 129:
        case 128:
            FUNC_1(VAR_1, VAR_3,
                                        VAR_2->left, VAR_2->right);
            break;

        default:
            FUNC_3(VAR_0, "Unsupported input chroma (%4.4s)",
                     (char*)&(VAR_1->format.i_chroma));
            FUNC_4(VAR_1);
            return ((void*)0);
    }

    return FUNC_0(VAR_3, VAR_1);
}
