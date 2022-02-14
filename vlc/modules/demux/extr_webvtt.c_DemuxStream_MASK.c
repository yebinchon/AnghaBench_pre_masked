
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int s; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_5__ {int p_streamparser; } ;
typedef TYPE_2__ demux_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2( demux_t *VAR_2 )
{
    demux_sys_t *VAR_3 = VAR_2->p_sys;

    char *VAR_4 = FUNC_0( VAR_2->s );
    FUNC_1( VAR_3->p_streamparser, VAR_4 );

    return ( VAR_4 == ((void*)0) ) ? VAR_0 : VAR_1;
}
