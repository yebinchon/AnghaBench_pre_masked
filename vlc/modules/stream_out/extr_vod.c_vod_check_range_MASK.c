
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ i_length; } ;
typedef TYPE_1__ vod_media_t ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(vod_media_t *VAR_2, const char *VAR_3,
                    int64_t VAR_4, int64_t VAR_5)
{
    (void) VAR_3;

    if (VAR_2->i_length > 0 && (VAR_4 > VAR_2->i_length
                                  || VAR_5 > VAR_2->i_length))
        return VAR_0;

    return VAR_1;
}
