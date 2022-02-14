
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ srtp_session_t ;



__attribute__((used)) static inline unsigned FUNC_0 (const srtp_session_t *VAR_0)
{
    return (VAR_0->flags >> 4) & 3;
}
