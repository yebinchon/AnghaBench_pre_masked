
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {float* jtransform_mtx; int jtransform_mtx_array; } ;
struct TYPE_10__ {TYPE_1__ stex; int p_jvm; } ;
struct TYPE_9__ {float* (* GetFloatArrayElements ) (TYPE_2__**,int ,int *) ;int (* ReleaseFloatArrayElements ) (TYPE_2__**,int ,float*,int ) ;} ;
typedef TYPE_2__* JNIEnv ;
typedef TYPE_3__ AWindowHandler ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__** FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (TYPE_2__**,int ,float*,int ) ;
 float* FUNC_3 (TYPE_2__**,int ,int *) ;
 int VAR_4 ;

int
FUNC_4(AWindowHandler *VAR_5,
                                     const float **VAR_6)
{
    JNIEnv *VAR_7 = FUNC_1(((void*)0), VAR_5->p_jvm, "SurfaceTexture");
    if (!VAR_7)
        return VAR_2;

    if (VAR_5->stex.jtransform_mtx != ((void*)0))
        (*VAR_7)->ReleaseFloatArrayElements(VAR_7, VAR_5->stex.jtransform_mtx_array,
                                            VAR_5->stex.jtransform_mtx,
                                            VAR_1);

    bool VAR_8 = FUNC_0(VAR_0, VAR_4,
                            VAR_5->stex.jtransform_mtx_array);
    if (VAR_8)
    {
        VAR_5->stex.jtransform_mtx = (*VAR_7)->GetFloatArrayElements(VAR_7,
                                            VAR_5->stex.jtransform_mtx_array, ((void*)0));
        *VAR_6 = VAR_5->stex.jtransform_mtx;
        return VAR_3;
    }
    else
    {
        VAR_5->stex.jtransform_mtx = ((void*)0);
        return VAR_2;
    }
}
