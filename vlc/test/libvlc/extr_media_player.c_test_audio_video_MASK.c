
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int libvlc_media_player_t ;
struct TYPE_4__ {int psz_device; struct TYPE_4__* p_next; } ;
typedef TYPE_1__ libvlc_audio_output_device_t ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static void FUNC_9(libvlc_media_player_t *VAR_0)
{
    bool VAR_1 = FUNC_4(VAR_0);
    FUNC_5(VAR_0, 1);
    FUNC_0(FUNC_4(VAR_0));
    FUNC_5(VAR_0, 0);
    FUNC_0(!FUNC_4(VAR_0));
    FUNC_6(VAR_0);
    FUNC_0(FUNC_4(VAR_0));
    FUNC_6(VAR_0);
    FUNC_0(!FUNC_4(VAR_0));
    FUNC_5(VAR_0, VAR_1);
    FUNC_0(FUNC_4(VAR_0) == VAR_1);

    FUNC_0(FUNC_7(VAR_0) == 0.);
    FUNC_8(VAR_0, 0.);
    FUNC_8(VAR_0, 2.5);
    FUNC_0(FUNC_7(VAR_0) == 2.5);
    FUNC_8(VAR_0, 0.);
    FUNC_8(VAR_0, 0.);
    FUNC_0(FUNC_7(VAR_0) == 0.);

    libvlc_audio_output_device_t *VAR_2 = FUNC_1(VAR_0);
    for (libvlc_audio_output_device_t *VAR_3 = VAR_2; VAR_3 != ((void*)0); VAR_3 = VAR_3->p_next)
    {
        FUNC_3( VAR_0, ((void*)0), VAR_3->psz_device );
    }
    FUNC_2( VAR_2 );
}
