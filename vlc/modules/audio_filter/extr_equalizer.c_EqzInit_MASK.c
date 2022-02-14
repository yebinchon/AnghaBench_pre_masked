
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;


struct TYPE_29__ {char* psz_string; } ;
typedef TYPE_2__ vlc_value_t ;
typedef int vlc_object_t ;
struct TYPE_30__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_31__ {int i_band; float* f_alpha; float* f_beta; float* f_gamma; int b_2eqz; float f_gamp; float* f_amp; float** x; float** x2; float*** y; float*** y2; } ;
typedef TYPE_4__ filter_sys_t ;
struct TYPE_32__ {int i_band; TYPE_1__* band; } ;
typedef TYPE_5__ eqz_config_t ;
struct TYPE_28__ {float f_alpha; float f_beta; float f_gamma; int f_frequency; } ;


 int FUNC_0 (int ,int *,TYPE_2__,TYPE_2__,TYPE_4__*) ;
 int FUNC_1 (int,float,int,TYPE_5__*) ;
 int FUNC_2 (int ,int *,TYPE_2__,TYPE_2__,TYPE_4__*) ;
 int FUNC_3 (int ,int *,TYPE_2__,TYPE_2__,TYPE_4__*) ;
 int FUNC_4 (int ,int *,TYPE_2__,TYPE_2__,TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (float*) ;
 int FUNC_7 (TYPE_3__*,char*,int,float,float,...) ;
 int FUNC_8 (TYPE_3__*,char*) ;
 int FUNC_9 (int *,char*,int (*) (int ,int *,TYPE_2__,TYPE_2__,TYPE_4__*),TYPE_4__*) ;
 int FUNC_10 (int *,char*,int) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int *,char*,TYPE_2__*) ;
 int FUNC_13 (int *,char*) ;
 void* FUNC_14 (int,int) ;
 int * FUNC_15 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_16( filter_t *VAR_6, int VAR_7 )
{
    filter_sys_t *VAR_8 = VAR_6->p_sys;
    eqz_config_t VAR_9;
    int VAR_10, VAR_11;
    vlc_value_t VAR_12, VAR_13, VAR_14;
    vlc_object_t *VAR_15 = FUNC_15(VAR_6);
    int VAR_16 = VAR_1;

    bool VAR_17 = FUNC_13( VAR_15, "equalizer-vlcfreqs" );
    FUNC_1( VAR_7, 1.0f, VAR_17, &VAR_9 );


    VAR_8->i_band = VAR_9.i_band;
    VAR_8->f_alpha = FUNC_14( VAR_8->i_band, sizeof(float) );
    VAR_8->f_beta = FUNC_14( VAR_8->i_band, sizeof(float) );
    VAR_8->f_gamma = FUNC_14( VAR_8->i_band, sizeof(float) );
    if( !VAR_8->f_alpha || !VAR_8->f_beta || !VAR_8->f_gamma )
        goto error;

    for( VAR_10 = 0; VAR_10 < VAR_8->i_band; VAR_10++ )
    {
        VAR_8->f_alpha[VAR_10] = VAR_9.band[VAR_10].f_alpha;
        VAR_8->f_beta[VAR_10] = VAR_9.band[VAR_10].f_beta;
        VAR_8->f_gamma[VAR_10] = VAR_9.band[VAR_10].f_gamma;
    }


    VAR_8->b_2eqz = 0;
    VAR_8->f_gamp = 1.0f;
    VAR_8->f_amp = FUNC_14( VAR_8->i_band, sizeof(float) );
    if( !VAR_8->f_amp )
        goto error;

    for( VAR_10 = 0; VAR_10 < VAR_8->i_band; VAR_10++ )
    {
        VAR_8->f_amp[VAR_10] = 0.0f;
    }


    for( VAR_11 = 0; VAR_11 < 32; VAR_11++ )
    {
        VAR_8->x[VAR_11][0] =
        VAR_8->x[VAR_11][1] =
        VAR_8->x2[VAR_11][0] =
        VAR_8->x2[VAR_11][1] = 0.0f;

        for( VAR_10 = 0; VAR_10 < VAR_8->i_band; VAR_10++ )
        {
            VAR_8->y[VAR_11][VAR_10][0] =
            VAR_8->y[VAR_11][VAR_10][1] =
            VAR_8->y2[VAR_11][VAR_10][0] =
            VAR_8->y2[VAR_11][VAR_10][1] = 0.0f;
        }
    }

    FUNC_10( VAR_15, "equalizer-bands", VAR_5 | VAR_3 );
    FUNC_10( VAR_15, "equalizer-preset", VAR_5 | VAR_3 );

    VAR_8->b_2eqz = FUNC_11( VAR_15, "equalizer-2pass" );

    FUNC_10( VAR_15, "equalizer-preamp", VAR_4 | VAR_3 );


    FUNC_12( VAR_15, "equalizer-preset", &VAR_12 );
    FUNC_12( VAR_15, "equalizer-bands", &VAR_13 );
    FUNC_12( VAR_15, "equalizer-preamp", &VAR_14 );


    if ( VAR_13 == ((void*)0) || *VAR_13 == '\0' )
        FUNC_3( FUNC_5( VAR_15 ), ((void*)0), VAR_12, VAR_12, VAR_8 );
    FUNC_6( VAR_12 );
    FUNC_0( FUNC_5( VAR_15 ), ((void*)0), VAR_13, VAR_13, VAR_8 );
    FUNC_2( FUNC_5( VAR_15 ), ((void*)0), VAR_14, VAR_14, VAR_8 );


    if (!VAR_13 || !*VAR_13)
    {
        FUNC_8(VAR_6, "No preset selected");
        FUNC_6( VAR_13 );
        FUNC_6( VAR_8->f_amp );
        VAR_16 = VAR_0;
        goto error;
    }
    FUNC_6( VAR_13 );


    FUNC_9( VAR_15, "equalizer-preset", FUNC_3, VAR_8 );
    FUNC_9( VAR_15, "equalizer-bands", FUNC_0, VAR_8 );
    FUNC_9( VAR_15, "equalizer-preamp", FUNC_2, VAR_8 );
    FUNC_9( VAR_15, "equalizer-2pass", FUNC_4, VAR_8 );

    FUNC_7( VAR_6, "equalizer loaded for %d Hz with %d bands %d pass",
                        VAR_7, VAR_8->i_band, VAR_8->b_2eqz ? 2 : 1 );
    for( VAR_10 = 0; VAR_10 < VAR_8->i_band; VAR_10++ )
    {
        FUNC_7( VAR_6, "   %.2f Hz -> factor:%f alpha:%f beta:%f gamma:%f",
                 VAR_9.band[VAR_10].f_frequency, VAR_8->f_amp[VAR_10],
                 VAR_8->f_alpha[VAR_10], VAR_8->f_beta[VAR_10], VAR_8->f_gamma[VAR_10]);
    }
    return VAR_2;

error:
    FUNC_6( VAR_8->f_alpha );
    FUNC_6( VAR_8->f_beta );
    FUNC_6( VAR_8->f_gamma );
    return VAR_16;
}
