
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_playlist_t ;
struct playlist_state {int has_next; int has_prev; int current; int playlist_size; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct playlist_state *VAR_0, vlc_playlist_t *VAR_1)
{
    VAR_0->playlist_size = FUNC_0(VAR_1);
    VAR_0->current = FUNC_1(VAR_1);
    VAR_0->has_prev = FUNC_3(VAR_1);
    VAR_0->has_next = FUNC_2(VAR_1);
}
