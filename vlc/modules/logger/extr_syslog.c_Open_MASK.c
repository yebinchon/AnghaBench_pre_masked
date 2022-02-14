
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
struct vlc_logger_operations {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (char*,int,int) ;
 struct vlc_logger_operations const VAR_7 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 char* FUNC_5 (int *,char*) ;

__attribute__((used)) static const struct vlc_logger_operations *FUNC_6(vlc_object_t *VAR_8,
                                                void **restrict VAR_9)
{
    if (!FUNC_3(VAR_8, "syslog"))
        return ((void*)0);

    char *VAR_10 = FUNC_5(VAR_8, "syslog-ident");
    if (VAR_10 == ((void*)0))
        VAR_10 = (char *)VAR_6;
    *VAR_9 = VAR_10;


    int VAR_11 = FUNC_4(VAR_8, "syslog-facility");

    FUNC_1(VAR_10, VAR_4 | VAR_3, VAR_11);


    int VAR_12 = FUNC_0(VAR_1) | FUNC_0(VAR_5) | FUNC_0(VAR_2);
    if (FUNC_3(VAR_8, "syslog-debug"))
        VAR_12 |= FUNC_0(VAR_0);

    FUNC_2(VAR_12);

    return &VAR_7;
}
