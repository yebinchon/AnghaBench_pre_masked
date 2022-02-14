
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_7__ {scalar_t__ p_vbi_dec; int lock; } ;
typedef TYPE_2__ decoder_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,char*,int ,TYPE_2__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4( vlc_object_t *VAR_2 )
{
    decoder_t *VAR_3 = (decoder_t*) VAR_2;
    decoder_sys_t *VAR_4 = VAR_3->p_sys;

    FUNC_1( VAR_3, "vbi-opaque", VAR_0, VAR_4 );
    FUNC_1( VAR_3, "vbi-page", VAR_1, VAR_4 );

    FUNC_3( &VAR_4->lock );

    if( VAR_4->p_vbi_dec )
        FUNC_2( VAR_4->p_vbi_dec );
    FUNC_0( VAR_4 );
}
