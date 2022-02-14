
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct vlc_stream_filter_private {int module; } ;
struct TYPE_5__ {int psz_filepath; int s; } ;
typedef TYPE_1__ stream_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ) ;
 struct vlc_stream_filter_private* FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(stream_t *VAR_0)
{
    struct vlc_stream_filter_private *VAR_1 = FUNC_3(VAR_0);

    FUNC_1(VAR_0, VAR_1->module);
    FUNC_2(VAR_0->s);
    FUNC_0(VAR_0->psz_filepath);
}
