
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int uint8_t ;
struct TYPE_4__ {int pf_control; int pf_readdir; int s; } ;
typedef TYPE_1__ stream_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;
 int FUNC_3 (int ,int const**,int) ;

int FUNC_4(vlc_object_t *VAR_4)
{
    stream_t *VAR_5 = (stream_t *)VAR_4;
    const uint8_t *VAR_6;

    FUNC_0(VAR_5);

    if (FUNC_3(VAR_5->s, &VAR_6, 10) < 10
     || FUNC_2((const char *)VAR_6, "[Reference]", 11))
        return VAR_1;

    FUNC_1(VAR_5, "found WMS metafile");
    VAR_5->pf_readdir = VAR_0;
    VAR_5->pf_control = VAR_3;
    return VAR_2;
}
