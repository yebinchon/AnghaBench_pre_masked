
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libvlc_media_t ;
typedef int libvlc_instance_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int *,char*) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 char* FUNC_4 (char const*,int *) ;
 int FUNC_5 (int ) ;

libvlc_media_t *FUNC_6( libvlc_instance_t *VAR_1,
                                       const char *VAR_2 )
{
    char *VAR_3 = FUNC_4( VAR_2, ((void*)0) );
    if( FUNC_3(VAR_3 == ((void*)0)) )
    {
        FUNC_2( "%s", FUNC_5(VAR_0) );
        return ((void*)0);
    }

    libvlc_media_t *VAR_4 = FUNC_1( VAR_1, VAR_3 );
    FUNC_0( VAR_3 );
    return VAR_4;
}
