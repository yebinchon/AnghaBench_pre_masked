
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ encoder_t ;
struct TYPE_5__ {scalar_t__ h; int p_sei; int psz_stat_name; } ;
typedef TYPE_2__ encoder_sys_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static void FUNC_8( vlc_object_t *VAR_2 )
{
    encoder_t *VAR_3 = (encoder_t *)VAR_2;
    encoder_sys_t *VAR_4 = VAR_3->p_sys;

    FUNC_0( VAR_4->psz_stat_name );
    FUNC_0( VAR_4->p_sei );

    if( VAR_4->h )
    {
        FUNC_1( VAR_3, "framecount still in libx264 buffer: %d", FUNC_7( VAR_4->h ) );
        FUNC_6( VAR_4->h );
    }
}
