
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int fe_sec_voltage_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;

__attribute__((used)) static fe_sec_voltage_t FUNC_1( vlc_object_t *VAR_3 )
{
    switch( FUNC_0( VAR_3, "dvb-voltage" ) )
    {
        case 0: return VAR_2;
        case 13: return VAR_0;
        case 18: return VAR_1;
        default: return VAR_2;
    }
}
