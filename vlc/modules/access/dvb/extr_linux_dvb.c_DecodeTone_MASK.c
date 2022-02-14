
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int fe_sec_tone_mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;

__attribute__((used)) static fe_sec_tone_mode_t FUNC_1( vlc_object_t *VAR_2 )
{
    switch( FUNC_0( VAR_2, "dvb-tone" ) )
    {
        case 0: return VAR_0;
        case 1: return VAR_1;
        default: return VAR_0;
    }
}
