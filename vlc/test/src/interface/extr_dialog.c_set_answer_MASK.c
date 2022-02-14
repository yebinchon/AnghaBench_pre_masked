
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cb_answer {int b_dismiss; char const* psz_username; int i_action; } ;



__attribute__((used)) static inline void
FUNC_0(struct cb_answer *VAR_0, bool VAR_1, const char *VAR_2,
           int VAR_3)
{
    if (VAR_0 != ((void*)0))
    {
        VAR_0->b_dismiss = VAR_1;
        VAR_0->psz_username = VAR_2;
        VAR_0->i_action = VAR_3;
    }
}
