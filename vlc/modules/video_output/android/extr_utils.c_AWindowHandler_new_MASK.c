
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int vout_window_t ;
typedef void* jobject ;
typedef int jlong ;
typedef int jint ;
typedef void* jfloatArray ;
typedef int awh_events_t ;
struct TYPE_20__ {int jtransform_mtx_array; int * jtransform_mtx; } ;
struct TYPE_19__ {int cb; } ;
struct TYPE_22__ {int b_has_video_layout_listener; TYPE_2__ stex; int jobj; TYPE_1__ event; int * wnd; int * p_jvm; } ;
struct TYPE_21__ {int (* DeleteGlobalRef ) (TYPE_3__**,int ) ;int (* DeleteLocalRef ) (TYPE_3__**,void*) ;int (* NewGlobalRef ) (TYPE_3__**,void*) ;int (* ExceptionClear ) (TYPE_3__**) ;scalar_t__ (* ExceptionCheck ) (TYPE_3__**) ;void* (* NewFloatArray ) (TYPE_3__**,int) ;} ;
typedef int JavaVM ;
typedef TYPE_3__* JNIEnv ;
typedef TYPE_4__ AWindowHandler ;


 int const VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_3__**,int ,void*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_3 ;
 TYPE_3__** FUNC_4 (int *,int *,char*) ;
 TYPE_4__* FUNC_5 (int,int) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,char*) ;
 int VAR_4 ;
 int FUNC_9 (TYPE_3__**,void*) ;
 void* FUNC_10 (TYPE_3__**,int) ;
 scalar_t__ FUNC_11 (TYPE_3__**) ;
 int FUNC_12 (TYPE_3__**) ;
 int FUNC_13 (TYPE_3__**,void*) ;
 int FUNC_14 (TYPE_3__**,void*) ;
 int FUNC_15 (TYPE_3__**,int ) ;
 int FUNC_16 (TYPE_3__**,int ) ;
 void* FUNC_17 (int *,char*) ;

AWindowHandler *
FUNC_18(vout_window_t *VAR_5, awh_events_t *VAR_6)
{



    AWindowHandler *VAR_7;
    JNIEnv *VAR_8;
    JavaVM *VAR_9 = FUNC_17(VAR_5, "android-jvm");
    jobject VAR_10 = FUNC_17(VAR_5, "drawable-androidwindow");

    if (!VAR_9 || !VAR_10)
    {
        FUNC_8(VAR_5, "libvlc_media_player options not set");
        return ((void*)0);
    }

    VAR_8 = FUNC_4(((void*)0), VAR_9, "AWindowHandler");
    if (!VAR_8)
    {
        FUNC_8(VAR_5, "can't get JNIEnv");
        return ((void*)0);
    }

    if (FUNC_0(VAR_8, FUNC_3(VAR_5), VAR_10) != VAR_3)
    {
        FUNC_8(VAR_5, "InitJNIFields failed");
        return ((void*)0);
    }
    FUNC_7(VAR_5, "InitJNIFields success");

    VAR_7 = FUNC_5(1, sizeof(AWindowHandler));
    if (!VAR_7)
        return ((void*)0);

    VAR_7->p_jvm = VAR_9;
    VAR_7->jobj = (*VAR_8)->NewGlobalRef(VAR_8, VAR_10);

    VAR_7->wnd = VAR_5;
    VAR_7->event.cb = *VAR_6;

    jfloatArray VAR_11 = (*VAR_8)->NewFloatArray(VAR_8, 16);
    if ((*VAR_8)->ExceptionCheck(VAR_8))
    {
        (*VAR_8)->ExceptionClear(VAR_8);
        FUNC_6(VAR_7);
        return ((void*)0);
    }
    VAR_7->stex.jtransform_mtx_array = (*VAR_8)->NewGlobalRef(VAR_8, VAR_11);
    (*VAR_8)->DeleteLocalRef(VAR_8, VAR_11);
    VAR_7->stex.jtransform_mtx = ((void*)0);

    const jint VAR_12 = FUNC_1(VAR_2, VAR_4,
                                   (jlong)(intptr_t)VAR_7);
    if ((VAR_12 & 0x1) == 0)
    {
        FUNC_8(VAR_5, "AWindow already registered");
        (*VAR_8)->DeleteGlobalRef(VAR_8, VAR_7->jobj);
        (*VAR_8)->DeleteGlobalRef(VAR_8, VAR_7->stex.jtransform_mtx_array);
        FUNC_6(VAR_7);
        return ((void*)0);
    }
    FUNC_2(VAR_7);

    VAR_7->b_has_video_layout_listener =
        VAR_12 & 0x2;

    return VAR_7;
}
