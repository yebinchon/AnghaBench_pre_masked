
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {scalar_t__ type; } ;
typedef TYPE_1__ json_value ;
typedef int json_settings ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int *,char const*,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,char*,...) ;

__attribute__((used)) static inline
json_value * FUNC_4(vlc_object_t *VAR_1, const char *VAR_2)
{
    json_settings VAR_3;
    char VAR_4[128];
    FUNC_2 (&VAR_3, 0, sizeof (json_settings));
    json_value *VAR_5 = FUNC_0(&VAR_3, VAR_2, VAR_4);
    if (VAR_5 == ((void*)0))
    {
        FUNC_3(VAR_1, "Can't parse json data: %s", VAR_4);
        goto error;
    }
    if (VAR_5->type != VAR_0)
    {
        FUNC_3(VAR_1, "wrong json root node");
        goto error;
    }

    return VAR_5;

error:
    if (VAR_5) FUNC_1(VAR_5);
    return ((void*)0);
}
