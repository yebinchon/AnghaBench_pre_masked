
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int encoder_t ;
typedef int buff ;
typedef int AVDictionary ;


 scalar_t__ FUNC_0 (int **,char const*,char*,int ) ;
 int FUNC_1 (int *,char*,char const*) ;
 scalar_t__ FUNC_2 (char*,int,char*,float) ;

__attribute__((used)) static void FUNC_3( encoder_t *VAR_0, AVDictionary** VAR_1, const char* VAR_2, float VAR_3 )
{
    char VAR_4[128];
    if ( FUNC_2( VAR_4, sizeof(VAR_4), "%f", VAR_3 ) < 0 )
        return;
    if( FUNC_0( VAR_1, VAR_2, VAR_4, 0 ) < 0 )
        FUNC_1( VAR_0, "Failed to set encoder option %s", VAR_2 );
}
