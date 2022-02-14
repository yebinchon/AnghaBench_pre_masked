
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ session_id; scalar_t__ orig_ip_version; int orig_host; int username; } ;
typedef TYPE_1__ sdp_t ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1( sdp_t *VAR_0, sdp_t *VAR_1 )
{







    if (FUNC_0 (VAR_0->username, VAR_1->username)
     || (VAR_0->session_id != VAR_1->session_id)
     || (VAR_0->orig_ip_version != VAR_1->orig_ip_version)
     || FUNC_0 (VAR_0->orig_host, VAR_1->orig_host))
        return 0;

    return 1;
}
