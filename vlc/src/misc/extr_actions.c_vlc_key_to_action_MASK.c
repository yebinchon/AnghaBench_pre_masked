
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int i_int; } ;
typedef TYPE_1__ vlc_value_t ;
typedef int vlc_object_t ;
typedef int uint32_t ;
struct mapping {int action; } ;


 int VAR_0 ;
 int VAR_1 ;
 void** FUNC_0 (int *,void* const*,int ) ;
 int FUNC_1 (int *,char*,int ) ;

__attribute__((used)) static int FUNC_2 (vlc_object_t *VAR_2, const char *VAR_3,
                              vlc_value_t VAR_4, vlc_value_t VAR_5, void *VAR_6)
{
    void *const *VAR_7 = VAR_6;
    const void **VAR_8;
    uint32_t VAR_9 = VAR_5.i_int;

    VAR_8 = FUNC_0 (&VAR_9, VAR_7, VAR_1);
    if (VAR_8 == ((void*)0))
        return VAR_0;

    const struct mapping *VAR_10 = *VAR_8;

    (void) VAR_3;
    (void) VAR_4;
    return FUNC_1 (VAR_2, "key-action", VAR_10->action);
}
