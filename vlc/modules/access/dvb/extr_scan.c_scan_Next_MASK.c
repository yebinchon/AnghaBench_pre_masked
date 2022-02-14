
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_10__ {scalar_t__ i_frequency; } ;
typedef TYPE_1__ scan_tuner_config_t ;
struct TYPE_11__ {double i_time_start; int * p_dialog_id; int p_obj; int parameter; } ;
typedef TYPE_2__ scan_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*,double*) ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,int ,double) ;
 size_t FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (char*,int const) ;
 int * FUNC_7 (int ,int,double,char*,char*,char const*,double,size_t const,int ) ;
 int FUNC_8 (int ,int *,double,char const*,double,size_t const,int ) ;
 double FUNC_9 () ;

__attribute__((used)) static int FUNC_10( scan_t *VAR_3, scan_tuner_config_t *VAR_4 )
{
    double VAR_5;
    int VAR_6;

    if( FUNC_4( VAR_3 ) )
        return VAR_1;


    {
        FUNC_5( VAR_4, &VAR_3->parameter );

        VAR_6 = FUNC_0( VAR_3, VAR_4, &VAR_5 );
        if( VAR_6 )
            return VAR_6;
    }


    const size_t VAR_7 = FUNC_3( VAR_3 );
    const vlc_tick_t VAR_8 = VAR_5 > 0.005 ? (FUNC_9() - VAR_3->i_time_start) * ( 1.0 / VAR_5 - 1.0 ) : -1;
    char VAR_9[VAR_0];
    const char *VAR_10 = FUNC_1("%.1f MHz (%d services)\n~%s remaining");

    if( VAR_8 >= 0 )
        FUNC_2( VAR_3->p_obj, "Scan ETA %s | %f", FUNC_6( VAR_9, VAR_8/1000000 ), VAR_5 * 100 );

    if( VAR_3->p_dialog_id == ((void*)0) )
    {
        VAR_3->p_dialog_id =
            FUNC_7( VAR_3->p_obj, 0,
                                         VAR_5, FUNC_1("Cancel"),
                                         FUNC_1("Scanning DVB"), VAR_10,
                                         (double)VAR_4->i_frequency / 1000000,
                                         VAR_7,
                                         FUNC_6( VAR_9, VAR_8/1000000 ) );
    }
    else
    {
        FUNC_8( VAR_3->p_obj, VAR_3->p_dialog_id,
                                         VAR_5, VAR_10,
                                         (double)VAR_4->i_frequency / 1000000,
                                         VAR_7,
                                         FUNC_6( VAR_9, VAR_8/1000000 ) );
    }

    return VAR_2;
}
