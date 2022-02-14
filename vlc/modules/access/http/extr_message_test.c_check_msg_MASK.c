
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct vlc_http_msg const vlc_http_msg ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 size_t FUNC_3 (char*) ;
 int FUNC_4 (struct vlc_http_msg const*) ;
 char* FUNC_5 (struct vlc_http_msg const*,size_t*,int) ;
 scalar_t__ FUNC_6 (struct vlc_http_msg const*) ;
 scalar_t__ FUNC_7 (struct vlc_http_msg const*,int,int) ;
 struct vlc_http_msg const* FUNC_8 (char*) ;
 int * FUNC_9 (struct vlc_http_msg const*) ;

__attribute__((used)) static void FUNC_10(struct vlc_http_msg *VAR_1,
                      void (*VAR_2)(const struct vlc_http_msg *))
{
    struct vlc_http_msg *VAR_3;
    char *VAR_4;
    size_t VAR_5;

    VAR_2(VAR_1);

    VAR_4 = FUNC_5(VAR_1, &VAR_5, 0);
    FUNC_0(VAR_4 != ((void*)0));
    FUNC_0(FUNC_3(VAR_4) == VAR_5);
    VAR_3 = FUNC_8(VAR_4);
    FUNC_1(VAR_0, "%s", VAR_4);
    FUNC_2(VAR_4);

    if (FUNC_6(VAR_1) >= 0)
    {
        FUNC_0(VAR_3 != ((void*)0));
        VAR_2(VAR_3);
        FUNC_4(VAR_3);
    }

    VAR_3 = (struct vlc_http_msg *)FUNC_7(VAR_1, 1, 1);
    FUNC_0(VAR_3 != ((void*)0));
    VAR_2(VAR_3);
    FUNC_0(FUNC_9(VAR_3) == ((void*)0));
    FUNC_4(VAR_3);

    VAR_2(VAR_1);
    FUNC_4(VAR_1);
}
