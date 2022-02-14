
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int libvlc_instance_t ;
struct TYPE_7__ {char* psz_name; char* psz_description; struct TYPE_7__* p_next; } ;
typedef TYPE_1__ libvlc_audio_output_t ;
struct TYPE_8__ {char* psz_device; char* psz_description; struct TYPE_8__* p_next; } ;
typedef TYPE_2__ libvlc_audio_output_device_t ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int *,char*) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int * FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,char*,char*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9 (void)
{
    libvlc_instance_t *VAR_0 = FUNC_5 (0, ((void*)0));
    FUNC_0 (VAR_0 != ((void*)0));

    libvlc_audio_output_t *VAR_1 = FUNC_3 (VAR_0);
    FUNC_0 (VAR_1 != ((void*)0));

    FUNC_8 ("Audio outputs:");
    for (const libvlc_audio_output_t *VAR_2 = VAR_1; VAR_2 != ((void*)0); VAR_2 = VAR_2->p_next)
    {
        libvlc_audio_output_device_t *VAR_3;

        FUNC_7(" %s: %s\n", VAR_2->psz_name, VAR_2->psz_description);

        VAR_3 = FUNC_1 (VAR_0, VAR_2->psz_name);
        if (VAR_3 == ((void*)0))
            continue;
        for (const libvlc_audio_output_device_t *VAR_4 = VAR_3;
             VAR_4 != ((void*)0);
             VAR_4 = VAR_4->p_next)
             FUNC_7("  %s: %s\n", VAR_4->psz_device, VAR_4->psz_description);

        FUNC_2 (VAR_3);
    }
    FUNC_4 (VAR_1);
    FUNC_6 (VAR_0);
}
