
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_11__ {int b_audiotrack_exception; int b_error; } ;
typedef TYPE_2__ aout_sys_t ;
struct TYPE_12__ {int (* ExceptionClear ) (TYPE_3__**) ;int (* ExceptionDescribe ) (TYPE_3__**) ;scalar_t__ (* ExceptionCheck ) (TYPE_3__**) ;} ;
typedef TYPE_3__* JNIEnv ;


 int FUNC_0 (TYPE_1__*,char*,char const*,char const*) ;
 scalar_t__ FUNC_1 (TYPE_3__**) ;
 int FUNC_2 (TYPE_3__**) ;
 int FUNC_3 (TYPE_3__**) ;

__attribute__((used)) static inline bool
FUNC_4( JNIEnv *VAR_0, audio_output_t *VAR_1,
                 const char *VAR_2, const char *VAR_3 )
{
    if( (*VAR_0)->ExceptionCheck( VAR_0 ) )
    {
        aout_sys_t *VAR_4 = VAR_1->sys;

        VAR_4->b_audiotrack_exception = 1;
        VAR_4->b_error = 1;
        (*VAR_0)->ExceptionDescribe( VAR_0 );
        (*VAR_0)->ExceptionClear( VAR_0 );
        FUNC_0( VAR_1, "%s.%s triggered an exception !", VAR_2, VAR_3 );
        return 1;
    } else
        return 0;
}
