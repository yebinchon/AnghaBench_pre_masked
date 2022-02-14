
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef unsigned int vlc_tick_t ;
typedef int uint8_t ;
typedef int scan_tuner_config_t ;
struct TYPE_18__ {scalar_t__ b_use_nit; } ;
struct TYPE_19__ {int (* pf_tune ) (TYPE_2__*,int ,int *) ;int (* pf_read ) (TYPE_2__*,int ,unsigned int,int,int *,size_t*) ;int p_cbdata; int (* pf_stats ) (TYPE_2__*,int ,int *) ;int (* pf_filter ) (TYPE_2__*,int ,int ,int) ;TYPE_1__ parameter; } ;
typedef TYPE_2__ scan_t ;
struct TYPE_20__ {int i_snr; } ;
typedef TYPE_3__ scan_session_t ;
typedef unsigned int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*) ;
 unsigned int FUNC_2 (TYPE_3__*) ;
 TYPE_3__* FUNC_3 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int *) ;
 int FUNC_5 (TYPE_2__*,int ,int *) ;
 int FUNC_6 (TYPE_2__*,int ,int ,int) ;
 int FUNC_7 (TYPE_2__*,int ,int ,int) ;
 int FUNC_8 (TYPE_2__*,int ,int ,int) ;
 int FUNC_9 (TYPE_2__*,int ,unsigned int,int,int *,size_t*) ;
 int FUNC_10 (TYPE_2__*,int ,int *) ;
 scalar_t__ FUNC_11 (int ) ;
 unsigned int FUNC_12 () ;

int FUNC_13( scan_t *VAR_8 )
{
    scan_tuner_config_t VAR_9;
    if( FUNC_0( VAR_8, &VAR_9 ) )
        return VAR_6;

    scan_session_t *VAR_10 = FUNC_3( VAR_8, &VAR_9 );
    if( FUNC_11(VAR_10 == ((void*)0)) )
        return VAR_5;

    if( VAR_8->pf_tune( VAR_8, VAR_8->p_cbdata, &VAR_9 ) != VAR_7 )
    {
        FUNC_1( VAR_8, VAR_10 );
        return VAR_5;
    }

    VAR_8->pf_filter( VAR_8, VAR_8->p_cbdata, VAR_0, 1 );
    VAR_8->pf_filter( VAR_8, VAR_8->p_cbdata, VAR_3, 1 );
    if( VAR_8->parameter.b_use_nit )
        VAR_8->pf_filter( VAR_8, VAR_8->p_cbdata, VAR_2, 1 );


    uint8_t VAR_11[VAR_4 * VAR_1];
    int64_t VAR_12 = FUNC_12();

    for( ;; )
    {
        unsigned VAR_13 = FUNC_2( VAR_10 );
        vlc_tick_t VAR_14 = FUNC_12() - VAR_12;
        if( VAR_14 > VAR_13 )
            break;

        size_t VAR_15 = 0;
        int VAR_16 = VAR_8->pf_read( VAR_8, VAR_8->p_cbdata,
                                     VAR_13 - VAR_14,
                                     VAR_1,
                                     (uint8_t *) &VAR_11, &VAR_15 );

        if( VAR_8->pf_stats )
            VAR_8->pf_stats( VAR_8, VAR_8->p_cbdata, &VAR_10->i_snr );

        if ( VAR_16 != VAR_7 )
            break;

        for( size_t VAR_17=0; VAR_17< VAR_15; VAR_17++ )
        {
            if( FUNC_4( VAR_10,
                                   &VAR_11[VAR_17 * VAR_4] ) )
                break;
        }
    }

    FUNC_1( VAR_8, VAR_10 );

    return VAR_7;
}
