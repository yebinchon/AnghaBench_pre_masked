
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_object_t ;
struct discovery_sys {scalar_t__ i_nb_service_names; int * p_microdns; int thread; int * ppsz_service_names; int items; int stop; } ;
struct TYPE_2__ {int b_renderer; int psz_service_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct discovery_sys*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int ) ;
 int FUNC_4 (int *,char*,int ,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*,int) ;
 TYPE_1__* VAR_8 ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int ,int *,int ) ;

__attribute__((used)) static int
FUNC_9( vlc_object_t *VAR_9, struct discovery_sys *VAR_10, bool VAR_11 )
{
    int VAR_12 = VAR_5;
    FUNC_0( &VAR_10->stop, 0 );
    FUNC_7( &VAR_10->items );


    for( unsigned int VAR_13 = 0; VAR_13 < VAR_2; ++VAR_13 )
    {
        if( VAR_8[VAR_13].b_renderer == VAR_11 )
            VAR_10->ppsz_service_names[VAR_10->i_nb_service_names++] =
                VAR_8[VAR_13].psz_service_name;
    }

    if( VAR_10->i_nb_service_names == 0 )
    {
        FUNC_5( VAR_9, "no services found" );
        goto error;
    }
    for( unsigned int VAR_14 = 0; VAR_14 < VAR_10->i_nb_service_names; ++VAR_14 )
        FUNC_4( VAR_9, "mDNS: listening to %s %s", VAR_10->ppsz_service_names[VAR_14],
                 VAR_11 ? "renderer" : "service" );

    int VAR_15;
    if( ( VAR_15 = FUNC_3( &VAR_10->p_microdns, VAR_0,
                                VAR_1 ) ) < 0 )
    {
        FUNC_6( VAR_9, "init", VAR_15 );
        goto error;
    }

    if( FUNC_8( &VAR_10->thread, VAR_11 ? VAR_3 : VAR_4, VAR_9,
                   VAR_7) )
    {
        FUNC_5( VAR_9, "Can't run the lookup thread" );
        goto error;
    }

    return VAR_6;
error:
    if( VAR_10->p_microdns != ((void*)0) )
        FUNC_2( VAR_10->p_microdns );
    FUNC_1( VAR_10 );
    return VAR_12;
}
