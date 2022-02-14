
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_9__ {unsigned int i_selected_dev; } ;
typedef TYPE_2__ aout_sys_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char**,char*,unsigned int,char*,char*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 char* FUNC_6 (char*) ;
 char* FUNC_7 (char*,char) ;
 char* FUNC_8 (char*,char*,char**) ;
 char* FUNC_9 (TYPE_1__*,char*) ;
 int FUNC_10 (TYPE_1__*,char*,char*) ;
 int FUNC_11 (TYPE_1__*,int ,char*,int ) ;

__attribute__((used)) static void
FUNC_12(audio_output_t *VAR_0)
{
    aout_sys_t *VAR_1 = VAR_0->sys;
    char *VAR_2 = FUNC_9(VAR_0, "auhal-warned-devices");
    bool VAR_3 = 0;
    unsigned VAR_4 = 0;


    if (VAR_2)
    {
        char *VAR_5 = FUNC_6(VAR_2);
        if (VAR_5)
        {
            char *VAR_6;
            for (const char *VAR_7 = FUNC_8(VAR_5, ";", &VAR_6);
                 VAR_7 != ((void*)0) && !VAR_3;
                 VAR_7 = FUNC_8(((void*)0), ";", &VAR_6))
            {
                VAR_4++;
                int VAR_8 = FUNC_2(VAR_7);
                if (VAR_8 >= 0 && (unsigned) VAR_8 == VAR_1->i_selected_dev)
                {
                    VAR_3 = 1;
                    break;
                }
            }
            FUNC_4(VAR_5);
        }
    }


    if (!VAR_3)
    {
        FUNC_5(VAR_0, "You should configure your speaker layout with "
                "Audio Midi Setup in /Applications/Utilities. VLC will "
                "output Stereo only.");
        FUNC_11(VAR_0,
            FUNC_0("Audio device is not configured"), "%s",
            FUNC_0("You should configure your speaker layout with "
            "\"Audio Midi Setup\" in /Applications/"
            "Utilities. VLC will output Stereo only."));


        if (VAR_4 >= 10)
        {
            char *VAR_9 = FUNC_7(VAR_2, ';');
            if (VAR_9)
                *VAR_9 = 0;
        }


        char *VAR_10;
        if (FUNC_1(&VAR_10, "%u%s%s", VAR_1->i_selected_dev,
                     VAR_2 ? ";" : "",
                     VAR_2 ? VAR_2 : "") != -1)
        {
            FUNC_3("auhal-warned-devices", VAR_10);
            FUNC_10(VAR_0, "auhal-warned-devices", VAR_10);
            FUNC_4(VAR_10);
        }
    }
    FUNC_4(VAR_2);
}
