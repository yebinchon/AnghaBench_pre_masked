
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_8__ {scalar_t__ i_fd; int psz_device; } ;
typedef TYPE_2__ demux_sys_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;

__attribute__((used)) static int FUNC_3( demux_t *VAR_2 )
{
    demux_sys_t *VAR_3 = VAR_2->p_sys;

    FUNC_2( VAR_2, "opening device '%s'", VAR_3->psz_device );
    if( FUNC_1( VAR_2, VAR_3->psz_device ) )
    {
        FUNC_2( VAR_2, "'%s' is an audio device", VAR_3->psz_device );
        VAR_3->i_fd = FUNC_0( VAR_2 );
    }

    if( VAR_3->i_fd < 0 )
        return VAR_0;
    return VAR_1;
}
