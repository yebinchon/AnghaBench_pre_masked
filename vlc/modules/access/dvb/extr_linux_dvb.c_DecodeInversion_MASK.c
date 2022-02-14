
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int fe_spectral_inversion_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static fe_spectral_inversion_t FUNC_2( vlc_object_t *VAR_3 )
{
    int VAR_4;
    fe_spectral_inversion_t VAR_5 = 0;

    VAR_4 = FUNC_1( VAR_3, "dvb-inversion" );
    FUNC_0( VAR_3, "using inversion=%d", VAR_4 );

    switch( VAR_4 )
    {
        case 0: VAR_5 = VAR_1; break;
        case 1: VAR_5 = VAR_2; break;
        case 2: VAR_5 = VAR_0; break;
        default:
            FUNC_0( VAR_3, "dvb has inversion not set, using auto");
            VAR_5 = VAR_0;
            break;
    }
    return VAR_5;
}
