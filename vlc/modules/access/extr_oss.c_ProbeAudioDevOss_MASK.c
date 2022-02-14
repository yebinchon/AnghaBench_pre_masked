
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int demux_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int ,int*) ;
 int FUNC_1 (int *,char*,char const*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char const*,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static bool FUNC_5( demux_t *VAR_4, const char *VAR_5 )
{
    int VAR_6;
    int VAR_7 = FUNC_3( VAR_5, VAR_1 | VAR_0 );

    if( VAR_7 < 0 )
    {
        FUNC_1( VAR_4, "cannot open device %s for OSS audio (%s)",
                 VAR_5, FUNC_4(VAR_3) );
        goto open_failed;
    }


    if( FUNC_0( VAR_7, VAR_2, &VAR_6 ) < 0 )
    {
        FUNC_1( VAR_4, "cannot get audio caps (%s)",
                 FUNC_4(VAR_3) );
        goto open_failed;
    }

    if( VAR_7 >= 0 )
        FUNC_2( VAR_7 );

    return 1;

open_failed:
    if( VAR_7 >= 0 )
        FUNC_2( VAR_7 );
    return 0;
}
