
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vout_thread_t ;
struct TYPE_4__ {scalar_t__ b_bool; } ;
typedef TYPE_1__ vlc_value_t ;
typedef int vlc_object_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3( vlc_object_t *VAR_2, char const *VAR_3,
                              vlc_value_t VAR_4, vlc_value_t VAR_5, void *VAR_6 )
{
    vout_thread_t *VAR_7 = (vout_thread_t *)VAR_2;

    if( VAR_5.b_bool )
    {
        FUNC_2(VAR_7, VAR_1);
        FUNC_1(VAR_7, ((void*)0));
    }
    else
    {
        FUNC_0( VAR_2, "fullscreen" );
        FUNC_0( VAR_2, "video-on-top" );
    }
    (void) VAR_3; (void) VAR_4; (void) VAR_6;
    return VAR_0;
}
