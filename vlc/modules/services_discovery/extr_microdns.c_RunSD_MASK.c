
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct discovery_sys {int i_nb_service_names; int ppsz_service_names; int p_microdns; } ;
struct TYPE_4__ {struct discovery_sys* p_sys; } ;
typedef TYPE_1__ services_discovery_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ,TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_3 ;

__attribute__((used)) static void *
FUNC_4( void *VAR_4 )
{
    services_discovery_t *VAR_5 = ( services_discovery_t* )VAR_4;
    struct discovery_sys *VAR_6 = VAR_5->p_sys;

    int VAR_7 = FUNC_2( VAR_6->p_microdns,
                                VAR_6->ppsz_service_names,
                                VAR_6->i_nb_service_names,
                                VAR_1, FUNC_0(VAR_0),
                                VAR_3, VAR_2, VAR_5 );

    if( VAR_7 < 0 )
        FUNC_3( FUNC_1( VAR_5 ), "listen", VAR_7 );

    return ((void*)0);
}
