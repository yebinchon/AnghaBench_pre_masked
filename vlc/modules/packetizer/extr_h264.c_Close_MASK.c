
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_7__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_8__ {int p_ccs; int packetizer; } ;
typedef TYPE_2__ decoder_sys_t ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int,int *,int *) ;
 int FUNC_2 (TYPE_2__*,int,int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6( vlc_object_t *VAR_2 )
{
    decoder_t *VAR_3 = (decoder_t*)VAR_2;
    decoder_sys_t *VAR_4 = VAR_3->p_sys;
    int VAR_5;

    FUNC_0( VAR_4 );
    for( VAR_5 = 0; VAR_5 <= VAR_1; VAR_5++ )
        FUNC_2( VAR_4, VAR_5, ((void*)0), ((void*)0) );
    for( VAR_5 = 0; VAR_5 <= VAR_0; VAR_5++ )
        FUNC_1( VAR_4, VAR_5, ((void*)0), ((void*)0) );

    FUNC_5( &VAR_4->packetizer );

    FUNC_3( VAR_4->p_ccs );

    FUNC_4( VAR_4 );
}
