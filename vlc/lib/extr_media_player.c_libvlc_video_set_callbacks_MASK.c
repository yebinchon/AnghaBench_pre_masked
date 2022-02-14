
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libvlc_media_player_t ;


 int FUNC_0 (int *,char*,void*) ;
 int FUNC_1 (int *,char*,char*) ;

void FUNC_2( libvlc_media_player_t *VAR_0,
    void *(*VAR_1) (void *, void **),
    void (*VAR_2) (void *, void *, void *const *),
    void (*VAR_3) (void *, void *),
    void *VAR_4 )
{
    FUNC_0( VAR_0, "vmem-lock", VAR_1 );
    FUNC_0( VAR_0, "vmem-unlock", VAR_2 );
    FUNC_0( VAR_0, "vmem-display", VAR_3 );
    FUNC_0( VAR_0, "vmem-data", VAR_4 );
    FUNC_1( VAR_0, "dec-dev", "none" );
    FUNC_1( VAR_0, "vout", "vmem" );
    FUNC_1( VAR_0, "window", "dummy" );
}
