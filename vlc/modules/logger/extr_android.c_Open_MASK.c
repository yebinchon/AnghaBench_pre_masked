
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
struct vlc_logger_operations {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct vlc_logger_operations const VAR_1 ;
 int FUNC_0 (int *,char*) ;

__attribute__((used)) static const struct vlc_logger_operations *FUNC_1(vlc_object_t *VAR_2, void **VAR_3)
{
    int VAR_4 = FUNC_0(VAR_2, "verbose");

    if (VAR_4 < 0)
        return ((void*)0);

    VAR_4 += VAR_0;
    *VAR_3 = (void *)(uintptr_t)VAR_4;

    return &VAR_1;
}
