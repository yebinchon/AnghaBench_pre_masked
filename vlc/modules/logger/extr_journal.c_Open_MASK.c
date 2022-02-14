
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
struct vlc_logger_operations {int dummy; } ;


 struct vlc_logger_operations const VAR_0 ;
 int FUNC_0 (int *,char*) ;

__attribute__((used)) static const struct vlc_logger_operations *FUNC_1(vlc_object_t *VAR_1, void **VAR_2)
{
    if (!FUNC_0(VAR_1, "syslog"))
        return ((void*)0);

    (void) VAR_2;
    return &VAR_0;
}
