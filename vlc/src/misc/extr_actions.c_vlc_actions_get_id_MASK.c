
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_action_id_t ;
struct name2action {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct name2action* FUNC_0 (char const*,int ,int ,int,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;

vlc_action_id_t
FUNC_2 (const char *VAR_4)
{
    const struct name2action *VAR_5;

    if (FUNC_1 (VAR_4, "key-", 4))
        return VAR_0;
    VAR_4 += 4;

    VAR_5 = FUNC_0(VAR_4, VAR_3, VAR_1, sizeof(*VAR_5), VAR_2);
    return (VAR_5 != ((void*)0)) ? VAR_5->id : VAR_0;
}
