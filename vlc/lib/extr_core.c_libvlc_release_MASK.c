
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_mutex_t ;
struct TYPE_4__ {int ref_count; int p_libvlc_int; int instance_lock; } ;
typedef TYPE_1__ libvlc_instance_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9( libvlc_instance_t *VAR_0 )
{
    vlc_mutex_t *VAR_1 = &VAR_0->instance_lock;
    int VAR_2;

    FUNC_7( VAR_1 );
    FUNC_0( VAR_0->ref_count > 0 );
    VAR_2 = --VAR_0->ref_count;
    FUNC_8( VAR_1 );

    if( VAR_2 == 0 )
    {
        FUNC_6( VAR_1 );
        FUNC_4( VAR_0->p_libvlc_int );
        FUNC_2( VAR_0->p_libvlc_int );
        FUNC_3( VAR_0->p_libvlc_int );
        FUNC_1( VAR_0 );
        FUNC_5 ();
    }
}
