
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_20__ {char* psz_name; } ;
typedef TYPE_2__ vlc_family_t ;
typedef int uni_char_t ;
struct TYPE_21__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_22__ {int fallback_map; } ;
typedef TYPE_4__ filter_sys_t ;
struct TYPE_24__ {int nfont; int * fonts; } ;
struct TYPE_19__ {int const* s; } ;
struct TYPE_23__ {TYPE_1__ u; int type; } ;
typedef TYPE_5__ FcValue ;
typedef int FcResult ;
typedef int FcPattern ;
typedef TYPE_6__ FcFontSet ;
typedef int FcChar8 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_6__*) ;
 TYPE_6__* FUNC_3 (int ,int *,scalar_t__,int *,int *) ;
 int VAR_2 ;
 int FUNC_4 (int *,int ,TYPE_5__,int ) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,int ,int **) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (TYPE_2__*,int *) ;
 TYPE_2__* FUNC_9 (TYPE_3__*,char*,TYPE_2__**,int *,int *) ;
 char* FUNC_10 (char const*) ;
 int FUNC_11 (int ) ;
 int VAR_5 ;
 int FUNC_12 (char*) ;
 TYPE_2__* VAR_6 ;
 scalar_t__ FUNC_13 (char const*,char*) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (int *,char*,TYPE_2__*) ;
 TYPE_2__* FUNC_16 (int *,char*) ;

vlc_family_t *FUNC_17( filter_t *VAR_7, const char *VAR_8,
                                       uni_char_t VAR_9 )
{

    FUNC_11( VAR_9 );

    vlc_family_t *VAR_10 = ((void*)0);
    filter_sys_t *VAR_11 = VAR_7->p_sys;

    char *VAR_12 = FUNC_10( VAR_8 );

    if( FUNC_14( !VAR_12 ) )
        return ((void*)0);

    VAR_10 = FUNC_16( &VAR_11->fallback_map, VAR_12 );

    if( VAR_10 != VAR_6 )
    {
        FUNC_12( VAR_12 );
        return VAR_10;
    }
    else
        VAR_10 = ((void*)0);

    const char *VAR_13 = "";
    FcPattern *VAR_14 = FUNC_5();
    FcValue VAR_15;
    VAR_15.type = VAR_4;
    VAR_15.u.s = ( const FcChar8* ) VAR_8;
    FUNC_4( VAR_14, VAR_0, VAR_15, VAR_1 );
    if( FUNC_0( VAR_5, VAR_14, VAR_2 ) == VAR_3 )
    {
        FUNC_1( VAR_14 );
        FcResult VAR_16;
        FcFontSet* VAR_17 = FUNC_3( VAR_5, VAR_14, VAR_3, ((void*)0), &VAR_16 );
        if( VAR_17 )
        {
            for( int VAR_18 = 0; VAR_18 < VAR_17->nfont; ++VAR_18 )
            {
                char* VAR_19 = ((void*)0);
                FUNC_7( VAR_17->fonts[VAR_18],
                                    VAR_0, 0, ( FcChar8** )( &VAR_19 ) );


                if( FUNC_13( VAR_13, VAR_19 ) )
                {
                    vlc_family_t *VAR_20 = FUNC_9( VAR_7, VAR_19,
                                                      &VAR_10, ((void*)0), ((void*)0) );

                    if( FUNC_14( !VAR_20 ) )
                    {
                        FUNC_2( VAR_17 );
                        FUNC_6( VAR_14 );
                        if( VAR_10 )
                            FUNC_8( VAR_10, ((void*)0) );
                        FUNC_12( VAR_12 );
                        return ((void*)0);
                    }

                    VAR_13 = VAR_20->psz_name;
                }
            }
            FUNC_2( VAR_17 );
        }
    }
    FUNC_6( VAR_14 );

    if( VAR_10 )
        FUNC_15( &VAR_11->fallback_map, VAR_12, VAR_10 );

    FUNC_12( VAR_12 );
    return VAR_10;
}
