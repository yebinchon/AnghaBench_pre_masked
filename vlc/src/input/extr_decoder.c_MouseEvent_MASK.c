
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_mouse_t ;
struct decoder_owner {int mouse_lock; int mouse_opaque; int (* mouse_event ) (int const*,int ) ;} ;
typedef int decoder_t ;


 struct decoder_owner* FUNC_0 (int *) ;
 int FUNC_1 (int const*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4( const vlc_mouse_t *VAR_0, void *VAR_1 )
{
    decoder_t *VAR_2 = VAR_1;
    struct decoder_owner *VAR_3 = FUNC_0( VAR_2 );

    FUNC_2( &VAR_3->mouse_lock );
    if( VAR_3->mouse_event )
        VAR_3->mouse_event( VAR_0, VAR_3->mouse_opaque);
    FUNC_3( &VAR_3->mouse_lock );
}
