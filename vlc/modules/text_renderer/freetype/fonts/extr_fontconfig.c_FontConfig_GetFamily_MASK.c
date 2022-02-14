
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int const vlc_family_t ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_6__ {int family_map; int p_families; } ;
typedef TYPE_2__ filter_sys_t ;
typedef scalar_t__ FcResult ;
typedef int FcPattern ;
typedef int FcChar8 ;
typedef scalar_t__ FcBool ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int *,scalar_t__*) ;
 int VAR_10 ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int ,int const*) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_9 (int *,int ,int ,int*) ;
 scalar_t__ FUNC_10 (int *,int ,int ,int **) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int const* FUNC_11 (TYPE_1__*,char*,int *,int *,char*) ;
 int FUNC_12 (char*,int,int const,int const,int const*) ;
 char* FUNC_13 (char const*) ;
 int VAR_14 ;
 int FUNC_14 (char*) ;
 int const* VAR_15 ;
 char* FUNC_15 (char const*) ;
 scalar_t__ FUNC_16 (int) ;
 int const* FUNC_17 (int *,char*) ;

const vlc_family_t *FUNC_18( filter_t *VAR_16, const char *VAR_17 )
{
    filter_sys_t *VAR_18 = VAR_16->p_sys;

    char *VAR_19 = FUNC_13( VAR_17 );

    if( FUNC_16( !VAR_19 ) )
        return ((void*)0);

    vlc_family_t *VAR_20 =
            FUNC_17( &VAR_18->family_map, VAR_19 );

    if( VAR_20 != VAR_15 )
    {
        FUNC_14( VAR_19 );
        return VAR_20;
    }

    VAR_20 = FUNC_11( VAR_16, VAR_19, &VAR_18->p_families,
                          &VAR_18->family_map, VAR_19 );

    FUNC_14( VAR_19 );
    if( !VAR_20 )
        return ((void*)0);

    for( int VAR_21 = 0; VAR_21 < 4; ++VAR_21 )
    {
        bool const VAR_22 = VAR_21 & 1;
        bool const VAR_23 = VAR_21 & 2;

        int VAR_24 = 0;
        FcResult VAR_25 = VAR_11;
        FcPattern *VAR_26, *VAR_27;
        FcChar8* VAR_28;
        FcBool VAR_29;
        char *VAR_30 = ((void*)0);


        VAR_26 = FUNC_6();
        if (!VAR_26) continue;


        FUNC_5( VAR_26, VAR_0, (const FcChar8*) VAR_17 );
        FUNC_3( VAR_26, VAR_3, VAR_13 );
        FUNC_4( VAR_26, VAR_4, VAR_23 ? VAR_5 : VAR_6 );
        FUNC_4( VAR_26, VAR_7, VAR_22 ? VAR_8 : VAR_9 );


        FUNC_1( VAR_26 );
        if( !FUNC_0( VAR_14, VAR_26, VAR_10 ) )
        {
            FUNC_7( VAR_26 );
            continue;
        }


        VAR_27 = FUNC_2( VAR_14, VAR_26, &VAR_25 );
        FUNC_7( VAR_26 );
        if( !VAR_27 || VAR_25 == VAR_12 ) continue;


        if( ( VAR_11 != FUNC_8( VAR_27, VAR_3, 0, &VAR_29 ) )
            || ( VAR_29 != VAR_13 ) )
        {
            FUNC_7( VAR_27 );
            continue;
        }
        if( VAR_11 != FUNC_9( VAR_27, VAR_2, 0, &VAR_24 ) )
        {
            VAR_24 = 0;
        }

        if( VAR_11 != FUNC_10( VAR_27, VAR_0, 0, &VAR_28 ) )
        {
            FUNC_7( VAR_27 );
            continue;
        }

        if( VAR_11 == FUNC_10( VAR_27, VAR_1, 0, &VAR_28 ) )
            VAR_30 = FUNC_15( (const char*)VAR_28 );

        FUNC_7( VAR_27 );

        if( !VAR_30 )
            continue;

        FUNC_12( VAR_30, VAR_24, VAR_22, VAR_23, VAR_20 );
    }

    return VAR_20;
}
