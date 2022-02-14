
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int jobject ;
typedef int jlong ;
typedef int jint ;
struct TYPE_5__ {int (* on_new_window_size ) (int ,int ,int ) ;} ;
struct TYPE_6__ {TYPE_1__ cb; } ;
struct TYPE_7__ {int wnd; TYPE_2__ event; } ;
typedef int JNIEnv ;
typedef TYPE_3__ AWindowHandler ;


 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(JNIEnv* VAR_0, jobject VAR_1, jlong VAR_2,
                                 jint VAR_3, jint VAR_4)
{
    (void) VAR_0; (void) VAR_1;
    AWindowHandler *VAR_5 = FUNC_0(VAR_2);

    if (VAR_3 >= 0 && VAR_4 >= 0)
        VAR_5->event.cb.on_new_window_size(VAR_5->wnd, VAR_3, VAR_4);
}
