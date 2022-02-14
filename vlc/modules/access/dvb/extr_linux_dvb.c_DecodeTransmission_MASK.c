
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int fe_transmit_mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static fe_transmit_mode_t FUNC_2( vlc_object_t *VAR_3 )
{
    fe_transmit_mode_t VAR_4 = 0;
    int VAR_5 = FUNC_1( VAR_3, "dvb-transmission" );

    FUNC_0( VAR_3, "using transmission=%d", VAR_5 );

    switch( VAR_5 )
    {
        case 0: VAR_4 = VAR_2; break;
        case 2: VAR_4 = VAR_0; break;
        case 8: VAR_4 = VAR_1; break;
        default:
            FUNC_0( VAR_3, "terrestrial dvb has transmission mode not set, using auto");
            VAR_4 = VAR_2;
            break;
    }
    return VAR_4;
}
