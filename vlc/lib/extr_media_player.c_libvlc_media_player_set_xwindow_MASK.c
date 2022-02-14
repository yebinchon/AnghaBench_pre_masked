
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int libvlc_media_player_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,scalar_t__) ;
 int FUNC_2 (int *,char*,char*) ;

void FUNC_3( libvlc_media_player_t *VAR_0,
                                      uint32_t VAR_1 )
{
    FUNC_0 (VAR_0 != ((void*)0));

    FUNC_2 (VAR_0, "dec-dev", "");
    FUNC_2 (VAR_0, "vout", "");
    FUNC_2 (VAR_0, "window", VAR_1 ? "embed-xid,any" : "");
    FUNC_1 (VAR_0, "drawable-xid", VAR_1);
}
