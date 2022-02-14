
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int uint8_t ;
struct TYPE_3__ {int s; } ;
typedef TYPE_1__ stream_t ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int const*,char*,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ,int const**,int) ;

__attribute__((used)) static int FUNC_4 (vlc_object_t *VAR_1)
{
    stream_t *VAR_2 = (stream_t *)VAR_1;
    const uint8_t *VAR_3;

    if (FUNC_3 (VAR_2->s, &VAR_3, 3) < 3)
        return VAR_0;

    if (FUNC_1 (VAR_3, "\x1f\x8b\x08", 3))
        return VAR_0;

    FUNC_2 (VAR_1, "detected gzip compressed stream");
    return FUNC_0 (VAR_2, "zcat");
}
