
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrl ;
typedef int libvlc_media_t ;
typedef int libvlc_instance_t ;


 int * FUNC_0 (int *,char*) ;
 int FUNC_1 (char*,int,char*,int) ;

libvlc_media_t *FUNC_2( libvlc_instance_t *VAR_0, int VAR_1 )
{
    char VAR_2[16];
    FUNC_1( VAR_2, sizeof(VAR_2), "fd://%d", VAR_1 );

    return FUNC_0( VAR_0, VAR_2 );
}
