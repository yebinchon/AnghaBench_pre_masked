
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int jtransform_mtx_array; } ;
struct TYPE_14__ {TYPE_1__ stex; scalar_t__ p_anw_dl; int jobj; } ;
struct TYPE_13__ {int (* DeleteGlobalRef ) (TYPE_2__**,int ) ;} ;
typedef TYPE_2__* JNIEnv ;
typedef TYPE_3__ AWindowHandler ;


 TYPE_2__** FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__**,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_2__**,int ) ;
 int FUNC_6 (TYPE_2__**,int ) ;
 int VAR_3 ;

void
FUNC_7(AWindowHandler *VAR_4)
{
    JNIEnv *VAR_5 = FUNC_0(VAR_4);

    if (VAR_5)
    {
        FUNC_2(VAR_2, VAR_3);
        FUNC_1(VAR_4, VAR_5, VAR_1);
        FUNC_1(VAR_4, VAR_5, VAR_0);
        (*VAR_5)->DeleteGlobalRef(VAR_5, VAR_4->jobj);
    }

    if (VAR_4->p_anw_dl)
        FUNC_3(VAR_4->p_anw_dl);

    (*VAR_5)->DeleteGlobalRef(VAR_5, VAR_4->stex.jtransform_mtx_array);
    FUNC_4(VAR_4);
}
