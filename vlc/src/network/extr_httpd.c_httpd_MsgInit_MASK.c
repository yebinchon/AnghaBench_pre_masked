
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_version; int * p_body; scalar_t__ i_body; scalar_t__ i_body_offset; int * p_headers; scalar_t__ i_headers; int * psz_args; int * psz_url; scalar_t__ i_status; int i_proto; int i_type; int * cl; } ;
typedef TYPE_1__ httpd_message_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(httpd_message_t *VAR_2)
{
    VAR_2->cl = ((void*)0);
    VAR_2->i_type = VAR_0;
    VAR_2->i_proto = VAR_1;
    VAR_2->i_version = -1;

    VAR_2->i_status = 0;

    VAR_2->psz_url = ((void*)0);
    VAR_2->psz_args = ((void*)0);

    VAR_2->i_headers = 0;
    VAR_2->p_headers = ((void*)0);

    VAR_2->i_body_offset = 0;
    VAR_2->i_body = 0;
    VAR_2->p_body = ((void*)0);
}
