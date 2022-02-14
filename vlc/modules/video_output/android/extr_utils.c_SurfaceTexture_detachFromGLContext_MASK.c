
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * jtransform_mtx; int jtransform_mtx_array; } ;
struct TYPE_11__ {TYPE_1__ stex; int p_jvm; } ;
struct TYPE_10__ {int (* ReleaseFloatArrayElements ) (TYPE_2__**,int ,int *,int ) ;} ;
typedef TYPE_2__* JNIEnv ;
typedef TYPE_3__ AWindowHandler ;


 int FUNC_0 (TYPE_3__*,TYPE_2__**,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 TYPE_2__** FUNC_2 (int *,int ,char*) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__**,int ,int *,int ) ;

void
FUNC_4(AWindowHandler *VAR_4)
{
    JNIEnv *VAR_5 = FUNC_2(((void*)0), VAR_4->p_jvm, "SurfaceTexture");
    if (!VAR_5)
        return;

    FUNC_1(VAR_1, VAR_3);

    FUNC_0(VAR_4, VAR_5, VAR_0);

    if (VAR_4->stex.jtransform_mtx != ((void*)0))
    {
        (*VAR_5)->ReleaseFloatArrayElements(VAR_5, VAR_4->stex.jtransform_mtx_array,
                                            VAR_4->stex.jtransform_mtx,
                                            VAR_2);
        VAR_4->stex.jtransform_mtx = ((void*)0);
    }
}
