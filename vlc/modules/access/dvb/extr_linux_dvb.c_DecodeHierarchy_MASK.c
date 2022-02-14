
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int fe_hierarchy_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static fe_hierarchy_t FUNC_2( vlc_object_t *VAR_5 )
{
    fe_hierarchy_t VAR_6 = 0;
    int VAR_7 = FUNC_1( VAR_5, "dvb-hierarchy" );

    FUNC_0( VAR_5, "using hierarchy=%d", VAR_7 );

    switch( VAR_7 )
    {
        case -1: VAR_6 = VAR_4; break;
        case 0: VAR_6 = VAR_3; break;
        case 1: VAR_6 = VAR_0; break;
        case 2: VAR_6 = VAR_1; break;
        case 4: VAR_6 = VAR_2; break;
        default:
            FUNC_0( VAR_5, "terrestrial dvb has hierarchy not set, using auto");
            VAR_6 = VAR_3;
            break;
    }
    return VAR_6;
}
