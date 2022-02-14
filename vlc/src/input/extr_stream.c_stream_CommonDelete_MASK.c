
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ vlc_iconv_t ;
struct TYPE_7__ {int psz_url; } ;
typedef TYPE_2__ stream_t ;
struct TYPE_6__ {scalar_t__ conv; } ;
struct TYPE_8__ {int * block; int * peek; TYPE_1__ text; } ;
typedef TYPE_3__ stream_priv_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_2__*) ;

void FUNC_4(stream_t *VAR_0)
{
    stream_priv_t *VAR_1 = (stream_priv_t *)VAR_0;

    if (VAR_1->text.conv != (vlc_iconv_t)(-1))
        FUNC_2(VAR_1->text.conv);

    if (VAR_1->peek != ((void*)0))
        FUNC_0(VAR_1->peek);
    if (VAR_1->block != ((void*)0))
        FUNC_0(VAR_1->block);

    FUNC_1(VAR_0->psz_url);
    FUNC_3(VAR_0);
}
