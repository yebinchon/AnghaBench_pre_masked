
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_player_program {int * name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int,char const*) ;

int
FUNC_2(struct vlc_player_program *VAR_2, int VAR_3,
                          const char *VAR_4)
{
    FUNC_0((char *)VAR_2->name);
    VAR_2->name = FUNC_1(VAR_3, VAR_4);
    return VAR_2->name != ((void*)0) ? VAR_1 : VAR_0;
}
