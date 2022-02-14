
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int input_thread_t ;
struct TYPE_5__ {float slave_subs_rate; TYPE_1__* master; } ;
typedef TYPE_2__ input_thread_private_t ;
struct TYPE_4__ {float f_fps; } ;


 TYPE_2__* FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1( input_thread_t *VAR_0, float VAR_1 )
{
    input_thread_private_t *VAR_2 = FUNC_0(VAR_0);
    const float VAR_3 = FUNC_0(VAR_0)->master->f_fps;
    if( VAR_3 > 1.f && VAR_1 > 1.f )
        VAR_2->slave_subs_rate = VAR_3 / VAR_1;
    else if ( VAR_2->slave_subs_rate != 0 )
        VAR_2->slave_subs_rate = 1.f;
}
