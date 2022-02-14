
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int fe_bandwidth_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static fe_bandwidth_t FUNC_2( vlc_object_t *VAR_4 )
{
    fe_bandwidth_t VAR_5 = 0;
    int VAR_6 = FUNC_1( VAR_4, "dvb-bandwidth" );

    FUNC_0( VAR_4, "using bandwidth=%d", VAR_6 );

    switch( VAR_6 )
    {
        case 0: VAR_5 = VAR_3; break;
        case 6: VAR_5 = VAR_0; break;
        case 7: VAR_5 = VAR_1; break;
        case 8: VAR_5 = VAR_2; break;
        default:
            FUNC_0( VAR_4, "terrestrial dvb has bandwidth not set, using auto" );
            VAR_5 = VAR_3;
            break;
    }
    return VAR_5;
}
