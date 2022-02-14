
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_playlist_item_t ;
struct randomizer {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct randomizer*,int const*) ;
 int FUNC_2 (struct randomizer*,size_t) ;

void
FUNC_3(struct randomizer *VAR_0, const vlc_playlist_item_t *VAR_1)
{
    ssize_t VAR_2 = FUNC_1(VAR_0, VAR_1);
    FUNC_0(VAR_2 != -1);
    FUNC_2(VAR_0, (size_t) VAR_2);
}
