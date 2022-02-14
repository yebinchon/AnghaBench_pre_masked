
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* psz_host; scalar_t__* psz_protocol; } ;
typedef TYPE_1__ vlc_url_t ;



__attribute__((used)) static bool
FUNC_0(const vlc_url_t *VAR_0)
{
    return VAR_0 && VAR_0->psz_protocol && VAR_0->psz_protocol[0]
        && VAR_0->psz_host && VAR_0->psz_host[0];
}
