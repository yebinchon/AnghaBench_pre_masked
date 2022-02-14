
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int b_unicode; int b_authtls; int b_mlst; } ;
typedef TYPE_1__ ftp_features_t ;


 int * FUNC_0 (char const*,char*) ;

__attribute__((used)) static void FUNC_1( void *VAR_0, const char *VAR_1 )
{
    ftp_features_t *VAR_2 = VAR_0;

    if( FUNC_0( VAR_1, "UTF8" ) != ((void*)0) )
        VAR_2->b_unicode = 1;
    else
    if( FUNC_0( VAR_1, "AUTH TLS" ) != ((void*)0) )
        VAR_2->b_authtls = 1;

    if( FUNC_0( VAR_1, "MLST" ) != ((void*)0) )
        VAR_2->b_mlst = 1;
}
