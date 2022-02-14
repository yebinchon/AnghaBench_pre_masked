
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int input_thread_t ;
struct TYPE_4__ {TYPE_1__* master; } ;
struct TYPE_3__ {float f_fps; } ;


 int FUNC_0 (int *,int ) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,float const) ;

__attribute__((used)) static void FUNC_4( input_thread_t *VAR_0 )
{

    const float VAR_1 = FUNC_1(VAR_0)->master->f_fps;
    if( VAR_1 > 1.f )
    {
        FUNC_3( VAR_0, "sub-original-fps", VAR_1 );
        FUNC_0( VAR_0, FUNC_2( VAR_0, "sub-fps" ) );
    }
}
