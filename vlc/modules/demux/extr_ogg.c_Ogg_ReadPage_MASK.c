
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ogg_page ;
struct TYPE_4__ {int s; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_5__ {int oy; } ;
typedef TYPE_2__ demux_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_4( demux_t *VAR_3, ogg_page *VAR_4 )
{
    demux_sys_t *VAR_5 = VAR_3->p_sys ;
    int VAR_6 = 0;
    char *VAR_7;

    while( FUNC_1( &VAR_5->oy, VAR_4 ) != 1 )
    {
        VAR_7 = FUNC_0( &VAR_5->oy, VAR_0 );

        VAR_6 = FUNC_3( VAR_3->s, VAR_7, VAR_0 );
        if( VAR_6 <= 0 )
            return VAR_1;

        FUNC_2( &VAR_5->oy, VAR_6 );
    }

    return VAR_2;
}
