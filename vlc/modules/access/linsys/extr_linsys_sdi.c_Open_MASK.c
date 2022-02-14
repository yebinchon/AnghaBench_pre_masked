
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_6__ {TYPE_2__* p_sys; int pf_control; int pf_demux; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_7__ {int i_link; } ;
typedef TYPE_2__ demux_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_4( vlc_object_t *VAR_4 )
{
    demux_t *VAR_5 = (demux_t *)VAR_4;
    demux_sys_t *VAR_6;
    int VAR_7;

    if ( (VAR_7 = FUNC_0( VAR_4 )) != VAR_3 )
        return VAR_7;


    VAR_5->pf_demux = VAR_1;
    VAR_5->pf_control = VAR_0;
    VAR_6 = VAR_5->p_sys;

    VAR_6->i_link = FUNC_3( VAR_5, "linsys-sdi-link" );

    if( FUNC_1( VAR_5 ) != VAR_3 )
    {
        FUNC_2( VAR_6 );
        return VAR_2;
    }

    return VAR_3;
}
