
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
struct vlc_logger_operations {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char const*) ;
 struct vlc_logger_operations const VAR_3 ;
 char* FUNC_1 (char*) ;
 struct vlc_logger_operations const VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 void* VAR_5 ;

__attribute__((used)) static const struct vlc_logger_operations *FUNC_5(vlc_object_t *VAR_6,
                                                void **restrict VAR_7)
{
    int VAR_8 = -1;

    if (!FUNC_3(VAR_6, "quiet"))
    {
        const char *VAR_9 = FUNC_1("VLC_VERBOSE");
        if (VAR_9 != ((void*)0))
           VAR_8 = FUNC_0(VAR_9);
        else
           VAR_8 = FUNC_4(VAR_6, "verbose");
    }

    if (VAR_8 < 0)
        return ((void*)0);

    VAR_8 += VAR_2;
    if (VAR_8 > VAR_1)
        VAR_8 = VAR_1;

    *VAR_7 = VAR_5 + VAR_8;





    return &VAR_4;
}
