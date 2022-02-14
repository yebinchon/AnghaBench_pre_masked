
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* p_next; } ;
typedef TYPE_1__ vlc_family_t ;



__attribute__((used)) static inline void FUNC_0( vlc_family_t **VAR_0, vlc_family_t *VAR_1 )
{
    while( *VAR_0 )
        VAR_0 = &( *VAR_0 )->p_next;

    *VAR_0 = VAR_1;
}
