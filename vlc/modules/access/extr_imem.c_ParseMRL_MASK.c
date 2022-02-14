
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;


 int VAR_0 ;


 scalar_t__ FUNC_0 (char**,char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,char*,...) ;
 char* FUNC_3 (char*,char) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 char* FUNC_5 (char const*) ;
 int FUNC_6 (char*,int *,int ) ;
 int FUNC_7 (int *,char*,int) ;
 int FUNC_8 (int *,char*,int ) ;
 int FUNC_9 (int *,char*,char*) ;

__attribute__((used)) static void FUNC_10(vlc_object_t *VAR_1, const char *VAR_2)
{
    static const struct {
        const char *name;
        int type;
    } VAR_3[] = {
        { "id", 129 },
        { "group", 129 },
        { "cat", 129 },
        { "samplerate", 129 },
        { "channels", 129 },
        { "width", 129 },
        { "height", 129 },
        { "cookie", 128 },
        { "codec", 128 },
        { "language", 128 },
        { "dar", 128 },
        { "fps", 128 },
        { ((void*)0), -1 }
    };

    char *VAR_4 = FUNC_5(VAR_2);
    if (!VAR_4)
        return;
    char *VAR_5 = VAR_4;

    while (VAR_5) {
        char *VAR_6 = FUNC_3(VAR_5, ':');
        if (VAR_6)
            *VAR_6++ = '\0';

        char *VAR_7 = VAR_5;
        char *VAR_8 = FUNC_3(VAR_5, '=');
        if (VAR_8) {
            *VAR_8++ = '\0';
            FUNC_2(VAR_1, "option '%s' value '%s'", VAR_7, VAR_8);
        } else {
            FUNC_2(VAR_1, "option '%s' without value (unsupported)", VAR_7);
        }

        char *VAR_9;
        if (FUNC_0(&VAR_9, "imem-%s", VAR_7) < 0)
            VAR_9 = ((void*)0);
        for (unsigned VAR_10 = 0; VAR_9 && VAR_3[VAR_10].name; VAR_10++) {
            if (FUNC_4(VAR_3[VAR_10].name, VAR_7))
                continue;

            FUNC_7(VAR_1, VAR_9, VAR_3[VAR_10].type | VAR_0);
            if (VAR_3[VAR_10].type == 129 && VAR_8) {
                FUNC_8(VAR_1, VAR_9, FUNC_6(VAR_8, ((void*)0), 0));
            } else if (VAR_3[VAR_10].type == 128 && VAR_8) {
                FUNC_9(VAR_1, VAR_9, VAR_8);
            }
            break;
        }
        FUNC_1(VAR_9);


        VAR_5 = VAR_6;
    }
    FUNC_1(VAR_4);
}
