
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int scan_tuner_config_t ;
typedef int scan_t ;
typedef int scan_multiplex_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int const*,int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static scan_multiplex_t *FUNC_6( scan_t *VAR_0, uint16_t VAR_1,
                                                     const scan_tuner_config_t *VAR_2 )
{
    scan_multiplex_t *VAR_3 = FUNC_2( VAR_0, VAR_1 );
    if( VAR_3 == ((void*)0) )
    {
        VAR_3 = FUNC_4( VAR_2, VAR_1 );
        if( FUNC_0(VAR_3) )
        {
            if ( FUNC_5(!FUNC_1( VAR_0, VAR_3 )) )
            {
                FUNC_3( VAR_3 );
                return ((void*)0);
            }
        }
    }
    return VAR_3;
}
